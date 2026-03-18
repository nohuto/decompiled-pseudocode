/*
 * XREFs of ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x18009BDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::Release(__int64 a1)
{
  return CBitmapRealization::Release((CBitmapRealization *)(a1 - 24));
}
