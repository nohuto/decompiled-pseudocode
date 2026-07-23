/*
 * XREFs of NtWaitForAlertByThreadId @ 0x180095430
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180036050 (RtlpWaitOnAddressWithTimeout.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x1800660D0 (RtlSleepConditionVariableCS.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006E06C (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 435;
  __asm { syscall; Low latency system call }
  return result;
}
