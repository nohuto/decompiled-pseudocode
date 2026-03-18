/*
 * XREFs of ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x180084860
 * Callers:
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18002EF68 (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CMILBrushBitmap::ObviouslyHasZeroAlpha(CMILBrushBitmap *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 61);
  return v1 < 0.00000011920929 && v1 > -0.00000011920929;
}
