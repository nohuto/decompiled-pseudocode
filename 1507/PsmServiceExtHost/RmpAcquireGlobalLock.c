/*
 * XREFs of RmpAcquireGlobalLock @ 0x18002E498
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS RmpAcquireGlobalLock()
{
  return RtlEnterCriticalSection(&RmpGlobalLock);
}
