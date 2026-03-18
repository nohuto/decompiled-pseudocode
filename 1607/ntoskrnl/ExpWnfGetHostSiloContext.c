/*
 * XREFs of ExpWnfGetHostSiloContext @ 0x140463CE8
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1403F6E6C (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C2A0C (ExpWnfEnumerateScopeInstances.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002DFC (xHalTimerWatchdogStop.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 */

char *ExpWnfGetHostSiloContext()
{
  __int64 v0; // rax

  v0 = xHalTimerWatchdogStop();
  return (char *)PsGetServerSiloGlobals(v0) + 888;
}
