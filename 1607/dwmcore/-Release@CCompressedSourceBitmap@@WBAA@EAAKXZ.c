/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x1800C1D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 256));
}
