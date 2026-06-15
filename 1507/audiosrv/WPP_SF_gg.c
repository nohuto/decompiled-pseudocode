/*
 * XREFs of WPP_SF_gg @ 0x18009CEBC
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18009A164 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gg(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids, 52LL, &v5);
}
