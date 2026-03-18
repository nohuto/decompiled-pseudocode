/*
 * XREFs of ?AddRef@CMILBrushBitmap@@WDI@EAAKXZ @ 0x1800C26D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 56));
}
