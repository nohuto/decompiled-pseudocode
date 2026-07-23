/*
 * XREFs of RtlAcquirePebLock @ 0x18007B090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
