/*
 * XREFs of ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180051520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 80));
}
