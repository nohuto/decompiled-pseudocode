/*
 * XREFs of ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x1800C1CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 80));
}
