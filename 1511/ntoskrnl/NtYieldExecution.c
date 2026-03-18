/*
 * XREFs of NtYieldExecution @ 0x1400290C0
 * Callers:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x14002A650 (KiComputeNewPriority.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 */

NTSTATUS NtYieldExecution(void)
{
  NTSTATUS v1; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // r8
  _KTHREAD *NextThread; // rsi
  __int64 CycleTime; // rdx
  unsigned __int64 v8; // r8
  char v9; // al
  char EffectivePriorityThread; // cl
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v1 = 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch(CurrentThread, 0LL);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( CurrentThread->ThreadLock );
    }
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread || (LOBYTE(v5) = 1, (NextThread = (_KTHREAD *)KiSelectReadyThreadEx(CurrentPrcb, 0LL, v5)) != 0LL) )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, CurrentThread, 0LL);
        _enable();
      }
      v8 = CycleTime + (unsigned int)CurrentThread->SchedulerApc.SpareByte1 * KiCyclesPerClockQuantum;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
      LOBYTE(CycleTime) = 1;
      CurrentThread->QuantumTarget = v8;
      v9 = KiComputeNewPriority(CurrentThread, CycleTime);
      KiUpdateThreadPriority(0LL, CurrentThread, (unsigned int)v9, 0LL);
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, CurrentThread);
      if ( (NextThread->Header.Size & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread((__int64)NextThread, (__int64)CurrentPrcb);
      else
        EffectivePriorityThread = NextThread->Priority;
      *CurrentPrcb->PriorityState = EffectivePriorityThread;
      CurrentPrcb->CurrentThread = NextThread;
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v11) = 1;
      KiSwapContext(CurrentThread, NextThread, v11);
      v1 = 0;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      CurrentThread->ThreadLock = 0LL;
    }
  }
  __writecr8(CurrentIrql);
  return v1;
}
