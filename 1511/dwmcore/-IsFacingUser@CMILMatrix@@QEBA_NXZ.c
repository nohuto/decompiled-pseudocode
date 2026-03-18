/*
 * XREFs of ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180059984
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18015AAC8 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?GetDeterminant3D@CBaseMatrix@@QEBAMXZ @ 0x18013A4F0 (-GetDeterminant3D@CBaseMatrix@@QEBAMXZ.c)
 *     ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18013A524 (-IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z.c)
 */

bool __fastcall CMILMatrix::IsFacingUser(CMILMatrix *this)
{
  int v2; // ebx
  float Determinant3D; // xmm6_4

  v2 = 0;
  Determinant3D = CBaseMatrix::GetDeterminant3D(this);
  if ( CBaseMatrix::IsInvertableDeterminant(Determinant3D) )
  {
    LOBYTE(v2) = Determinant3D < 0.0;
    LOBYTE(v2) = (float)((float)((float)((float)((float)(*((float *)this + 4) * *((float *)this + 3))
                                               - (float)(*(float *)this * *((float *)this + 7)))
                                       * *((float *)this + 13))
                               + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 7))
                                               - (float)(*((float *)this + 3) * *((float *)this + 5)))
                                       * *((float *)this + 12)))
                       + (float)((float)((float)(*(float *)this * *((float *)this + 5))
                                       - (float)(*((float *)this + 4) * *((float *)this + 1)))
                               * *((float *)this + 15))) < 0.0 == v2;
  }
  return v2;
}
