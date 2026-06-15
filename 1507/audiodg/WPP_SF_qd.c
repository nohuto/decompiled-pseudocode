/*
 * XREFs of WPP_SF_qd @ 0x140027554
 * Callers:
 *     wWinMain @ 0x1400177C0 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids, 38LL, (__int64 *)va);
}
