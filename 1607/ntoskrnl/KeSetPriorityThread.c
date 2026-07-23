/*
 * XREFs of KeSetPriorityThread @ 0x1400D0DC0
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x14006B0D0 (CcBoostLowPriorityWorkerThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140071360 (CcApplyLowIoPriorityToThread.c)
 *     CmpSetPriorityThread @ 0x1400B2B20 (CmpSetPriorityThread.c)
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x14010A05C (MiZeroInParallel.c)
 *     PfTSetTraceWorkerPriority @ 0x140114A84 (PfTSetTraceWorkerPriority.c)
 *     KiExecuteDpc @ 0x1401397A8 (KiExecuteDpc.c)
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 *     MiMappedPageWriter @ 0x14013DAC4 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x14013F4AC (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x14014BF30 (FsRtlWorkerThread.c)
 *     MiPartitionWorkingSetManager @ 0x1401E817C (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x14022CFF0 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x14070D54C (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400915B8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  int v4; // r14d
  struct _KPRCB *CurrentPrcb; // rbp
  bool v6; // si
  char PriorityDecrement; // al
  KPRIORITY v8; // r13d
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  volatile unsigned __int64 CycleTime; // rsi
  unsigned __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  char v17; // al
  char v18; // dl
  int v19; // r12d
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rsi
  char EffectivePriorityThread; // cl
  unsigned __int64 *v23; // rax
  bool v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KPRCB *v28; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  _SINGLE_LIST_ENTRY *v31; // r8
  _SINGLE_LIST_ENTRY *v32; // rdx
  unsigned __int64 *v33; // rax
  __int64 Number; // rcx
  int v35; // ecx
  bool v36; // r15
  $D228FBDF672B9E43CD3C8A85674C95A3 *v37; // rax
  struct _KPRCB *v38; // rax
  $D228FBDF672B9E43CD3C8A85674C95A3 *v39; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int64 *v40; // [rsp+38h] [rbp-50h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-48h]
  int v42; // [rsp+90h] [rbp+8h] BYREF
  int v43; // [rsp+A0h] [rbp+18h]
  struct _KPRCB *v44; // [rsp+A8h] [rbp+20h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v4 = 0;
  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0;
  v6 = Thread == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v42);
    while ( Thread->ThreadLock );
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v8 = Thread->Priority;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != Thread->Priority )
  {
    if ( !v6 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v9 = __rdtsc();
      v10 = v9 - CurrentPrcb->StartCycles;
      CycleTime = v10 + Thread->CycleTime;
      v12 = v10 + Thread->CurrentRunTime;
      Thread->CycleTime = CycleTime;
      if ( v12 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
      CurrentPrcb->StartCycles = v9;
      v13 = (Thread->Header.Size & 0x3E) == 0;
      Thread->CurrentRunTime = v12;
      if ( !v13 )
        KiEndThreadAccountingPeriod((__int64)CurrentPrcb, (__int64)Thread, v10);
      KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v14 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v14;
    if ( BasePriority && !Priority )
      Priority = 1;
    if ( BasePriority < 16 || Priority >= 16 )
    {
      PriorityFloorSummary = Thread->PriorityFloorSummary;
      if ( PriorityFloorSummary )
      {
        _BitScanReverse((unsigned int *)&v35, PriorityFloorSummary);
        v43 = v35;
        if ( (char)Priority < v35 )
          LOBYTE(Priority) = v35;
      }
      if ( Thread->Priority != (char)Priority )
      {
        v17 = KiAcquireThreadStateLock(Thread, &v44, &v40);
        v18 = Thread->Priority;
        v19 = v18;
        switch ( v17 )
        {
          case 2:
            v36 = v44->NextThread == 0LL;
            v20 = KeGetCurrentPrcb();
            if ( (char)Priority > v18 )
            {
              if ( Thread->AbWaitEntryCount )
              {
                p_PropagateBoostsEntry = &Thread->PropagateBoostsEntry;
                if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                {
                  p_AbPropagateBoostsList = &v20->AbPropagateBoostsList;
                  if ( v20 != (struct _KPRCB *)-25784LL )
                  {
                    p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                    _InterlockedIncrement16(&Thread->KeReferenceCount);
                    KiAbQueueAutoBoostDpc((__int64)v20);
                  }
                }
              }
            }
            v21 = v44;
            Thread->Priority = Priority;
            if ( v36 )
            {
              if ( (Thread->Header.Size & 4) != 0 )
                EffectivePriorityThread = KiQueryEffectivePriorityThread((__int64)Thread, (__int64)v21);
              else
                EffectivePriorityThread = Priority;
              *v21->PriorityState = EffectivePriorityThread;
            }
            if ( (char)Priority < v19 && v36 )
            {
              v21 = v44;
              if ( Thread->WaitBlockFill6[68] == 2 )
              {
                v23 = KiSelectReadyThreadEx(v44, Thread, 0LL);
                if ( v23 )
                {
                  KiUpdateThreadState((__int64)v21, (__int64)v23, 3, 1);
                  LOBYTE(v4) = 1;
                }
              }
              else if ( v44->ReadySummary >> (Priority + 1) )
              {
                Thread->WaitRegister.Flags |= 0x10u;
              }
            }
            break;
          case 1:
            v21 = v44;
            KiRemoveThreadFromAnyReadyQueue((__int64)v44, (__int64)v40, (__int64)Thread, v18);
            KiUpdateThreadPriority(0LL, (__int64)Thread, Priority, 0);
            KiPrepareReadyThreadForRescheduling((__int64)Thread, (char)Priority, (__int64 *)&v39);
            break;
          case 3:
            v21 = v44;
            KiUpdateThreadPriority((__int64)v44, (__int64)Thread, Priority, 1);
            if ( (char)Priority < v19 )
            {
              v33 = KiSelectReadyThreadEx(v21, Thread, 0LL);
              if ( v33 )
              {
                KiUpdateThreadState((__int64)v21, (__int64)v33, 3, 1);
                v37 = v39;
                Thread->WaitBlockFill6[68] = 7;
                Thread->WaitListEntry.Flink = &v37->WaitListEntry;
                v39 = &Thread->216;
              }
            }
            break;
          default:
            v28 = KeGetCurrentPrcb();
            if ( (char)Priority > v18 )
            {
              if ( Thread->AbWaitEntryCount )
              {
                v31 = &Thread->PropagateBoostsEntry;
                if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                {
                  v32 = &v28->AbPropagateBoostsList;
                  if ( v28 != (struct _KPRCB *)-25784LL )
                  {
                    v31->Next = v32->Next;
                    v32->Next = v31;
                    _InterlockedIncrement16(&Thread->KeReferenceCount);
                    KiAbQueueAutoBoostDpc((__int64)v28);
                  }
                }
              }
            }
            v21 = v44;
            Thread->Priority = Priority;
            break;
        }
        v24 = 0;
        v25 = *(_QWORD *)(KiProcessorBlock[Thread->IdealProcessor] + 24896);
        if ( v25 )
          v24 = (v25 & Thread->Affinity.Mask) == v25;
        if ( v24 != ((*((_DWORD *)&Thread->0 + 1) & 0x1000) != 0) )
        {
          _InterlockedXor((volatile signed __int32 *)&Thread->116 + 1, 0x1000u);
          v21 = v44;
        }
        if ( v21 )
          _InterlockedAnd64((volatile signed __int64 *)&v21->PrcbLock, 0LL);
        if ( v40 )
          _InterlockedAnd64(v40, 0LL);
        if ( (_BYTE)v4 )
        {
          LODWORD(v25) = KeGetPcr()->Prcb.Number;
          Number = v44->Number;
          if ( (_DWORD)v25 != (_DWORD)Number )
          {
            v38 = KeGetCurrentPrcb();
            LOBYTE(v25) = 2;
            ++v38->SynchCounters.IpiSendSoftwareInterruptCount;
            HalSendSoftwareInterrupt(Number, v25);
          }
        }
        v4 = Thread->Priority;
      }
    }
  }
  v26 = (unsigned __int8)CurrentIrql;
  Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v39, v26);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v4 )
      EtwTracePriority((_DWORD)Thread, 1328, v8, v4, 0LL);
  }
  return v8;
}
