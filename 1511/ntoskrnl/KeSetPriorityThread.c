/*
 * XREFs of KeSetPriorityThread @ 0x14007D6F0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x1400B0B0C (CcApplyLowIoPriorityToThread.c)
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1400E7D3C (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x1400F3184 (CmpSetPriorityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     PfTSetTraceWorkerPriority @ 0x14011A384 (PfTSetTraceWorkerPriority.c)
 *     KiExecuteDpc @ 0x1401338C8 (KiExecuteDpc.c)
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x1401420E8 (FsRtlWorkerThread.c)
 *     MiPartitionWorkingSetManager @ 0x1401D979C (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x1402130EC (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1406C14B4 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

// local variable allocation has failed, the output may be wrong!
KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v2; // r8
  __int64 v3; // r9
  KPRIORITY v4; // edi
  int v7; // ebp
  struct _KPRCB *CurrentPrcb; // r15
  bool v9; // si
  KPRIORITY v10; // r13d
  char PriorityDecrement; // al
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  volatile unsigned __int64 CycleTime; // rsi
  unsigned __int64 v15; // rax
  bool v16; // zf
  unsigned __int64 v17; // rcx
  char BasePriority; // cl
  unsigned int PriorityFloorSummary; // eax
  int v20; // r8d
  signed int v21; // esi
  char v22; // al
  unsigned __int64 p_PropagateBoostsEntry; // rdx
  char v24; // r12
  signed int v25; // r14d
  struct _KPRCB *v26; // rcx
  _SINGLE_LIST_ENTRY *v27; // r8
  struct _KPRCB *v28; // rdi
  _BYTE *v29; // rax
  struct _LIST_ENTRY *p_WaitListEntry; // rax
  bool v31; // bp
  struct _KPRCB *v32; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char EffectivePriorityThread; // cl
  _BYTE *ready; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  bool v37; // al
  __int64 Number; // rcx
  struct _KPRCB *v39; // rax
  __int64 v40; // r8
  $AFA89EB939CB06A89731FB47CA7CEC74 *v41; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int64 *v42; // [rsp+38h] [rbp-50h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-48h]
  int v44; // [rsp+90h] [rbp+8h] BYREF
  int v45; // [rsp+A0h] [rbp+18h]
  struct _KPRCB *v46; // [rsp+A8h] [rbp+20h] BYREF

  v4 = Priority;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v7 = 0;
  v41 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = (unsigned __int8)v41;
  v9 = Thread == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v44, *(__int64 *)&Priority, v2);
    while ( Thread->ThreadLock );
  }
  v10 = Thread->Priority;
  PriorityDecrement = Thread->PriorityDecrement;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( v4 != Thread->Priority )
  {
    if ( !v9 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v12 = __rdtsc();
      v13 = v12 - CurrentPrcb->StartCycles;
      CycleTime = v13 + Thread->CycleTime;
      v15 = v13 + Thread->CurrentRunTime;
      Thread->CycleTime = CycleTime;
      CurrentPrcb->StartCycles = v12;
      if ( v15 > 0xFFFFFFFF )
        LODWORD(v15) = -1;
      v16 = (Thread->Header.Size & 0x3E) == 0;
      Thread->CurrentRunTime = v15;
      if ( !v16 )
        KiEndThreadAccountingPeriod((__int64)CurrentPrcb, (__int64)Thread, v13, v3);
      KiStartThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)Thread, 0);
      _enable();
    }
    v17 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    Thread->QuantumTarget = v17;
    BasePriority = Thread->BasePriority;
    if ( BasePriority && !v4 )
      v4 = 1;
    if ( BasePriority < 16 || v4 >= 16 )
    {
      PriorityFloorSummary = Thread->PriorityFloorSummary;
      if ( PriorityFloorSummary )
      {
        _BitScanReverse((unsigned int *)&v20, PriorityFloorSummary);
        if ( (char)v4 < v20 )
          LOBYTE(v4) = v20;
        v45 = v20;
      }
      v21 = (char)v4;
      if ( Thread->Priority != (char)v4 )
      {
        v22 = KiAcquireThreadStateLock(Thread, &v46, &v42);
        p_PropagateBoostsEntry = (unsigned int)Thread->Priority;
        v24 = 0;
        v25 = Thread->Priority;
        switch ( v22 )
        {
          case 2:
            v28 = v46;
            v31 = v46->NextThread == 0LL;
            if ( KiAbEnabled )
            {
              v32 = KeGetCurrentPrcb();
              if ( (char)v21 > Thread->Priority )
              {
                if ( Thread->AbWaitEntryCount )
                {
                  p_PropagateBoostsEntry = (unsigned __int64)&Thread->PropagateBoostsEntry;
                  if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                  {
                    p_AbPropagateBoostsList = &v32->AbPropagateBoostsList;
                    if ( v32 != (struct _KPRCB *)-25656LL )
                    {
                      *(_SINGLE_LIST_ENTRY *)p_PropagateBoostsEntry = (_SINGLE_LIST_ENTRY)p_AbPropagateBoostsList->Next;
                      p_AbPropagateBoostsList->Next = (struct _SINGLE_LIST_ENTRY *)p_PropagateBoostsEntry;
                      _InterlockedIncrement16(&Thread->KeReferenceCount);
                      KiAbQueueAutoBoostDpc(v32);
                    }
                  }
                }
              }
              v28 = v46;
            }
            Thread->Priority = v21;
            if ( v31 )
            {
              if ( (Thread->Header.Size & 4) != 0 )
                EffectivePriorityThread = KiQueryEffectivePriorityThread((__int64)Thread, (__int64)v28);
              else
                EffectivePriorityThread = v21;
              *v28->PriorityState = EffectivePriorityThread;
            }
            if ( v21 < v25 && v31 )
            {
              v28 = v46;
              if ( Thread->WaitBlockFill6[68] == 2 )
              {
                ready = (_BYTE *)KiSelectReadyThreadEx(v46, (__int64)Thread, 0);
                if ( ready )
                {
                  KiUpdateThreadState((__int64)v28, ready, 3, 1);
                  v24 = 1;
                }
              }
              else if ( v46->ReadySummary >> (v21 + 1) )
              {
                Thread->WaitRegister.Flags |= 0x10u;
              }
            }
            break;
          case 1:
            v28 = v46;
            KiRemoveThreadFromAnyReadyQueue(v46, v42, Thread, (unsigned int)v25);
            KiUpdateThreadPriority(0LL, (__int64)Thread, v21, 0);
            KiPrepareReadyThreadForRescheduling(Thread, (unsigned int)v21, &v41);
            break;
          case 3:
            v28 = v46;
            KiUpdateThreadPriority((__int64)v46, (__int64)Thread, v21, 1);
            if ( v21 < v25 )
            {
              v29 = (_BYTE *)KiSelectReadyThreadEx(v28, (__int64)Thread, 0);
              if ( v29 )
              {
                KiUpdateThreadState((__int64)v28, v29, 3, 1);
                p_WaitListEntry = &v41->WaitListEntry;
                Thread->WaitBlockFill6[68] = 7;
                Thread->WaitListEntry.Flink = p_WaitListEntry;
                v41 = &Thread->216;
              }
            }
            break;
          default:
            if ( KiAbEnabled )
            {
              v26 = KeGetCurrentPrcb();
              if ( (char)v4 > Thread->Priority )
              {
                if ( Thread->AbWaitEntryCount )
                {
                  p_PropagateBoostsEntry = (unsigned __int64)&Thread->PropagateBoostsEntry;
                  if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                  {
                    v27 = &v26->AbPropagateBoostsList;
                    if ( v26 != (struct _KPRCB *)-25656LL )
                    {
                      *(_SINGLE_LIST_ENTRY *)p_PropagateBoostsEntry = (_SINGLE_LIST_ENTRY)v27->Next;
                      v27->Next = (struct _SINGLE_LIST_ENTRY *)p_PropagateBoostsEntry;
                      _InterlockedIncrement16(&Thread->KeReferenceCount);
                      KiAbQueueAutoBoostDpc(v26);
                    }
                  }
                }
              }
            }
            v28 = v46;
            Thread->Priority = v21;
            break;
        }
        SchedulingGroup = Thread->SchedulingGroup;
        if ( !SchedulingGroup )
          goto LABEL_68;
        while ( (SchedulingGroup->Policy.AllFlags & 2) != 0 )
        {
          SchedulingGroup = SchedulingGroup->Parent;
          if ( !SchedulingGroup )
            goto LABEL_68;
        }
        if ( (*((_DWORD *)&Thread->0 + 1) & 0x100) != 0 || Thread->Priority >= 16 )
        {
LABEL_68:
          v37 = 0;
          p_PropagateBoostsEntry = *(_QWORD *)(KiProcessorBlock[Thread->IdealProcessor] + 24768);
          if ( p_PropagateBoostsEntry )
            v37 = (p_PropagateBoostsEntry & Thread->Affinity.Mask) == p_PropagateBoostsEntry;
        }
        else
        {
          v37 = 0;
        }
        if ( v37 != ((*((_DWORD *)&Thread->0 + 1) & 0x1000) != 0) )
        {
          _InterlockedXor((volatile signed __int32 *)&Thread->116 + 1, 0x1000u);
          v28 = v46;
        }
        if ( v28 )
          _InterlockedAnd64((volatile signed __int64 *)&v28->PrcbLock, 0LL);
        if ( v42 )
          _InterlockedAnd64(v42, 0LL);
        if ( v24 )
        {
          LODWORD(p_PropagateBoostsEntry) = KeGetPcr()->Prcb.Number;
          Number = v46->Number;
          if ( (_DWORD)p_PropagateBoostsEntry != (_DWORD)Number )
          {
            v39 = KeGetCurrentPrcb();
            LOBYTE(p_PropagateBoostsEntry) = 2;
            ++v39->SynchCounters.IpiSendSoftwareInterruptCount;
            HalSendSoftwareInterrupt(Number, p_PropagateBoostsEntry);
          }
        }
        v7 = Thread->Priority;
      }
    }
  }
  v40 = (unsigned __int8)CurrentIrql;
  Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v41, v40);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
    EtwTracePriority((_DWORD)Thread, 1328, v10, v7, 0LL);
  return v10;
}
