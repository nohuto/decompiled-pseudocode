/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x18009C0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 16));
}
