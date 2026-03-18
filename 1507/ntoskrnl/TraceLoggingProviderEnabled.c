/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1400EFF88
 * Callers:
 *     EtwTraceAppStateChange @ 0x1405075DC (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     PopNotifyTelemetryOsState @ 0x140566B94 (PopNotifyTelemetryOsState.c)
 *     PopTransitionTelemetryOsState @ 0x1405825E0 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
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
