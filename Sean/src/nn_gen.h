/*********************************************************************
* nn_gen.h
*********************************************************************/

#ifndef _NN_GEN_H_
#define _NN_GEN_H_

#include "nn_common.h"

/**********
* used for generating and saveing NN data input
*/

namespace nn {
    void from_pgm_labeled(std::vector<unsigned char> &selection, std::vector<unsigned char> &solution, std::vector<unsigned char> &image,
                          std::vector<float> &output_safe, std::vector<float> &output_unsafe);
    void write_file(const char *fname, std::vector<float> &output_safe, std::vector<float> &output_unsafe);
}

#endif
