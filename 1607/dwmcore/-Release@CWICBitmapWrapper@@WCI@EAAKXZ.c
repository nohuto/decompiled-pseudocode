/*
 * XREFs of ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800BFA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 40));
}
