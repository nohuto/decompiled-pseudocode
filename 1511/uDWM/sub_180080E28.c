/*
 * XREFs of sub_180080E28 @ 0x180080E28
 * Callers:
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001E6B4 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180080E28(double a1, int a2, double *a3, double *a4)
{
  double v6; // xmm6_8
  double v7; // xmm0_8
  float v8; // xmm1_4
  float v9; // xmm2_4
  double v10; // xmm1_8

  v6 = (double)a2 * a1;
  v7 = modf(v6, a3);
  v8 = v7;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - 0.0)) & _xmm);
  if ( v9 <= 0.0000011920929 )
  {
    v10 = v7;
  }
  else
  {
    if ( v7 > 0.4900000095367432 )
      *a3 = *a3 + 1.0;
    v10 = 1.0 - v7;
  }
  *a4 = v10 / v6;
}
