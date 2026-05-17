/*
 * XREFs of RtlReleasePebLock @ 0x1800382A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
