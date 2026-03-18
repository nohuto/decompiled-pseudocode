/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x180099EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 256));
}
