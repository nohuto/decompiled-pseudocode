/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x14000A20C
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x14041C598 (PsSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     KiPriQueueThreadPriorityChanged @ 0x14000A02C (KiPriQueueThreadPriorityChanged.c)
 *     KeSetQuantumProcess @ 0x14000ABF8 (KeSetQuantumProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, UCHAR a3, int a4)
{
  __int64 result; // rax
  UCHAR v6; // r14
  int v7; // ebx
  int v8; // r12d
  char v9; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v11; // r13
  unsigned int v12; // r14d
  signed __int32 i; // edx
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  _KTHREAD *v17; // rbx
  bool v18; // r14
  unsigned int v19; // edi
  int v20; // ecx
  int v21; // r9d
  char v22; // al
  bool v23; // sf
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  volatile unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  UCHAR v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r10
  __int64 v31; // rcx
  _KSCHEDULING_GROUP *volatile v32; // rcx
  _QWORD *k; // rcx
  unsigned __int64 v34; // r9
  unsigned int v35; // eax
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  bool v40; // zf
  struct _KPRCB *v41; // rcx
  struct _SINGLE_LIST_ENTRY *v42; // r8
  _SINGLE_LIST_ENTRY *v43; // rdx
  char v44; // al
  volatile signed __int32 *v45; // rcx
  _KTHREAD *v46; // rbx
  bool v47; // r14
  unsigned int v48; // edi
  int BasePriority; // r12d
  int v50; // r9d
  char Saturation; // al
  bool v52; // sf
  unsigned __int64 v53; // rax
  __int64 v54; // r11
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int64 v56; // rcx
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v59; // r10
  __int64 v60; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *j; // rcx
  unsigned __int64 v63; // r9
  unsigned int v64; // eax
  __int64 v65; // r10
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  struct _KPRCB *v69; // rcx
  __int64 v70; // r8
  struct _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // r9
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx
  char PriorityDecrement; // al
  volatile signed __int32 *p_Lock; // rcx
  unsigned int v75; // [rsp+30h] [rbp-48h]
  bool v76; // [rsp+34h] [rbp-44h]
  __int64 v77; // [rsp+38h] [rbp-40h] BYREF
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  struct _KPRCB *v79; // [rsp+48h] [rbp-30h]
  _QWORD *v80; // [rsp+50h] [rbp-28h]
  _DWORD *v81; // [rsp+58h] [rbp-20h]
  __int64 CurrentIrql; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned int v84; // [rsp+C0h] [rbp+48h]
  unsigned int v85; // [rsp+C8h] [rbp+50h] BYREF
  UCHAR v86; // [rsp+D0h] [rbp+58h]
  int v87; // [rsp+D8h] [rbp+60h]

  v87 = a4;
  v86 = a3;
  result = (unsigned int)*(char *)(a1 + 444);
  v6 = a3;
  v7 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (!a4 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return (unsigned int)v7;
  }
  if ( (_UNKNOWN *)a1 == &KiInitialProcess )
    return result;
  if ( !(_DWORD)a2 )
    v7 = 1;
  v8 = 0;
  v77 = 0LL;
  v9 = 0;
  v76 = (WORD2(PerfGlobalGroupMask) & 0x2000) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = (volatile signed __int32 *)(a1 + 64);
  v79 = CurrentPrcb;
  v81 = (_DWORD *)(a1 + 64);
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v11, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
    for ( i = *v11; (*v11 & 0xBFFFFFFF) != 0x80000000; i = *v11 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v11, i | 0x40000000, i);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    v6 = v86;
  }
  if ( v6 )
    *(_BYTE *)(a1 + 445) = v6;
  v84 = *(char *)(a1 + 444);
  v75 = v7 - v84;
  *(_BYTE *)(a1 + 444) = v7;
  KeFlushProcessWriteBuffers(1LL);
  v15 = (_QWORD *)(a1 + 48);
  v16 = *(_QWORD **)(a1 + 48);
  v80 = (_QWORD *)(a1 + 48);
  if ( v7 < 16 )
  {
    if ( v16 == v15 )
      goto LABEL_192;
    while ( 1 )
    {
      v46 = (_KTHREAD *)(v16 - 95);
      if ( v6 )
        v46->SchedulerApc.SpareByte1 = v6;
      v47 = v46 == CurrentThread;
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v46->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v48);
        }
        while ( v46->ThreadLock );
      }
      BasePriority = v46->BasePriority;
      CurrentPrcb = v79;
      if ( BasePriority <= (int)v84 || BasePriority < 16 )
        break;
      v46->ThreadLock = 0LL;
LABEL_191:
      v16 = (_QWORD *)*v16;
      v6 = v86;
      if ( v16 == v80 )
        goto LABEL_192;
    }
    v50 = v75 + BasePriority;
    if ( (int)(v75 + BasePriority) < 16 )
    {
      if ( v50 <= 0 )
        v50 = 1;
    }
    else
    {
      v50 = 15;
    }
    Saturation = v46->Saturation;
    v85 = v50;
    v52 = Saturation < 0;
    if ( !Saturation )
      goto LABEL_129;
    if ( (int)v84 < 16LL )
      goto LABEL_187;
    v52 = Saturation < 0;
    if ( Saturation > 0 )
    {
      v85 = 15;
    }
    else
    {
LABEL_129:
      if ( v52 )
        v50 = 1;
      v85 = v50;
    }
    if ( !v47 || v79->NestingLevel )
    {
      CycleTime = v46->CycleTime;
    }
    else
    {
      _disable();
      v79->NestingLevel = 1;
      v53 = __rdtsc();
      v54 = v53 - CurrentPrcb->StartCycles;
      CycleTime = v54 + v46->CycleTime;
      v56 = v54 + v46->CurrentRunTime;
      v46->CycleTime = CycleTime;
      CurrentPrcb->StartCycles = v53;
      Size = v46->Header.Size;
      if ( v56 > 0xFFFFFFFF )
        LODWORD(v56) = -1;
      v46->CurrentRunTime = v56;
      if ( (Size & 0x3E) != 0 )
      {
        if ( (Size & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[v46->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
          CurrentPrcb->TaggedCyclesStart = 0LL;
          Size &= ~0x10u;
        }
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x20) != 0 )
          {
            if ( v46[1].WaitBlock[2].SparePtr )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v60 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v60 = CurrentFrequency / 0x19;
              *(_QWORD *)(v59 + 8 * (CurrentPrcb->PowerState.Class + 2 * v60)) += v54;
            }
            Size &= ~0x20u;
          }
          if ( (Size & 0x3E) != 0 )
          {
            SchedulingGroup = v46->SchedulingGroup;
            if ( SchedulingGroup )
            {
              for ( j = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset); j; j = (_QWORD *)j[49] )
                *j += v54;
            }
            if ( (v46->Header.Size & 8) != 0
              && (v46->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
            {
              CurrentPrcb->AffinitizedCycles += v54;
            }
            if ( v46->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(v16 - 95);
          }
        }
      }
      v63 = __rdtsc();
      CurrentPrcb->CycleTime += v63 - CurrentPrcb->StartCycles;
      if ( (v46->Header.Size & 0x20) != 0 )
      {
        v64 = PpmPerfGetCurrentFrequency(CurrentPrcb);
        v66 = 3LL;
        if ( v64 / 0x19 < 3 )
          v66 = v64 / 0x19;
        CurrentPrcb->Cycles[v66][CurrentPrcb->PowerState.Class] += v65;
      }
      v67 = 16LL;
      CurrentPrcb->StartCycles = v63;
      if ( (v46->Header.Size & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v63;
      if ( (v46->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(v16 - 95, 0LL);
      CurrentPrcb->NestingLevel = 0;
      if ( CurrentPrcb->InterruptRequest )
      {
        LOBYTE(v67) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(v67);
      }
      _enable();
    }
    v68 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v46->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&v46->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v46->116 + 1, 4u);
    v40 = KiAbEnabled == 0;
    v46->QuantumTarget = v68;
    if ( v40 )
    {
      v70 = v85;
    }
    else
    {
      v69 = KeGetCurrentPrcb();
      v70 = v85;
      if ( (char)v85 < v46->BasePriority )
      {
        if ( v46->AbOwnedEntryCount )
        {
          p_IoSelfBoostsEntry = &v46->IoSelfBoostsEntry;
          if ( v46->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbSelfIoBoostsList = &v69->AbSelfIoBoostsList;
            if ( v69 != (struct _KPRCB *)-25648LL )
            {
              p_IoSelfBoostsEntry->Next = p_AbSelfIoBoostsList->Next;
              p_AbSelfIoBoostsList->Next = p_IoSelfBoostsEntry;
              _InterlockedAdd16(&v46->KeReferenceCount, 1u);
              KiAbQueueAutoBoostDpc(v69);
              v70 = v85;
            }
          }
        }
      }
    }
    PriorityDecrement = v46->PriorityDecrement;
    v46->BasePriority = v70;
    if ( PriorityDecrement )
    {
      if ( (PriorityDecrement & 0xF) != 0 )
        v46->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      if ( v87 )
      {
        v70 = v46->Priority - (v46->PriorityDecrement & 0xFu);
        v46->PriorityDecrement &= 0xF0u;
      }
      else
      {
        v46->PriorityDecrement = 0;
      }
    }
    v85 = v70;
    KiSetPriorityThread(v16 - 95, &v77, v70);
    p_Lock = &v46->Queue->Lock;
    v9 = 1;
    if ( p_Lock && (*(_BYTE *)p_Lock & 0x7F) == 0x15 )
    {
      KiPriQueueThreadPriorityChanged(p_Lock, (__int64)(v16 - 95));
      v50 = v85;
LABEL_188:
      if ( v76 && v9 )
      {
        v9 = 0;
        EtwTracePriority((_DWORD)v16 - 760, 1329, BasePriority, v50, (__int64)&v85);
      }
      goto LABEL_191;
    }
    v50 = v85;
LABEL_187:
    v46->ThreadLock = 0LL;
    goto LABEL_188;
  }
  if ( v16 != v15 )
  {
    do
    {
      v17 = (_KTHREAD *)(v16 - 95);
      if ( v6 )
        v17->SchedulerApc.SpareByte1 = v6;
      v18 = v17 == CurrentThread;
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v19);
        }
        while ( v17->ThreadLock );
      }
      v20 = v17->BasePriority;
      v21 = v20 + v75;
      if ( (int)(v20 + v75) >= 16 )
      {
        if ( v21 > 31 )
          v21 = 31;
        v85 = v21;
      }
      else
      {
        v21 = 16;
        v85 = 16;
      }
      v22 = v17->Saturation;
      CurrentPrcb = v79;
      v23 = v22 < 0;
      if ( !v22 )
        goto LABEL_46;
      if ( (int)v84 >= 16LL )
        goto LABEL_101;
      v23 = v22 < 0;
      if ( v22 > 0 )
      {
        v85 = 31;
      }
      else
      {
LABEL_46:
        if ( v23 )
          v21 = 16;
        v85 = v21;
      }
      v8 = v20;
      if ( !v18 || v79->NestingLevel )
      {
        v26 = v17->CycleTime;
      }
      else
      {
        _disable();
        v79->NestingLevel = 1;
        v24 = __rdtsc();
        v25 = v24 - CurrentPrcb->StartCycles;
        v26 = v25 + v17->CycleTime;
        v27 = v25 + v17->CurrentRunTime;
        v17->CycleTime = v26;
        CurrentPrcb->StartCycles = v24;
        v28 = v17->Header.Size;
        if ( v27 > 0xFFFFFFFF )
          LODWORD(v27) = -1;
        v17->CurrentRunTime = v27;
        if ( (v28 & 0x3E) != 0 )
        {
          if ( (v28 & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[v17->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
            CurrentPrcb->TaggedCyclesStart = 0LL;
            v28 &= ~0x10u;
          }
          if ( (v28 & 0x3E) != 0 )
          {
            if ( (v28 & 0x20) != 0 )
            {
              if ( v17[1].WaitBlock[2].SparePtr )
              {
                v29 = PpmPerfGetCurrentFrequency(CurrentPrcb);
                v31 = 3LL;
                if ( v29 / 0x19 < 3 )
                  v31 = v29 / 0x19;
                *(_QWORD *)(v30 + 8 * (CurrentPrcb->PowerState.Class + 2 * v31)) += v25;
              }
              v28 &= ~0x20u;
            }
            if ( (v28 & 0x3E) != 0 )
            {
              v32 = v17->SchedulingGroup;
              if ( v32 )
              {
                for ( k = (_QWORD *)((char *)&v32->Policy + CurrentPrcb->ScbOffset); k; k = (_QWORD *)k[49] )
                  *k += v25;
              }
              if ( (v17->Header.Size & 8) != 0
                && (v17->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
              {
                CurrentPrcb->AffinitizedCycles += v25;
              }
              if ( v17->WaitBlock[0].SparePtr )
                KiEndCounterAccumulation(v16 - 95);
            }
          }
        }
        v34 = __rdtsc();
        CurrentPrcb->CycleTime += v34 - CurrentPrcb->StartCycles;
        if ( (v17->Header.Size & 0x20) != 0 )
        {
          v35 = PpmPerfGetCurrentFrequency(CurrentPrcb);
          v37 = 3LL;
          if ( v35 / 0x19 < 3 )
            v37 = v35 / 0x19;
          CurrentPrcb->Cycles[v37][CurrentPrcb->PowerState.Class] += v36;
        }
        v38 = 16LL;
        CurrentPrcb->StartCycles = v34;
        if ( (v17->Header.Size & 0x10) != 0 )
          CurrentPrcb->TaggedCyclesStart = v34;
        if ( (v17->Header.Size & 2) != 0 )
          KiBeginCounterAccumulation(v16 - 95, 0LL);
        CurrentPrcb->NestingLevel = 0;
        if ( CurrentPrcb->InterruptRequest )
        {
          LOBYTE(v38) = 2;
          CurrentPrcb->InterruptRequest = 0;
          HalRequestSoftwareInterrupt(v38);
        }
        _enable();
      }
      v39 = v26 + KiCyclesPerClockQuantum * (unsigned int)v17->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v17->116 + 1, 4u);
      v40 = KiAbEnabled == 0;
      v17->QuantumTarget = v39;
      if ( !v40 )
      {
        v41 = KeGetCurrentPrcb();
        if ( (char)v85 < v17->BasePriority )
        {
          if ( v17->AbOwnedEntryCount )
          {
            v42 = &v17->IoSelfBoostsEntry;
            if ( v17->IoSelfBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              v43 = &v41->AbSelfIoBoostsList;
              if ( v41 != (struct _KPRCB *)-25648LL )
              {
                v42->Next = v43->Next;
                v43->Next = v42;
                _InterlockedAdd16(&v17->KeReferenceCount, 1u);
                KiAbQueueAutoBoostDpc(v41);
              }
            }
          }
        }
      }
      v17->BasePriority = v85;
      v44 = v17->PriorityDecrement;
      if ( v44 )
      {
        if ( (v44 & 0xF) != 0 )
          v17->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
        v17->PriorityDecrement = 0;
      }
      KiSetPriorityThread(v16 - 95, &v77, v85);
      v45 = &v17->Queue->Lock;
      v9 = 1;
      if ( v45 && (*(_BYTE *)v45 & 0x7F) == 0x15 )
      {
        KiPriQueueThreadPriorityChanged(v45, (__int64)(v16 - 95));
        v21 = v85;
        goto LABEL_102;
      }
      v21 = v85;
LABEL_101:
      v17->ThreadLock = 0LL;
LABEL_102:
      if ( v76 && v9 )
      {
        v9 = 0;
        EtwTracePriority((_DWORD)v16 - 760, 1329, v8, v21, (__int64)&v85);
      }
      v16 = (_QWORD *)*v16;
      v6 = v86;
    }
    while ( v16 != v80 );
  }
LABEL_192:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v81, retaddr);
  else
    *v81 = 0;
  LOBYTE(v14) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v77, v14);
  return v84;
}
