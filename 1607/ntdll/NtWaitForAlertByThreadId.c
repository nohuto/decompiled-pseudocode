/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A9B90
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlSleepConditionVariableSRW @ 0x180062950 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180062AE0 (RtlSleepConditionVariableCS.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     RtlDeleteTimerQueueEx @ 0x1800640C0 (RtlDeleteTimerQueueEx.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180066A3C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180066B6C (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 444;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
