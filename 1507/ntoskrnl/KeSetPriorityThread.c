/*
 * XREFs of KeSetPriorityThread @ 0x14009B5F0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140041E40 (CcApplyLowIoPriorityToThread.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14012E1F4 (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x1401309D4 (CmpSetPriorityThread.c)
 *     PfTSetTraceWorkerPriority @ 0x1401489E0 (PfTSetTraceWorkerPriority.c)
 *     KiExecuteDpc @ 0x14016315C (KiExecuteDpc.c)
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x14016FDC4 (FsRtlWorkerThread.c)
 *     MiPartitionWorkingSetManager @ 0x14021D7E0 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x140262824 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140742C34 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  KPRIORITY v2; // r14d
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v6; // edi
  bool v7; // si
  KPRIORITY v8; // edi
  char PriorityDecrement; // al
  __int64 v10; // rsi
  unsigned __int64 SchedulingGroup; // rcx
  unsigned __int64 v12; // r10
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int64 v14; // rax
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // r10
  unsigned __int64 *v23; // rdx
  bool v24; // zf
  unsigned __int64 v25; // rcx
  char BasePriority; // al
  char v27; // si
  unsigned int PriorityFloorSummary; // eax
  char v29; // r8
  int v30; // edx
  signed int v31; // edi
  char v32; // al
  __int64 v33; // r9
  char v34; // dl
  __int64 v35; // r8
  int v36; // r12d
  struct _KPRCB *v37; // rcx
  _SINGLE_LIST_ENTRY *v38; // rdx
  struct _KPRCB *v39; // rcx
  _SINGLE_LIST_ENTRY *v40; // rdx
  char v41; // cl
  _KSCHEDULING_GROUP *volatile v42; // rdx
  char *v43; // rdx
  int v44; // eax
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  struct _LIST_ENTRY *p_WaitListEntry; // rax
  __int64 v50; // r13
  bool v51; // r14
  struct _KPRCB *v52; // rcx
  _SINGLE_LIST_ENTRY *v53; // rdx
  char v54; // dl
  _KSCHEDULING_GROUP *volatile v55; // rdx
  char *v56; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 ready; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  struct _KPRCB *v61; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v64; // rdx
  char v65; // r9
  __int64 v66; // rcx
  struct _KPRCB *v67; // rax
  __int64 v68; // r8
  $47C49C341167EE41164AD23C4D5A3EB6 *v69; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v70; // [rsp+38h] [rbp-40h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-38h]
  KPRIORITY v72; // [rsp+A0h] [rbp+28h]
  KPRIORITY v73; // [rsp+A8h] [rbp+30h]
  __int64 v74; // [rsp+B8h] [rbp+40h] BYREF

  v73 = Priority;
  v2 = Priority;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v69 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  v7 = Thread == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( Thread->ThreadLock );
  }
  v8 = Thread->Priority;
  v72 = v8;
  PriorityDecrement = Thread->PriorityDecrement;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( v2 != Thread->Priority )
  {
    if ( !v7 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v10 = 3LL;
      SchedulingGroup = __rdtsc();
      v12 = SchedulingGroup - CurrentPrcb->StartCycles;
      CycleTime = v12 + Thread->CycleTime;
      v14 = v12 + Thread->CurrentRunTime;
      Thread->CycleTime = CycleTime;
      CurrentPrcb->StartCycles = SchedulingGroup;
      Size = Thread->Header.Size;
      if ( v14 > 0xFFFFFFFF )
        LODWORD(v14) = -1;
      Thread->CurrentRunTime = v14;
      if ( (Size & 0x3E) != 0 )
      {
        if ( (Size & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[Thread->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
          Size &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x20) != 0 )
          {
            if ( Thread[1].WaitBlock[2].SparePtr )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v18 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v18 = CurrentFrequency / 0x19;
              v19 = (unsigned __int64 *)(v17 + 8 * (CurrentPrcb->PowerState.Class + 2 * v18));
              SchedulingGroup = v12 + *v19;
              *v19 = SchedulingGroup;
            }
            Size &= ~0x20u;
          }
          if ( (Size & 0x3E) != 0 )
          {
            SchedulingGroup = (unsigned __int64)Thread->SchedulingGroup;
            if ( SchedulingGroup )
            {
              for ( SchedulingGroup += CurrentPrcb->ScbOffset;
                    SchedulingGroup;
                    SchedulingGroup = *(_QWORD *)(SchedulingGroup + 392) )
              {
                *(_QWORD *)SchedulingGroup += v12;
              }
            }
            if ( (Thread->Header.Size & 8) != 0 )
            {
              SchedulingGroup = Thread->Affinity.Mask;
              if ( (SchedulingGroup & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                CurrentPrcb->AffinitizedCycles += v12;
            }
            if ( Thread->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(Thread);
          }
        }
      }
      v20 = __rdtsc();
      CurrentPrcb->CycleTime += v20 - CurrentPrcb->StartCycles;
      if ( (Thread->Header.Size & 0x20) != 0 )
      {
        v21 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
        if ( v21 < 3 )
          v10 = v21;
        v23 = &CurrentPrcb->Cycles[v10][CurrentPrcb->PowerState.Class];
        SchedulingGroup = v22 + *v23;
        *v23 = SchedulingGroup;
      }
      CurrentPrcb->StartCycles = v20;
      if ( (Thread->Header.Size & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v20;
      if ( (Thread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(Thread, 0LL);
      v24 = CurrentPrcb->InterruptRequest == 0;
      CurrentPrcb->NestingLevel = 0;
      if ( !v24 )
      {
        LOBYTE(SchedulingGroup) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(SchedulingGroup);
      }
      _enable();
    }
    v25 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    BasePriority = Thread->BasePriority;
    v27 = 1;
    Thread->QuantumTarget = v25;
    if ( BasePriority )
    {
      if ( !v2 )
        v2 = 1;
      v73 = v2;
    }
    if ( BasePriority >= 16 && v2 < 16 )
      goto LABEL_145;
    PriorityFloorSummary = Thread->PriorityFloorSummary;
    v29 = v2;
    if ( PriorityFloorSummary )
    {
      _BitScanReverse((unsigned int *)&v30, PriorityFloorSummary);
      v29 = v2;
      if ( (char)v2 < v30 )
        v29 = v30;
    }
    v31 = v29;
    if ( Thread->Priority == v29 )
      goto LABEL_145;
    v32 = KiAcquireThreadStateLock(Thread, &v74, &v70);
    v34 = Thread->Priority;
    v35 = 1LL;
    v36 = v34;
    switch ( v32 )
    {
      case 1:
        KiRemoveThreadFromAnyReadyQueue(v74, v70, Thread, (unsigned int)v34);
        if ( KiAbEnabled )
        {
          v61 = KeGetCurrentPrcb();
          if ( (char)v31 > Thread->Priority )
          {
            if ( Thread->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &Thread->PropagateBoostsEntry;
              if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_AbPropagateBoostsList = &v61->AbPropagateBoostsList;
                if ( v61 != (struct _KPRCB *)-25656LL )
                {
                  p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                  _InterlockedIncrement16(&Thread->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v61);
                }
              }
            }
          }
        }
        Thread->Priority = v31;
        KiPrepareReadyThreadForRescheduling(Thread, (unsigned int)v31, &v69);
        break;
      case 2:
        v50 = v74;
        v51 = *(_QWORD *)(v74 + 16) == 0LL;
        if ( KiAbEnabled )
        {
          v52 = KeGetCurrentPrcb();
          if ( (char)v31 > v34 )
          {
            if ( Thread->AbWaitEntryCount )
            {
              v53 = &Thread->PropagateBoostsEntry;
              if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                v35 = (__int64)&v52->AbPropagateBoostsList;
                if ( v52 != (struct _KPRCB *)-25656LL )
                {
                  v53->Next = *(struct _SINGLE_LIST_ENTRY **)v35;
                  *(_QWORD *)v35 = v53;
                  _InterlockedIncrement16(&Thread->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v52);
                }
              }
            }
          }
        }
        Thread->Priority = v31;
        if ( v51 )
        {
          if ( (Thread->Header.Size & 4) != 0 )
          {
            if ( (char)v31 >= 16
              || !Thread->SchedulingGroup
              || (v55 = Thread->SchedulingGroup) == 0LL
              || (v56 = (char *)v55 + *(unsigned int *)(v74 + 1624)) == 0LL
              || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(Thread, v56, 0LL),
                  v54 = 1,
                  !ThreadEffectiveRankNonZero) )
            {
              v54 = Thread->Priority;
            }
          }
          else
          {
            v54 = v31;
          }
          **(_BYTE **)(v74 + 56) = v54;
        }
        if ( v31 < v36 && v51 )
        {
          if ( Thread->WaitBlockFill6[68] == 2 )
          {
            ready = KiSelectReadyThreadEx(v74, Thread, 0LL);
            v33 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                if ( *(char *)(ready + 195) >= 16
                  || !*(_QWORD *)(ready + 104)
                  || (v59 = *(_QWORD *)(ready + 104)) == 0
                  || (v60 = *(unsigned int *)(v74 + 1624) + v59) == 0
                  || !(unsigned int)KiGetThreadEffectiveRankNonZero(ready, v60, 0LL) )
                {
                  v27 = *(_BYTE *)(v33 + 195);
                }
              }
              else
              {
                v27 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(v74 + 56) = v27;
              *(_QWORD *)(v50 + 16) = v33;
              *(_BYTE *)(v33 + 388) = 3;
              LOBYTE(v33) = 1;
              goto LABEL_137;
            }
          }
          else if ( *(_DWORD *)(v74 + 22680) >> (v31 + 1) )
          {
            Thread->WaitRegister.Flags |= 0x10u;
          }
        }
        break;
      case 3:
        if ( KiAbEnabled )
        {
          v39 = KeGetCurrentPrcb();
          if ( (char)v31 > v34 )
          {
            if ( Thread->AbWaitEntryCount )
            {
              v40 = &Thread->PropagateBoostsEntry;
              if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                v35 = (__int64)&v39->AbPropagateBoostsList;
                if ( v39 != (struct _KPRCB *)-25656LL )
                {
                  v40->Next = *(struct _SINGLE_LIST_ENTRY **)v35;
                  *(_QWORD *)v35 = v40;
                  _InterlockedIncrement16(&Thread->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v39);
                }
              }
            }
          }
        }
        v24 = (Thread->Header.Size & 4) == 0;
        Thread->Priority = v31;
        if ( v24 )
        {
          v41 = v31;
        }
        else if ( (char)v31 >= 16
               || !Thread->SchedulingGroup
               || (v42 = Thread->SchedulingGroup) == 0LL
               || (v43 = (char *)v42 + *(unsigned int *)(v74 + 1624)) == 0LL
               || (v44 = KiGetThreadEffectiveRankNonZero(Thread, v43, 0LL), v41 = 1, !v44) )
        {
          v41 = Thread->Priority;
        }
        v45 = v74;
        **(_BYTE **)(v74 + 56) = v41;
        if ( v31 < v36 )
        {
          v46 = KiSelectReadyThreadEx(v45, Thread, 0LL);
          v33 = v46;
          if ( v46 )
          {
            if ( (*(_BYTE *)(v46 + 2) & 4) != 0 )
            {
              if ( *(char *)(v46 + 195) >= 16
                || !*(_QWORD *)(v46 + 104)
                || (v47 = *(_QWORD *)(v46 + 104)) == 0
                || (v48 = *(unsigned int *)(v74 + 1624) + v47) == 0
                || !(unsigned int)KiGetThreadEffectiveRankNonZero(v46, v48, 0LL) )
              {
                v27 = *(_BYTE *)(v33 + 195);
              }
            }
            else
            {
              v27 = *(_BYTE *)(v46 + 195);
            }
            **(_BYTE **)(v45 + 56) = v27;
            *(_QWORD *)(v74 + 16) = v33;
            *(_BYTE *)(v33 + 388) = 3;
            p_WaitListEntry = &v69->WaitListEntry;
            Thread->WaitBlockFill6[68] = 7;
            Thread->WaitListEntry.Flink = p_WaitListEntry;
            v69 = &Thread->216;
          }
        }
        break;
      default:
        if ( KiAbEnabled )
        {
          v37 = KeGetCurrentPrcb();
          if ( (char)v31 > v34 )
          {
            if ( Thread->AbWaitEntryCount )
            {
              v38 = &Thread->PropagateBoostsEntry;
              if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                v35 = (__int64)&v37->AbPropagateBoostsList;
                if ( v37 != (struct _KPRCB *)-25656LL )
                {
                  v38->Next = *(struct _SINGLE_LIST_ENTRY **)v35;
                  *(_QWORD *)v35 = v38;
                  _InterlockedIncrement16(&Thread->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v37);
                }
              }
            }
          }
        }
        Thread->Priority = v31;
        break;
    }
    LOBYTE(v33) = 0;
LABEL_137:
    KiUpdateSharedReadyQueueAffinityThread(0LL, Thread, v35, v33);
    if ( v74 )
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 48), 0LL);
    if ( v70 )
      _InterlockedAnd64(v70, 0LL);
    if ( v65 )
    {
      LODWORD(v64) = KeGetPcr()->Prcb.Number;
      v66 = *(unsigned int *)(v74 + 36);
      if ( (_DWORD)v64 != (_DWORD)v66 )
      {
        v67 = KeGetCurrentPrcb();
        LOBYTE(v64) = 2;
        ++v67->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v66, v64);
      }
    }
    v2 = v73;
LABEL_145:
    v8 = v72;
  }
  v68 = (unsigned __int8)CurrentIrql;
  Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v69, v68);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1328, v8, v2, 0LL);
  return v8;
}
