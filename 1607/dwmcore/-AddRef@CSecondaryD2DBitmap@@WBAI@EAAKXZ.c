/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800C1D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 264));
}
