/*
 * XREFs of RtlReleasePebLock @ 0x1800382A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
