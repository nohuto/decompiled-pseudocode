/*
 * XREFs of ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800C1C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 32));
}
