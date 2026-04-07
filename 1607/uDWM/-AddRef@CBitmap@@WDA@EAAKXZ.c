/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180051250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 48));
}
