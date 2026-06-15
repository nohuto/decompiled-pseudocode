/*
 * XREFs of WPP_SF_gggg @ 0x180099D80
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x180065408 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gggg(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_b190cc602318435bf1a291092083f9b6_Traceguids, 50LL, &v5);
}
