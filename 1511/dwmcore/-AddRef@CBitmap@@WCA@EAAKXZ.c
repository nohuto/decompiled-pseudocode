/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800BE4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 32));
}
