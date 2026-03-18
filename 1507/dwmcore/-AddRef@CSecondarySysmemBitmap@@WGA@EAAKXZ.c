/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x18009C0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 96));
}
