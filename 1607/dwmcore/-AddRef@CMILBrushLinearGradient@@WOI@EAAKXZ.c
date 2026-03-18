/*
 * XREFs of ?AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x1800C2710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CMILBrushLinearGradient::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 232));
}
