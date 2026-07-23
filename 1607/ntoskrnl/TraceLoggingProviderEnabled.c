/*
 * XREFs of TraceLoggingProviderEnabled @ 0x14010CF00
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B2988 (CmpLogTransactionAbortedWithChildName.c)
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     PopNotifyTelemetryOsState @ 0x140530AAC (PopNotifyTelemetryOsState.c)
 *     PopTransitionTelemetryOsState @ 0x1405462E0 (PopTransitionTelemetryOsState.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054AF18 (EtwpWriteAppStateChangeSummary.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140648F5C (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x14064940C (PnpTraceRebalanceResult.c)
 *     EtwTraceDeniedTokenCreation @ 0x1406A1474 (EtwTraceDeniedTokenCreation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
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
