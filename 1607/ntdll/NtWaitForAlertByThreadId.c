/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A9B90
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x180062960 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180062AF0 (RtlSleepConditionVariableCS.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180066A4C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180066B7C (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForAlertByThreadId()
{
  __int64 result; // rax

  result = 444LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
