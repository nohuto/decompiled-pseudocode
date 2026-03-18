/*
 * XREFs of ?AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x1800BF280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 232));
}
