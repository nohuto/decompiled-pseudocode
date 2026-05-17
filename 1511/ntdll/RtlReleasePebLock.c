/*
 * XREFs of RtlReleasePebLock @ 0x18007AB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
