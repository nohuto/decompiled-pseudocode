/*
 * XREFs of EtwEventWrite @ 0x18000F6B0
 * Callers:
 *     EtwEventWriteEndScenario @ 0x18000CDE0 (EtwEventWriteEndScenario.c)
 *     SbSelectProcedure @ 0x180041D20 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800739D8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x1800817B0 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800BAFD0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800BB058 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800BD5D0 (LdrpLogFatalUserCallbackException.c)
 *     SbpTraceContextUpdate @ 0x1800F61C0 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18000F734 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
