/*
 * XREFs of EtwEventWrite @ 0x18005AF10
 * Callers:
 *     SbSelectProcedure @ 0x18002E9B0 (SbSelectProcedure.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     EtwEventWriteEndScenario @ 0x18005D140 (EtwEventWriteEndScenario.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826B0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x18008E010 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CF0D0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CF158 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D1860 (LdrpLogFatalUserCallbackException.c)
 *     SbpTraceContextUpdate @ 0x1800FE93C (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AF94 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWrite(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(RegHandle, (_DWORD)EventDescriptor, 0, 0, 0, 0LL, 0LL, UserDataCount, (__int64)UserData);
}
