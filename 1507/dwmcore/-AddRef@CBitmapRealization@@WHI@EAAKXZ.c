/*
 * XREFs of ?AddRef@CBitmapRealization@@WHI@EAAKXZ @ 0x18009BED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 120));
}
