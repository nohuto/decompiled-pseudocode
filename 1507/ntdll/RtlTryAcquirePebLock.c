/*
 * XREFs of RtlTryAcquirePebLock @ 0x180008860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlTryAcquirePebLock()
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
