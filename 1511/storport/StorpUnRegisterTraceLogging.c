/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C0058888
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C005766C (RaSqmAndEtwCleanup.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C003BAB4 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  if ( g_StorpTraceLoggingInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    EtwUnregister(qword_1C0048050);
    qword_1C0048050 = 0LL;
    dword_1C0048030 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
