/*
 * XREFs of WPP_SF_gg @ 0x180082578
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18004F974 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_gg(__int64 a1, __int64 a2, __int64 a3, double a4, ...)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, 52LL, &v5, 8LL, (__int64 *)va);
}
