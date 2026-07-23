/*
 * XREFs of NtYieldExecution @ 0x140091250
 * Callers:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x1400D02B0 (KiComputeNewPriority.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 */

NTSTATUS NtYieldExecution(void)
{
  __int64 v0; // r8
  __int64 v1; // r9
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 *v7; // r8
  unsigned __int64 *NextThread; // rbp
  __int64 CycleTime; // rdx
  unsigned __int64 v10; // rcx
  char v11; // al
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v3 = 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0, v0, v1);
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( CurrentThread->ThreadLock );
    }
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (unsigned __int64 *)CurrentPrcb->NextThread;
    if ( NextThread || (LOBYTE(v7) = 1, (NextThread = KiSelectReadyThreadEx(CurrentPrcb, 0LL, v7)) != 0LL) )
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
      v10 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
      CurrentThread->QuantumTarget = v10;
      LOBYTE(CycleTime) = 1;
      v11 = KiComputeNewPriority(CurrentThread, CycleTime);
      KiUpdateThreadPriority(0LL, CurrentThread, (unsigned int)v11, 0LL);
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, CurrentThread);
      LOBYTE(v12) = 1;
      KiUpdateThreadState(CurrentPrcb, NextThread, 2LL, v12);
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v13) = 1;
      KiSwapContext(CurrentThread, NextThread, v13);
      v3 = 0;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      CurrentThread->ThreadLock = 0LL;
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
