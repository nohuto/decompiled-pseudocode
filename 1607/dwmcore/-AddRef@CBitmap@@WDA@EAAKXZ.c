/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800C1D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 48));
}
