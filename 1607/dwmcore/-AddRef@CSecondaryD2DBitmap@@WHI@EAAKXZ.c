/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800C2890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 120));
}
