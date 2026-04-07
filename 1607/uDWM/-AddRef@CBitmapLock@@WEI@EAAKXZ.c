/*
 * XREFs of ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180051510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 72));
}
