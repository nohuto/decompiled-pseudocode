/*
 * XREFs of KeRemovePriQueue @ 0x1400319E0
 * Callers:
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiAttemptFastRemovePriQueue @ 0x140030FA0 (KiAttemptFastRemovePriQueue.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     KiSwitchPriQueue @ 0x14012EFC4 (KiSwitchPriQueue.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

__int64 __fastcall KeRemovePriQueue(ULONG_PTR BugCheckParameter2, char a2, char a3, struct _KPRCB *CurrentPrcb)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // si
  unsigned int v10; // ebx
  $5F589360F986DA22318BA982CE57118F *v11; // r13
  int v12; // ebx
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY **Queue; // r8
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // r14
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 QueuePriority; // rcx
  struct _LIST_ENTRY *v22; // rcx
  __int64 v23; // r8
  unsigned __int8 v24; // al
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // edx
  _DISPATCHER_HEADER *volatile v28; // rcx
  bool v29; // zf
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rdx
  char PriorityDecrement; // al
  struct _KPRCB *v32; // rbx
  __int64 v33; // rsi
  unsigned __int64 SchedulingGroup; // rcx
  unsigned __int64 v35; // r10
  volatile unsigned __int64 CycleTime; // rbp
  unsigned __int64 v37; // rax
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v40; // r11
  __int64 v41; // rcx
  unsigned __int64 *v42; // rdx
  unsigned __int64 v43; // r9
  unsigned int v44; // edx
  __int64 v45; // r10
  unsigned __int64 *v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  struct _KPRCB *v49; // rsi
  unsigned int v50; // ebx
  signed __int32 v51[22]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v52; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v53; // [rsp+70h] [rbp+18h]
  unsigned __int64 v54; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( CurrentPrcb )
  {
    if ( *(int *)&CurrentPrcb->LegacyNumber >= 0 )
    {
      v54 = *(_QWORD *)&CurrentPrcb->MxCsr;
      v53 = 1;
    }
    else
    {
      v53 = 2;
      v54 = MEMORY[0xFFFFF78000000008]
          - MEMORY[0xFFFFF780000003B0]
          - (*(_QWORD *)&CurrentPrcb->MxCsr
           + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v53 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a2;
      if ( a3 )
        CurrentThread->MiscFlags |= 0x10u;
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v11 = &CurrentThread->320;
    if ( a3 )
    {
      if ( CurrentThread->Alerted[a2] )
      {
        CurrentThread->Alerted[a2] = 0;
        v12 = 257;
        goto LABEL_33;
      }
      if ( a2 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_32:
        v12 = 192;
LABEL_33:
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        goto LABEL_35;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v12 = 257;
        goto LABEL_33;
      }
    }
    else if ( ((unsigned __int8)a2 & CurrentThread->ApcState.UserApcPending) != 0 )
    {
      goto LABEL_32;
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    v12 = 0;
    CurrentThread->WaitReason = 15;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_35:
    result = v12;
    if ( v12 )
      return result;
    Queue = (struct _SINGLE_LIST_ENTRY **)CurrentThread->Queue;
    if ( (struct _SINGLE_LIST_ENTRY **)BugCheckParameter2 != Queue )
      KiSwitchPriQueue(CurrentThread, BugCheckParameter2);
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    v15 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)BugCheckParameter2;
    if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0
           || _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) );
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 4) )
      break;
LABEL_56:
    v18 = v54;
    if ( v53 == 2 )
    {
      v19 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v53 )
        goto LABEL_62;
      if ( !v54 )
        goto LABEL_126;
      v19 = MEMORY[0xFFFFF78000000014];
    }
    if ( v19 > v54 )
    {
LABEL_126:
      v17 = 258LL;
      goto LABEL_127;
    }
LABEL_62:
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
      while ( CurrentThread->ThreadLock );
    }
    QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 4 * QueuePriority + 536));
    CurrentThread->ThreadLock = 0LL;
    v22 = *(struct _LIST_ENTRY **)(BugCheckParameter2 + 16);
    v11->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(BugCheckParameter2 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v22;
    if ( v22->Flink != (struct _LIST_ENTRY *)(BugCheckParameter2 + 8) )
      __fastfail(3u);
    v22->Flink = (struct _LIST_ENTRY *)v11;
    *(_QWORD *)(BugCheckParameter2 + 16) = v11;
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v23 = v53;
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v23, v18);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v24;
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
    while ( CurrentThread->ThreadLock );
  }
  v17 = (__int64)KiAttemptFastRemovePriQueue(
                   BugCheckParameter2,
                   (int *)&v52,
                   (unsigned __int8)CurrentThread->QueuePriority);
  if ( !v17 )
  {
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_56;
  }
  v25 = v52;
  v26 = (unsigned __int8)CurrentThread->QueuePriority;
  if ( (_DWORD)v26 != v52 )
  {
    v27 = CurrentThread->QueuePriority & 0x100;
    if ( !v27 )
    {
      v28 = CurrentThread->Queue;
      _InterlockedDecrement((volatile signed __int32 *)&v28[22].WaitListHead + v26);
      _InterlockedIncrement((volatile signed __int32 *)&v28[22].WaitListHead + (int)v52);
      v25 = v52;
    }
    CurrentThread->QueuePriority = v27 | (unsigned __int8)v25;
  }
  v29 = KiAbEnabled == 0;
  CurrentThread->Saturation = 0;
  if ( !v29 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = v52;
    if ( (char)v52 < CurrentThread->BasePriority )
    {
      if ( CurrentThread->AbOwnedEntryCount )
      {
        p_IoSelfBoostsEntry = &CurrentThread->IoSelfBoostsEntry;
        if ( CurrentThread->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
        {
          Queue = &CurrentPrcb->AbSelfIoBoostsList.Next;
          if ( CurrentPrcb != (struct _KPRCB *)-25648LL )
          {
            p_IoSelfBoostsEntry->Next = *Queue;
            *Queue = p_IoSelfBoostsEntry;
            _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
            KiAbQueueAutoBoostDpc(CurrentPrcb);
            v25 = v52;
          }
        }
      }
    }
  }
  PriorityDecrement = CurrentThread->PriorityDecrement;
  CurrentThread->BasePriority = v25;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      v25 = v52;
      CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    }
    CurrentThread->PriorityDecrement = 0;
  }
  if ( v25 != CurrentThread->Priority )
  {
    v32 = KeGetCurrentPrcb();
    if ( v32->NestingLevel )
    {
      CycleTime = CurrentThread->CycleTime;
    }
    else
    {
      _disable();
      v32->NestingLevel = 1;
      v33 = 3LL;
      SchedulingGroup = __rdtsc();
      v35 = SchedulingGroup - v32->StartCycles;
      CycleTime = v35 + CurrentThread->CycleTime;
      v37 = v35 + CurrentThread->CurrentRunTime;
      CurrentThread->CycleTime = CycleTime;
      v32->StartCycles = SchedulingGroup;
      Size = CurrentThread->Header.Size;
      if ( v37 > 0xFFFFFFFF )
        LODWORD(v37) = -1;
      CurrentThread->CurrentRunTime = v37;
      if ( (Size & 0x3E) != 0 )
      {
        if ( (Size & 0x10) != 0 )
        {
          v32->TaggedCycles[CurrentThread->Tag] += v32->StartCycles - v32->TaggedCyclesStart;
          Size &= ~0x10u;
          v32->TaggedCyclesStart = 0LL;
        }
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x20) != 0 )
          {
            if ( CurrentThread[1].WaitBlock[2].SparePtr )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(v32);
              v41 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v41 = CurrentFrequency / 0x19;
              v42 = (unsigned __int64 *)(v40 + 8 * (v32->PowerState.Class + 2 * v41));
              SchedulingGroup = v35 + *v42;
              *v42 = SchedulingGroup;
            }
            Size &= ~0x20u;
          }
          if ( (Size & 0x3E) != 0 )
          {
            SchedulingGroup = (unsigned __int64)CurrentThread->SchedulingGroup;
            if ( SchedulingGroup )
            {
              for ( SchedulingGroup += v32->ScbOffset; SchedulingGroup; SchedulingGroup = *(_QWORD *)(SchedulingGroup + 392) )
                *(_QWORD *)SchedulingGroup += v35;
            }
            if ( (CurrentThread->Header.Size & 8) != 0 )
            {
              SchedulingGroup = v32->ParentNode->Affinity.Mask;
              if ( (SchedulingGroup & CurrentThread->Affinity.Mask) != SchedulingGroup )
                v32->AffinitizedCycles += v35;
            }
            if ( CurrentThread->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(CurrentThread);
          }
        }
      }
      v43 = __rdtsc();
      v32->CycleTime += v43 - v32->StartCycles;
      if ( (CurrentThread->Header.Size & 0x20) != 0 )
      {
        v44 = (unsigned int)PpmPerfGetCurrentFrequency(v32) / 0x19;
        if ( v44 < 3 )
          v33 = v44;
        v46 = &v32->Cycles[v33][v32->PowerState.Class];
        SchedulingGroup = v45 + *v46;
        *v46 = SchedulingGroup;
      }
      v32->StartCycles = v43;
      if ( (CurrentThread->Header.Size & 0x10) != 0 )
        v32->TaggedCyclesStart = v43;
      if ( (CurrentThread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(CurrentThread, 0LL);
      v29 = v32->InterruptRequest == 0;
      v32->NestingLevel = 0;
      if ( !v29 )
      {
        LOBYTE(SchedulingGroup) = 2;
        v32->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(SchedulingGroup);
      }
      _enable();
    }
    v47 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
    v48 = v52;
    CurrentThread->QuantumTarget = v47;
    KiSetPriorityThread(CurrentThread, 0LL, v48);
  }
  CurrentThread->ThreadLock = 0LL;
LABEL_127:
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v49 = KeGetCurrentPrcb();
  if ( v49->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v49, 1LL, 0LL, 2LL);
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v51, 0);
  if ( CurrentThread->ThreadLock )
  {
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v50);
      }
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->ThreadLock = 0LL;
  }
  LOBYTE(Queue) = 1;
  KiExitThreadWait(v49, CurrentThread, Queue, CurrentPrcb);
  return v17;
}
