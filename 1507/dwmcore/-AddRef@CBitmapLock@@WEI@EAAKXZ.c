/*
 * XREFs of ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x18009B7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 72));
}
