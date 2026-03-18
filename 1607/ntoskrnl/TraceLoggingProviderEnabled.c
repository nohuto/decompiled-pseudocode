/*
 * XREFs of TraceLoggingProviderEnabled @ 0x140088D10
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B4B50 (CmpLogTransactionAbortedWithChildName.c)
 *     EtwTraceProcess @ 0x14045D50C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     PopNotifyTelemetryOsState @ 0x14053056C (PopNotifyTelemetryOsState.c)
 *     PopTransitionTelemetryOsState @ 0x140545DA0 (PopTransitionTelemetryOsState.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054A9D8 (EtwpWriteAppStateChangeSummary.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140648E78 (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x140649328 (PnpTraceRebalanceResult.c)
 *     EtwTraceDeniedTokenCreation @ 0x1406A133C (EtwTraceDeniedTokenCreation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( hProvider->LevelPlus1 )
    return TlgKeywordOn(hProvider, eventKeyword) != 0;
  return v3;
}
