/*
 * XREFs of KeSetBasePriorityThread @ 0x140094928
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14054BCF4 (PfTLoggingWorker.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x14002A650 (KiComputeNewPriority.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400950A0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400E7488 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  __int64 v2; // r8
  _KPROCESS *Process; // rdi
  struct _KPRCB *CurrentPrcb; // r15
  bool v8; // r13
  int BasePriority; // r12d
  LONG v10; // esi
  char Saturation; // al
  char v12; // al
  int v13; // r11d
  char v14; // al
  int v15; // r11d
  int v16; // ecx
  unsigned __int64 CycleTime; // rcx
  unsigned __int64 v18; // rdx
  char v19; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 CurrentIrql; // [rsp+38h] [rbp-8h]
  int v23; // [rsp+80h] [rbp+40h] BYREF
  int v24; // [rsp+90h] [rbp+50h] BYREF
  int v25; // [rsp+98h] [rbp+58h] BYREF

  Process = Thread->Process;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = Thread == CurrentPrcb->CurrentThread;
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v25, *(__int64 *)&Increment, v2);
    while ( Thread->ThreadLock );
  }
  BasePriority = Thread->BasePriority;
  v10 = BasePriority - Process->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v10 = 16 * Saturation;
  Thread->Saturation = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v12 = -1;
    if ( Increment > 0 )
      v12 = 1;
    Thread->Saturation = v12;
  }
  v13 = Increment + Process->BasePriority;
  if ( Process->BasePriority < 16 )
  {
    if ( v13 < 16 )
    {
      if ( v13 <= 0 )
        v13 = 1;
      v24 = v13;
    }
    else
    {
      v13 = 15;
      v24 = 15;
    }
    if ( !Thread->Saturation )
    {
      v14 = KiComputeNewPriority((__int64)Thread, 0);
      v16 = v15 - BasePriority + v14;
      if ( v16 < 16 )
      {
        if ( v16 <= 0 )
          v16 = 1;
        v23 = v16;
      }
      else
      {
        v23 = 15;
      }
      goto LABEL_31;
    }
  }
  else if ( v13 >= 16 )
  {
    if ( v13 > 31 )
      v13 = 31;
    v24 = v13;
  }
  else
  {
    v13 = 16;
    v24 = 16;
  }
  v23 = v13;
LABEL_31:
  KiSetBasePriorityAndClearDecrement(Thread, &v24, 0LL);
  if ( v23 != Thread->Priority )
  {
    if ( !v8 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)Thread);
      _enable();
    }
    v18 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    v19 = v23;
    Thread->QuantumTarget = v18;
    KiSetPriorityThread((__int64)Thread, &v21, v19);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v21, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v24, (__int64)&v23);
  return v10;
}
