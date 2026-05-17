/*
 * XREFs of RtlTryAcquirePebLock @ 0x1800510D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlTryAcquirePebLock()
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
