/*
 * XREFs of WPP_SF_qd @ 0x140026A48
 * Callers:
 *     wWinMain @ 0x140015C78 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids, 38LL, (__int64 *)va);
}
