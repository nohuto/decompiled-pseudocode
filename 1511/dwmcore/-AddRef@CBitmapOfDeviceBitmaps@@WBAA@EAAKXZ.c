/*
 * XREFs of ?AddRef@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ @ 0x1800BDCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 256));
}
