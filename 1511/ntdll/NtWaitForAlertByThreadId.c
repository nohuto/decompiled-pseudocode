/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A8770
 * Callers:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18003013C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     RtlSleepConditionVariableCS @ 0x180067A90 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180074FFC (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForAlertByThreadId()
{
  __int64 result; // rax

  result = 438LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
