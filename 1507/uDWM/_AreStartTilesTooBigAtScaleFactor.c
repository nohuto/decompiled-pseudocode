/*
 * XREFs of _AreStartTilesTooBigAtScaleFactor @ 0x180007FA4
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180007DF8 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     MulDiv_0 @ 0x180048B52 (MulDiv_0.c)
 */

bool __fastcall AreStartTilesTooBigAtScaleFactor(int *a1)
{
  int v2; // edi
  float v4; // xmm1_4
  float v5; // xmm0_4

  v2 = (a1[10] + a1[11]) / 2;
  if ( !v2 )
    return 1;
  v4 = (float)MulDiv_0(150, a1[1], 100) / (float)v2;
  if ( (float)((float)a1[16] / 10.0) >= 28.0 )
    v5 = FLOAT_1_259843;
  else
    v5 = FLOAT_1_1538;
  return v4 > v5;
}
