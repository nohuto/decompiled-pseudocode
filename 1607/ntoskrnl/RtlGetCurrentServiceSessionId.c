/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1400764A0
 * Callers:
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1406890AC (RtlGetConsoleSessionForegroundProcessId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  return *(unsigned int *)(PsGetServerSiloGlobals(-1LL) + 1008);
}
