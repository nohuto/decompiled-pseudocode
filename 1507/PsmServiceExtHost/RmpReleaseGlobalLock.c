/*
 * XREFs of RmpReleaseGlobalLock @ 0x18002E484
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     <none>
 */

NTSTATUS RmpReleaseGlobalLock()
{
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
