/*
 * XREFs of ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x18004A9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::Release(__int64 a1)
{
  return CWICBitmapWrapper::Release((CWICBitmapWrapper *)(a1 - 72));
}
