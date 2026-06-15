/*
 * XREFs of WPP_SF_qd @ 0x140027EA4
 * Callers:
 *     wWinMain @ 0x14000195C (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids, 38LL, (__int64 *)va);
}
