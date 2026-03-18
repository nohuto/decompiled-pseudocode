/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800BF9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 32));
}
