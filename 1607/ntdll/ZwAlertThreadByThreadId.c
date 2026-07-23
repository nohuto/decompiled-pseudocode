/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A71D0
 * Callers:
 *     RtlWakeAllConditionVariable @ 0x180052E40 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x180062F54 (RtlpWakeConditionVariable.c)
 *     TppIteWakeWaiters @ 0x180063FF4 (TppIteWakeWaiters.c)
 *     RtlpTpTimerQueueRundown @ 0x180065018 (RtlpTpTimerQueueRundown.c)
 *     RtlpWakeByAddress @ 0x180066500 (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180066704 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
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
