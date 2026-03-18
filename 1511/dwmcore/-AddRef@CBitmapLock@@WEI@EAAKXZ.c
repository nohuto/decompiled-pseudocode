/*
 * XREFs of ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x1800BE630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 72));
}
