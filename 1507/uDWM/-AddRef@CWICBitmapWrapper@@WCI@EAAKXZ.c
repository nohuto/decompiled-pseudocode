/*
 * XREFs of ?AddRef@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004A8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CBitmap *)(a1 - 40));
}
