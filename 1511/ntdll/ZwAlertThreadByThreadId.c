/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A5E70
 * Callers:
 *     TppIteWakeWaiters @ 0x180004434 (TppIteWakeWaiters.c)
 *     RtlpWakeByAddress @ 0x18003023C (RtlpWakeByAddress.c)
 *     RtlWakeAllConditionVariable @ 0x18005C070 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x180068474 (RtlpWakeConditionVariable.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x1800751F4 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeSRWLock @ 0x1800755AC (RtlpWakeSRWLock.c)
 *     RtlpTpTimerQueueRundown @ 0x180081F9C (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 110;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
