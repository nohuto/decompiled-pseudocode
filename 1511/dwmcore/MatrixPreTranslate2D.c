/*
 * XREFs of MatrixPreTranslate2D @ 0x18001D8FC
 * Callers:
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18001B4BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

struct D2DMatrix *__fastcall MatrixPreTranslate2D(struct D2DMatrix *a1, float a2, float a3)
{
  _DWORD v4[16]; // [rsp+20h] [rbp-50h] BYREF

  v4[11] = 0;
  v4[9] = 0;
  v4[8] = 0;
  v4[7] = 0;
  v4[6] = 0;
  v4[4] = 0;
  v4[3] = 0;
  v4[2] = 0;
  v4[1] = 0;
  v4[14] = 0;
  *(float *)&v4[12] = a2;
  *(float *)&v4[13] = a3;
  v4[15] = 1065353216;
  v4[10] = 1065353216;
  v4[5] = 1065353216;
  v4[0] = 1065353216;
  return D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v4);
}
