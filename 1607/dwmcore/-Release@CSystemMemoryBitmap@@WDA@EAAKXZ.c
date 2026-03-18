/*
 * XREFs of ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800C1D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 48));
}
