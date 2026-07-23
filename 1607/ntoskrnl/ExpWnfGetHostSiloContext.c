/*
 * XREFs of ExpWnfGetHostSiloContext @ 0x140462BB8
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1403F5D2C (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404AE73C (ExpWnfEnumerateScopeInstances.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 */

char *ExpWnfGetHostSiloContext()
{
  __int64 v0; // rax

  v0 = xHalTimerWatchdogStop();
  return (char *)PsGetServerSiloGlobals(v0) + 888;
}
