/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180050F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 32));
}
