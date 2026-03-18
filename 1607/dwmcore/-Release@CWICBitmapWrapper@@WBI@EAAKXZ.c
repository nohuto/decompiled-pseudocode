/*
 * XREFs of ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800BFA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 24));
}
