/*
 * XREFs of ZwAlertThreadByThreadId @ 0x180093FE0
 * Callers:
 *     RtlWakeAllConditionVariable @ 0x180009A40 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeByAddress @ 0x1800367EC (RtlpWakeByAddress.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlpWakeConditionVariable @ 0x1800638F4 (RtlpWakeConditionVariable.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006E20C (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpTpTimerQueueRundown @ 0x18007D82C (RtlpTpTimerQueueRundown.c)
 *     TppIteWakeWaiters @ 0x18007DF04 (TppIteWakeWaiters.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 110;
  __asm { syscall; Low latency system call }
  return result;
}
