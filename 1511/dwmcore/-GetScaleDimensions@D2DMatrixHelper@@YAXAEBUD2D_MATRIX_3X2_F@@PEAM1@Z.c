/*
 * XREFs of ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18013A604
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18013A564 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

void __fastcall D2DMatrixHelper::GetScaleDimensions(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float v7; // xmm6_4
  float v8; // xmm0_4

  v7 = sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v8 = sqrtf_0((float)(*((float *)this + 2) * *((float *)this + 2)) + (float)(*((float *)this + 3) * *((float *)this + 3)));
  a2->m11 = v7;
  *a3 = v8;
}
