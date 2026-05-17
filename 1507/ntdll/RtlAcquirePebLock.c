/*
 * XREFs of RtlAcquirePebLock @ 0x180038400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAcquirePebLock()
{
  return RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
