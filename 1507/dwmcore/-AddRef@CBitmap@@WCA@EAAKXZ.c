/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180099E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 32));
}
