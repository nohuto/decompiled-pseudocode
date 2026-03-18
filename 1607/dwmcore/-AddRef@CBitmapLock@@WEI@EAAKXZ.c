/*
 * XREFs of ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x1800C1C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 72));
}
