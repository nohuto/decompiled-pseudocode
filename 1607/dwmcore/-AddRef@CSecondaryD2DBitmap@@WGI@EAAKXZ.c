/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800C0090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 104));
}
