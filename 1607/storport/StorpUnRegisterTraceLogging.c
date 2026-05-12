/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C005FBE8
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C005E9D4 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0041E64 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  if ( g_StorpTraceLoggingInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    EtwUnregister(qword_1C004F030);
    qword_1C004F030 = 0LL;
    dword_1C004F010 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
