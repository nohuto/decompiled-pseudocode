/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A71D0
 * Callers:
 *     RtlWakeAllConditionVariable @ 0x180052E50 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x180062F64 (RtlpWakeConditionVariable.c)
 *     TppIteWakeWaiters @ 0x180064004 (TppIteWakeWaiters.c)
 *     RtlpTpTimerQueueRundown @ 0x180065028 (RtlpTpTimerQueueRundown.c)
 *     RtlpWakeByAddress @ 0x180066510 (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180066714 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlertThreadByThreadId()
{
  __int64 result; // rax

  result = 110LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
