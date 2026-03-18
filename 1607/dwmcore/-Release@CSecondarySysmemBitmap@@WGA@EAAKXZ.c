/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C0080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 96));
}
