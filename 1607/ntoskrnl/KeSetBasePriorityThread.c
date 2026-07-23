/*
 * XREFs of KeSetBasePriorityThread @ 0x14007EE14
 * Callers:
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14007F058 (KiSetBasePriorityAndClearDecrement.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400A6028 (KiPriQueueThreadPriorityChanged.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x1400D02B0 (KiComputeNewPriority.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rdi
  struct _KPRCB *CurrentPrcb; // r15
  bool v6; // r13
  int BasePriority; // r12d
  LONG v8; // esi
  char Saturation; // al
  int v10; // r11d
  char v11; // al
  int v12; // r11d
  int v13; // ecx
  __int64 v14; // r8
  volatile unsigned __int64 CycleTime; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  char v20; // al
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 CurrentIrql; // [rsp+38h] [rbp-8h]
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF
  int v24; // [rsp+90h] [rbp+50h] BYREF
  int v25; // [rsp+98h] [rbp+58h] BYREF

  Process = Thread->Process;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = Thread == CurrentPrcb->CurrentThread;
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( Thread->ThreadLock );
  }
  BasePriority = Thread->BasePriority;
  v8 = BasePriority - Process->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v8 = 16 * Saturation;
  Thread->Saturation = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v20 = -1;
    if ( Increment > 0 )
      v20 = 1;
    Thread->Saturation = v20;
  }
  v10 = Increment + Process->BasePriority;
  if ( Process->BasePriority >= 16 )
  {
    if ( v10 >= 16 )
    {
      if ( v10 > 31 )
        v10 = 31;
      v24 = v10;
    }
    else
    {
      v10 = 16;
      v24 = 16;
    }
  }
  else
  {
    if ( v10 >= 16 )
    {
      v10 = 15;
      v24 = 15;
    }
    else
    {
      if ( v10 <= 0 )
        v10 = 1;
      v24 = v10;
    }
    if ( !Thread->Saturation )
    {
      v11 = KiComputeNewPriority(Thread, 0LL);
      v13 = v12 - BasePriority + v11;
      if ( v13 >= 16 )
      {
        v23 = 15;
      }
      else
      {
        if ( v13 <= 0 )
          v13 = 1;
        v23 = v13;
      }
      goto LABEL_17;
    }
  }
  v23 = v10;
LABEL_17:
  KiSetBasePriorityAndClearDecrement(Thread, &v24, 0LL);
  if ( v23 != Thread->Priority )
  {
    if ( !v6 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v16 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    v17 = v23;
    Thread->QuantumTarget = v16;
    KiSetPriorityThread(Thread, &v21, v17);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    Thread->ThreadLock = 0LL;
  LOBYTE(v14) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v21, v14);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v24, (__int64)&v23);
  return v8;
}
