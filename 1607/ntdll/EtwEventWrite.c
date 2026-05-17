/*
 * XREFs of EtwEventWrite @ 0x18005AF20
 * Callers:
 *     SbSelectProcedure @ 0x18002E9C0 (SbSelectProcedure.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     EtwEventWriteEndScenario @ 0x18005D150 (EtwEventWriteEndScenario.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826C0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x18008E020 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CF0D0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CF158 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 *     SbpTraceContextUpdate @ 0x1800FE93C (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AFA4 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
