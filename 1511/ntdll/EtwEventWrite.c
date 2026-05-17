/*
 * XREFs of EtwEventWrite @ 0x180049CE0
 * Callers:
 *     SbSelectProcedure @ 0x18000EFD0 (SbSelectProcedure.c)
 *     EtwEventWriteEndScenario @ 0x18004B500 (EtwEventWriteEndScenario.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x1800895E0 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800C7CF0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800C7D78 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CA2F0 (LdrpLogFatalUserCallbackException.c)
 *     SbpTraceContextUpdate @ 0x1800F5AA0 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180049D14 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
