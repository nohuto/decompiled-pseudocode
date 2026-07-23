/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x140076520
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140689190 (RtlGetConsoleSessionForegroundProcessId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  return *(_DWORD *)(PsGetServerSiloGlobals(-1LL) + 1008);
}
