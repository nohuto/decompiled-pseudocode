/*
 * XREFs of ?AddRef@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180051230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 24));
}
