/*
 * XREFs of KeSetBasePriorityThread @ 0x14011ABD0
 * Callers:
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x1405C2D20 (PfTLoggingWorker.c)
 * Callees:
 *     KiPriQueueThreadPriorityChanged @ 0x14000A02C (KiPriQueueThreadPriorityChanged.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  bool v7; // r13
  unsigned int v8; // esi
  int BasePriority; // r11d
  LONG v10; // r12d
  char Saturation; // al
  int v12; // esi
  char v13; // al
  int v14; // eax
  int v15; // r8d
  char Priority; // r9
  unsigned __int8 PriorityDecrement; // dl
  char v18; // cl
  unsigned int PriorityFloorSummary; // eax
  int v20; // edx
  int v21; // eax
  struct _KPRCB *v22; // rcx
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r9
  char v25; // al
  __int64 v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r11
  volatile unsigned __int64 CycleTime; // rsi
  unsigned __int64 SchedulingGroup; // rcx
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  unsigned int v37; // edx
  __int64 v38; // r10
  __int64 v39; // rdx
  bool v40; // zf
  unsigned __int64 v41; // rcx
  char v42; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _QWORD *v44; // [rsp+38h] [rbp-18h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-10h]
  int v46; // [rsp+90h] [rbp+40h]
  int v47; // [rsp+A0h] [rbp+50h] BYREF
  int v48; // [rsp+A8h] [rbp+58h]

  Process = Thread->Process;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = Thread == CurrentPrcb->CurrentThread;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( Thread->ThreadLock );
  }
  BasePriority = Thread->BasePriority;
  v10 = BasePriority - Process->BasePriority;
  v48 = BasePriority;
  Saturation = Thread->Saturation;
  v12 = BasePriority;
  if ( Saturation )
    v10 = 16 * Saturation;
  Thread->Saturation = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v13 = -1;
    if ( Increment > 0 )
      v13 = 1;
    Thread->Saturation = v13;
  }
  v14 = Process->BasePriority;
  v15 = Increment + v14;
  if ( (char)v14 < 16 )
  {
    if ( v15 < 16 )
    {
      if ( v15 <= 0 )
        v15 = 1;
      v46 = v15;
    }
    else
    {
      v15 = 15;
      v46 = 15;
    }
    if ( !Thread->Saturation )
    {
      Priority = Thread->Priority;
      if ( Priority < 16 )
      {
        PriorityDecrement = Thread->PriorityDecrement;
        v18 = Priority - ((PriorityDecrement & 0xF) + (PriorityDecrement >> 4));
        if ( v18 < (char)BasePriority )
          v18 = BasePriority;
        Priority = v18;
        if ( PriorityDecrement )
        {
          if ( (PriorityDecrement & 0xF) != 0 )
          {
            v15 = v46;
            Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
          }
          Thread->PriorityDecrement = 0;
        }
        PriorityFloorSummary = Thread->PriorityFloorSummary;
        if ( PriorityFloorSummary )
        {
          _BitScanReverse((unsigned int *)&v20, PriorityFloorSummary);
          if ( v18 < v20 )
            Priority = v20;
        }
      }
      v21 = v15 + Priority - BasePriority;
      if ( v21 < 16 )
      {
        if ( v21 <= 0 )
          v21 = 1;
        v47 = v21;
      }
      else
      {
        v47 = 15;
      }
      goto LABEL_45;
    }
  }
  else
  {
    if ( v15 >= 16 )
    {
      if ( v15 > 31 )
        v15 = 31;
    }
    else
    {
      v15 = 16;
    }
    v46 = v15;
  }
  v47 = v15;
LABEL_45:
  if ( KiAbEnabled )
  {
    v22 = KeGetCurrentPrcb();
    LOBYTE(v15) = v46;
    if ( (char)v46 < Thread->BasePriority )
    {
      if ( Thread->AbOwnedEntryCount )
      {
        p_IoSelfBoostsEntry = &Thread->IoSelfBoostsEntry;
        if ( Thread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
        {
          p_AbSelfIoBoostsList = &v22->AbSelfIoBoostsList;
          if ( v22 != (struct _KPRCB *)-25648LL )
          {
            p_IoSelfBoostsEntry->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = p_IoSelfBoostsEntry;
            _InterlockedAdd16(&Thread->KeReferenceCount, 1u);
            KiAbQueueAutoBoostDpc((__int64)v22);
            LOBYTE(v15) = v46;
          }
        }
      }
    }
  }
  v25 = Thread->PriorityDecrement;
  Thread->BasePriority = v15;
  if ( v25 )
  {
    if ( (v25 & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( v47 != Thread->Priority )
  {
    if ( !v7 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v26 = 3LL;
      v27 = __rdtsc();
      v28 = v27 - CurrentPrcb->StartCycles;
      CycleTime = v28 + Thread->CycleTime;
      SchedulingGroup = v28 + Thread->CurrentRunTime;
      Thread->CycleTime = CycleTime;
      CurrentPrcb->StartCycles = v27;
      Size = Thread->Header.Size;
      if ( SchedulingGroup > 0xFFFFFFFF )
        SchedulingGroup = 0xFFFFFFFFLL;
      Thread->CurrentRunTime = SchedulingGroup;
      if ( (Size & 0x3E) != 0 )
      {
        if ( (Size & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[Thread->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
          CurrentPrcb->TaggedCyclesStart = 0LL;
          Size &= ~0x10u;
        }
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x20) != 0 )
          {
            if ( Thread[1].WaitBlock[2].SparePtr )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v34 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v34 = CurrentFrequency / 0x19;
              v35 = CurrentPrcb->PowerState.Class + 2 * v34;
              SchedulingGroup = v28 + *(_QWORD *)(v33 + 8 * v35);
              *(_QWORD *)(v33 + 8 * v35) = SchedulingGroup;
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
                *(_QWORD *)SchedulingGroup += v28;
              }
            }
            if ( (Thread->Header.Size & 8) != 0 )
            {
              SchedulingGroup = Thread->Affinity.Mask;
              if ( (SchedulingGroup & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                CurrentPrcb->AffinitizedCycles += v28;
            }
            if ( Thread->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(Thread);
          }
        }
      }
      v36 = __rdtsc();
      CurrentPrcb->CycleTime += v36 - CurrentPrcb->StartCycles;
      if ( (Thread->Header.Size & 0x20) != 0 )
      {
        v37 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
        if ( v37 < 3 )
          v26 = v37;
        v39 = CurrentPrcb->PowerState.Class + 2 * v26;
        SchedulingGroup = v38 + CurrentPrcb->Cycles[0][v39];
        CurrentPrcb->Cycles[0][v39] = SchedulingGroup;
      }
      CurrentPrcb->StartCycles = v36;
      if ( (Thread->Header.Size & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v36;
      if ( (Thread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(Thread, 0LL);
      v40 = CurrentPrcb->InterruptRequest == 0;
      CurrentPrcb->NestingLevel = 0;
      if ( !v40 )
      {
        LOBYTE(SchedulingGroup) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(SchedulingGroup);
      }
      _enable();
    }
    v41 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    v42 = v47;
    Thread->QuantumTarget = v41;
    KiSetPriorityThread((__int64)Thread, &v44, v42);
    v12 = v48;
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v44, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, v12, v46, (__int64)&v47);
  return v10;
}
