/*
 * XREFs of CmpLazyWriteWorker @ 0x140168DC8
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     CmpCompleteLazyWrite @ 0x14012B6A8 (CmpCompleteLazyWrite.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     CmpDiskFullWarning @ 0x14065AE40 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(struct _KTIMER *StartContext)
{
  bool v2; // si
  volatile signed __int32 *p_DueTime; // rbx
  unsigned __int8 CurrentIrql; // bp
  char v5; // bl
  __int64 *v6; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = StartContext == &CmpLazyWriterData;
  while ( 1 )
  {
    KeWaitForSingleObject(&StartContext[2], Executive, 1, 0, 0LL);
    p_DueTime = (volatile signed __int32 *)&StartContext[2].DueTime;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&StartContext[2].DueTime);
    }
    else if ( _interlockedbittestandset64(p_DueTime, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&StartContext[2].DueTime);
    }
    StartContext[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&StartContext[2].DueTime, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)p_DueTime, 0LL);
    __writecr8(CurrentIrql);
    v5 = ((__int64 (__fastcall *)(char *, char *))StartContext[2].TimerListEntry.Flink)(&v8, &v9);
    if ( v2 && BYTE2(NlsMbCodePageTag) )
    {
      if ( v8 )
        CmpDiskFullWarning();
      else
        BYTE2(NlsMbCodePageTag) = 0;
    }
    if ( v5 )
      v6 = (__int64 *)&v9;
    else
      v6 = 0LL;
    CmpCompleteLazyWrite(StartContext, v6);
  }
}
