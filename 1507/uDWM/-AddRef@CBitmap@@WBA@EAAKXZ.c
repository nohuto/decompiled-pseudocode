/*
 * XREFs of ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x18004A7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 16));
}
