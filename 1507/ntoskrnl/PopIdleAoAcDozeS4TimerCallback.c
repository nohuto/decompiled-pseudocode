/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x140241BF8
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock);
  }
  byte_14032E1DC = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopIdleAoAcDozeS4Lock, retaddr);
  else
    _InterlockedAnd64(&PopIdleAoAcDozeS4Lock, 0LL);
  __writecr8(CurrentIrql);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
}
