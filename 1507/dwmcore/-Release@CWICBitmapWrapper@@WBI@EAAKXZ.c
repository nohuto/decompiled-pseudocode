/*
 * XREFs of ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18009BE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 24));
}
