/*
 * XREFs of RtlAcquirePebLock @ 0x180038400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
