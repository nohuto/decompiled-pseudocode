/*
 * XREFs of CmpCompleteLazyWrite @ 0x14012B6A8
 * Callers:
 *     CmpLazyWriteWorker @ 0x140168DC8 (CmpLazyWriteWorker.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  volatile signed __int32 *p_DueTime; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v7; // rbp
  __int64 v8; // rdx
  ULONG Processor; // r9d
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  p_DueTime = (volatile signed __int32 *)&Timer[2].DueTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&Timer[2].DueTime);
  }
  else if ( _interlockedbittestandset64(p_DueTime, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Timer[2].DueTime);
  }
  Blink = Timer[2].TimerListEntry.Blink;
  if ( a2 || ((unsigned __int8)Blink & 7) == 3 )
  {
    v7 = 1LL;
    if ( a2 )
    {
      v8 = *a2;
    }
    else
    {
      v8 = 20000000LL;
      Processor = 1000;
      v11 = (unsigned __int64)Blink & 0xFFFFFFFFFFFFFFF8uLL;
      if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= v11 )
        goto LABEL_8;
      v12 = v11 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
      if ( v12 <= 0x1312D00 )
        goto LABEL_8;
      v8 = v12;
    }
    Processor = Timer[2].Processor;
LABEL_8:
    KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v8, 0, Processor, (PKDPC)&Timer[1]);
    goto LABEL_9;
  }
  v7 = 0LL;
LABEL_9:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(p_DueTime, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)p_DueTime, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
