/*
 * XREFs of EtwpTraceLoggingProvEnableCallback @ 0x1405793E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EtwpTraceLoggingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  if ( ControlCode == 2 && CallbackContext == &PsProvTraceLoggingGuid )
    EtwpPsProvCaptureState(CallbackContext, MatchAnyKeyword);
}
