/*
 * XREFs of ?ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ @ 0x180081690
 * Callers:
 *     ?GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800837D8 (-GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILBrushSolid::ObviouslyHasZeroAlpha(CMILBrushSolid *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 13);
  return v1 < 0.00000011920929 && v1 > -0.00000011920929;
}
