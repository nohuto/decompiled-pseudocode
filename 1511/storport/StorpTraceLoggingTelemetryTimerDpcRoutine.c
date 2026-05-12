/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C003B9F0
 * Callers:
 *     <none>
 * Callees:
 *     StorpLogStatistics @ 0x1C0039B90 (StorpLogStatistics.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KDPC *v4; // rbx
  char v5; // al
  LARGE_INTEGER v6; // rdx
  struct _KTIMER *v7; // rcx
  ULONG v8; // r9d

  v4 = &g_StorpTraceLoggingPerformanceTimerDpc;
  v5 = 0;
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    StorpLogStatistics(v5 | 0x20);
    v6.QuadPart = -36000000000LL;
    v7 = &g_StorpTraceLoggingPerformanceTimer;
    v8 = 300000;
  }
  else
  {
    v4 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
    if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
    {
      StorpLogStatistics(3);
      v6.QuadPart = -138000000000LL;
      v7 = &g_StorpTraceLoggingHierarchicalResetTimer;
      v8 = 300000;
    }
    else
    {
      v4 = &g_StorpTraceLoggingDailyTimerDpc;
      if ( Dpc != &g_StorpTraceLoggingDailyTimerDpc )
        return;
      StorpLogStatistics(8);
      v6.QuadPart = -864000000000LL;
      v7 = &g_StorpTraceLoggingDailyTimer;
      v8 = 900000;
    }
  }
  KeSetCoalescableTimer(v7, v6, 0, v8, v4);
}
