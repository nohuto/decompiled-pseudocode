/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ @ 0x1800BE530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 256));
}
