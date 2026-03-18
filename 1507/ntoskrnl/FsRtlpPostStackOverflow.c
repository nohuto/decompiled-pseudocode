/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1401E46B4
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1401E463C (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1401E4644 (FsRtlPostStackOverflow.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlpPostStackOverflow(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char *PoolWithTag; // rdi
  __int64 v9; // r8
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v14; // al
  unsigned int v15; // esi
  char **v16; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x73725346u);
  if ( !PoolWithTag )
  {
    if ( !a4 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    PoolWithTag = (char *)&StackOverflowFallback;
  }
  *((_QWORD *)PoolWithTag + 5) = a1;
  *((_QWORD *)PoolWithTag + 6) = a2;
  *((_QWORD *)PoolWithTag + 4) = a3;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 2) = FsRtlStackOverflowRead;
  v10 = (volatile signed __int32 *)((char *)&FsRtlWorkerQueues + 64 * (unsigned __int64)a4);
  *((_QWORD *)PoolWithTag + 3) = PoolWithTag;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v14 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    LOBYTE(v9) = v14;
    EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, PoolWithTag, v9);
  }
  v15 = 0;
  while ( _interlockedbittestandset(v10, 7u) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
    }
    while ( (*v10 & 0x80u) != 0 );
  }
  if ( *((volatile signed __int32 **)v10 + 2) == v10 + 2
    || *((_DWORD *)v10 + 10) >= *((_DWORD *)v10 + 11)
    || (volatile signed __int32 *)CurrentThread->Queue == v10 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v10, (__int64)PoolWithTag) )
  {
    ++*((_DWORD *)v10 + 1);
    v16 = (char **)*((_QWORD *)v10 + 4);
    *(_QWORD *)PoolWithTag = v10 + 6;
    *((_QWORD *)PoolWithTag + 1) = v16;
    if ( *v16 != (char *)(v10 + 6) )
      __fastfail(3u);
    *v16 = PoolWithTag;
    *((_QWORD *)v10 + 4) = PoolWithTag;
  }
  _InterlockedAnd(v10, 0xFFFFFF7F);
  return KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
}
