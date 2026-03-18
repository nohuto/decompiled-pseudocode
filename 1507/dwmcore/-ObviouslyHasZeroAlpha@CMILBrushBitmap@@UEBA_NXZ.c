/*
 * XREFs of ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x1800810D0
 * Callers:
 *     ?GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800837D8 (-GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CMILBrushBitmap::ObviouslyHasZeroAlpha(CMILBrushBitmap *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 59);
  return v1 < 0.00000011920929 && v1 > -0.00000011920929;
}
