/*
 * XREFs of NtYieldExecution @ 0x1400EB420
 * Callers:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

NTSTATUS NtYieldExecution(void)
{
  NTSTATUS v1; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 NextThread; // rbx
  __int64 v9; // r14
  unsigned __int64 SchedulingGroup; // rcx
  unsigned __int64 v11; // r10
  volatile unsigned __int64 CycleTime; // rbp
  unsigned __int64 v13; // rax
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v16; // r11
  __int64 v17; // rcx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int64 *v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 Priority; // r8
  unsigned __int8 PriorityDecrement; // dl
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  int v29; // edx
  char v30; // bp
  struct _KPRCB *v31; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  UCHAR v36; // r9
  unsigned int v37; // eax
  __int64 v38; // r11
  _KSCHEDULING_GROUP *volatile v39; // rcx
  _QWORD *i; // rcx
  char v41; // cl
  __int64 v42; // rdx
  __int64 v43; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 v45; // r8

  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v1 = 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0);
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( CurrentThread->ThreadLock );
    }
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread || (LOBYTE(v5) = 1, (NextThread = KiSelectReadyThreadEx(CurrentPrcb, 0LL, v5)) != 0) )
    {
      v9 = 3LL;
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CurrentPrcb->NestingLevel = 1;
        SchedulingGroup = __rdtsc();
        v11 = SchedulingGroup - CurrentPrcb->StartCycles;
        CycleTime = v11 + CurrentThread->CycleTime;
        v13 = v11 + CurrentThread->CurrentRunTime;
        CurrentThread->CycleTime = CycleTime;
        CurrentPrcb->StartCycles = SchedulingGroup;
        Size = CurrentThread->Header.Size;
        if ( v13 > 0xFFFFFFFF )
          LODWORD(v13) = -1;
        CurrentThread->CurrentRunTime = v13;
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[CurrentThread->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
            Size &= ~0x10u;
            CurrentPrcb->TaggedCyclesStart = 0LL;
          }
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x20) != 0 )
            {
              if ( CurrentThread[1].WaitBlock[2].SparePtr )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
                v17 = 3LL;
                if ( CurrentFrequency / 0x19 < 3 )
                  v17 = CurrentFrequency / 0x19;
                v18 = (unsigned __int64 *)(v16 + 8 * (CurrentPrcb->PowerState.Class + 2 * v17));
                SchedulingGroup = v11 + *v18;
                *v18 = SchedulingGroup;
              }
              Size &= ~0x20u;
            }
            if ( (Size & 0x3E) != 0 )
            {
              SchedulingGroup = (unsigned __int64)CurrentThread->SchedulingGroup;
              if ( SchedulingGroup )
              {
                for ( SchedulingGroup += CurrentPrcb->ScbOffset;
                      SchedulingGroup;
                      SchedulingGroup = *(_QWORD *)(SchedulingGroup + 392) )
                {
                  *(_QWORD *)SchedulingGroup += v11;
                }
              }
              if ( (CurrentThread->Header.Size & 8) != 0 )
              {
                SchedulingGroup = CurrentThread->Affinity.Mask;
                if ( (SchedulingGroup & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                  CurrentPrcb->AffinitizedCycles += v11;
              }
              if ( CurrentThread->WaitBlock[0].SparePtr )
                KiEndCounterAccumulation(CurrentThread);
            }
          }
        }
        v19 = __rdtsc();
        CurrentPrcb->CycleTime += v19 - CurrentPrcb->StartCycles;
        if ( (CurrentThread->Header.Size & 0x20) != 0 )
        {
          v20 = PpmPerfGetCurrentFrequency(CurrentPrcb);
          v22 = 3LL;
          if ( v20 / 0x19 < 3 )
            v22 = v20 / 0x19;
          v23 = &CurrentPrcb->Cycles[v22][CurrentPrcb->PowerState.Class];
          SchedulingGroup = v21 + *v23;
          *v23 = SchedulingGroup;
        }
        CurrentPrcb->StartCycles = v19;
        if ( (CurrentThread->Header.Size & 0x10) != 0 )
          CurrentPrcb->TaggedCyclesStart = v19;
        if ( (CurrentThread->Header.Size & 2) != 0 )
          KiBeginCounterAccumulation(CurrentThread, 0LL);
        CurrentPrcb->NestingLevel = 0;
        if ( CurrentPrcb->InterruptRequest )
        {
          LOBYTE(SchedulingGroup) = 2;
          CurrentPrcb->InterruptRequest = 0;
          HalRequestSoftwareInterrupt(SchedulingGroup);
        }
        _enable();
      }
      v24 = CycleTime + (unsigned int)CurrentThread->SchedulerApc.SpareByte1 * KiCyclesPerClockQuantum;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
      Priority = (unsigned __int8)CurrentThread->Priority;
      CurrentThread->QuantumTarget = v24;
      if ( (char)Priority < 16 )
      {
        PriorityDecrement = CurrentThread->PriorityDecrement;
        BasePriority = -1 - (PriorityDecrement >> 4) - (PriorityDecrement & 0xF) + Priority;
        if ( BasePriority < CurrentThread->BasePriority )
          BasePriority = CurrentThread->BasePriority;
        Priority = (unsigned __int8)BasePriority;
        if ( PriorityDecrement )
        {
          if ( (PriorityDecrement & 0xF) != 0 )
            CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
          CurrentThread->PriorityDecrement = 0;
        }
        PriorityFloorSummary = CurrentThread->PriorityFloorSummary;
        if ( PriorityFloorSummary )
        {
          _BitScanReverse((unsigned int *)&v29, PriorityFloorSummary);
          Priority = (unsigned __int8)Priority;
          if ( (char)Priority < v29 )
            Priority = (unsigned __int8)v29;
        }
      }
      v30 = Priority;
      if ( KiAbEnabled )
      {
        v31 = KeGetCurrentPrcb();
        if ( (char)Priority > CurrentThread->Priority )
        {
          if ( CurrentThread->AbWaitEntryCount )
          {
            p_PropagateBoostsEntry = &CurrentThread->PropagateBoostsEntry;
            if ( CurrentThread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              Priority = (unsigned __int64)&v31->AbPropagateBoostsList;
              if ( v31 != (struct _KPRCB *)-25656LL )
              {
                p_PropagateBoostsEntry->Next = *(struct _SINGLE_LIST_ENTRY **)Priority;
                *(_QWORD *)Priority = p_PropagateBoostsEntry;
                _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
                KiAbQueueAutoBoostDpc((__int64)v31);
              }
            }
          }
        }
      }
      CurrentThread->Priority = v30;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v33 = __rdtsc();
      v34 = v33 - CurrentPrcb->StartCycles;
      v35 = v34 + CurrentThread->CurrentRunTime;
      CurrentThread->CycleTime += v34;
      CurrentPrcb->StartCycles = v33;
      v36 = CurrentThread->Header.Size;
      if ( v35 > 0xFFFFFFFF )
        LODWORD(v35) = -1;
      CurrentThread->CurrentRunTime = v35;
      if ( (v36 & 0x3E) != 0 )
      {
        if ( (v36 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[CurrentThread->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
          v36 &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (v36 & 0x3E) != 0 )
        {
          if ( (v36 & 0x20) != 0 )
          {
            if ( CurrentThread[1].WaitBlock[2].SparePtr )
            {
              v37 = PpmPerfGetCurrentFrequency(CurrentPrcb);
              Priority = v37;
              if ( v37 / 0x19 < 3 )
                v9 = v37 / 0x19;
              *(_QWORD *)(v38 + 8 * (CurrentPrcb->PowerState.Class + 2 * v9)) += v34;
            }
            v36 &= ~0x20u;
          }
          if ( (v36 & 0x3E) != 0 )
          {
            v39 = CurrentThread->SchedulingGroup;
            if ( v39 )
            {
              for ( i = (_QWORD *)((char *)&v39->Policy + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[49] )
                *i += v34;
            }
            if ( (CurrentThread->Header.Size & 8) != 0
              && (CurrentThread->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
            {
              CurrentPrcb->AffinitizedCycles += v34;
            }
            if ( CurrentThread->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(CurrentThread);
          }
        }
      }
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        if ( *(char *)(NextThread + 195) >= 16
          || !*(_QWORD *)(NextThread + 104)
          || (v42 = *(_QWORD *)(NextThread + 104)) == 0
          || (v43 = CurrentPrcb->ScbOffset + v42) == 0
          || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(NextThread, v43, 0LL),
              v41 = Priority + 1,
              !ThreadEffectiveRankNonZero) )
        {
          v41 = *(_BYTE *)(NextThread + 195);
        }
      }
      else
      {
        v41 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v41;
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, (__int64)CurrentThread, Priority);
      LOBYTE(v45) = 1;
      KiSwapContext(CurrentThread, NextThread, v45);
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
