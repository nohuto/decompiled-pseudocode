/*
 * XREFs of ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180110A70
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AE20 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18018CBE4 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1800C0AFC (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180162380 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

bool __fastcall CMILMatrix::IsFacingUser(CMILMatrix *this, const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  int v3; // ebx
  float v4; // xmm6_4

  v3 = 0;
  v4 = Windows::Foundation::Numerics::determinant(this, a2);
  if ( CMILMatrix::IsInvertibleDeterminant(v4) )
  {
    LOBYTE(v3) = v4 < 0.0;
    LOBYTE(v3) = (float)((float)((float)((float)((float)(*((float *)this + 4) * *((float *)this + 3))
                                               - (float)(*(float *)this * *((float *)this + 7)))
                                       * *((float *)this + 13))
                               + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 7))
                                               - (float)(*((float *)this + 3) * *((float *)this + 5)))
                                       * *((float *)this + 12)))
                       + (float)((float)((float)(*(float *)this * *((float *)this + 5))
                                       - (float)(*((float *)this + 4) * *((float *)this + 1)))
                               * *((float *)this + 15))) < 0.0 == v3;
  }
  return v3;
}
