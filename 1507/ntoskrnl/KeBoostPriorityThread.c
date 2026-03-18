/*
 * XREFs of KeBoostPriorityThread @ 0x1400DBC80
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1404FAE8C (ExpCreateWorkerThread.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiAbProcessLocksWorker @ 0x1400F3920 (KiAbProcessLocksWorker.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  int v5; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  bool v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned __int64 Mask; // rcx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  char v16; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rdx
  bool v26; // zf
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rbx
  _BYTE *v29; // rdx
  _KTHREAD *CurrentThread; // rbp
  struct _KPRCB *v31; // r14
  _QWORD *v32; // rbx
  _BYTE *v33; // rdx
  unsigned int v34; // ebx
  _KTHREAD *NextThread; // rbx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rax
  UCHAR Size; // r9
  unsigned int v40; // edx
  __int64 v41; // r11
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *i; // rcx
  __int64 v44; // r8
  _QWORD v46[9]; // [rsp+40h] [rbp-48h] BYREF
  int v47; // [rsp+90h] [rbp+8h]
  _QWORD *v48; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v49; // [rsp+A8h] [rbp+20h] BYREF

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v2;
  v49 = 0LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  LOBYTE(v2) = 2;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
      v2 = *(void **)(a1 + 64);
    }
    while ( v2 );
  }
  v10 = (unsigned int)*(char *)(a1 + 195);
  v47 = v10;
  v11 = 3LL;
  if ( (int)v10 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    LODWORD(v2) = a2 + *(char *)(a1 + 563);
    if ( (int)v2 > (int)v10 )
    {
      v5 = a2 + *(char *)(a1 + 563);
      if ( (int)v2 >= 16 )
        v5 = 15;
      if ( !v8 || CurrentPrcb->NestingLevel )
      {
        v14 = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        CurrentPrcb->NestingLevel = 1;
        Mask = __rdtsc();
        v13 = Mask - CurrentPrcb->StartCycles;
        v14 = v13 + *(_QWORD *)(a1 + 72);
        v15 = v13 + *(unsigned int *)(a1 + 80);
        *(_QWORD *)(a1 + 72) = v14;
        CurrentPrcb->StartCycles = Mask;
        v16 = *(_BYTE *)(a1 + 2);
        if ( v15 > 0xFFFFFFFF )
          LODWORD(v15) = -1;
        *(_DWORD *)(a1 + 80) = v15;
        if ( (v16 & 0x3E) != 0 )
        {
          if ( (v16 & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                       - CurrentPrcb->TaggedCyclesStart;
            CurrentPrcb->TaggedCyclesStart = 0LL;
            v16 &= ~0x10u;
          }
          if ( (v16 & 0x3E) != 0 )
          {
            if ( (v16 & 0x20) != 0 )
            {
              if ( *(_QWORD *)(a1 + 1952) )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
                v19 = 3LL;
                if ( CurrentFrequency / 0x19 < 3 )
                  v19 = CurrentFrequency / 0x19;
                v20 = CurrentPrcb->PowerState.Class + 2 * v19;
                Mask = v13 + *(_QWORD *)(v18 + 8 * v20);
                *(_QWORD *)(v18 + 8 * v20) = Mask;
              }
              v16 &= ~0x20u;
            }
            if ( (v16 & 0x3E) != 0 )
            {
              Mask = *(_QWORD *)(a1 + 104);
              if ( Mask )
              {
                for ( Mask += CurrentPrcb->ScbOffset; Mask; Mask = *(_QWORD *)(Mask + 392) )
                  *(_QWORD *)Mask += v13;
              }
              if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
              {
                Mask = CurrentPrcb->ParentNode->Affinity.Mask;
                if ( (Mask & *(_QWORD *)(a1 + 576)) != Mask )
                  CurrentPrcb->AffinitizedCycles += v13;
              }
              if ( *(_QWORD *)(a1 + 360) )
                KiEndCounterAccumulation(a1);
            }
          }
        }
        v21 = __rdtsc();
        CurrentPrcb->CycleTime += v21 - CurrentPrcb->StartCycles;
        if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
        {
          v22 = PpmPerfGetCurrentFrequency(CurrentPrcb);
          v24 = 3LL;
          if ( v22 / 0x19 < 3 )
            v24 = v22 / 0x19;
          v25 = CurrentPrcb->PowerState.Class + 2 * v24;
          Mask = v23 + CurrentPrcb->Cycles[0][v25];
          CurrentPrcb->Cycles[0][v25] = Mask;
        }
        CurrentPrcb->StartCycles = v21;
        if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
          CurrentPrcb->TaggedCyclesStart = v21;
        if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
          KiBeginCounterAccumulation(a1, 0LL);
        v26 = CurrentPrcb->InterruptRequest == 0;
        CurrentPrcb->NestingLevel = 0;
        if ( !v26 )
        {
          LOBYTE(Mask) = 2;
          CurrentPrcb->InterruptRequest = 0;
          HalRequestSoftwareInterrupt(Mask);
        }
        _enable();
      }
      v27 = v14 + (unsigned int)*(unsigned __int8 *)(a1 + 651) * KiCyclesPerClockQuantum;
      if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      *(_QWORD *)(a1 + 32) = v27;
      LOBYTE(v2) = KiSetPriorityThread(a1, &v49, v5);
    }
  }
  v28 = v49;
  *(_QWORD *)(a1 + 64) = 0LL;
  while ( v28 )
  {
    v29 = v28 - 27;
    v28 = (_QWORD *)*v28;
    LOBYTE(v2) = KiDeferredReadyThread((__int64)CurrentPrcb, v29);
  }
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v2) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v2 )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v10) = 2;
          LOBYTE(v2) = HalRequestSoftwareInterrupt(v10);
        }
      }
    }
    goto LABEL_104;
  }
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    if ( ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) != 0x3F && KiAbEnabled )
    {
      v48 = 0LL;
      v46[0] = 0LL;
      v31 = KeGetCurrentPrcb();
      KiAbProcessThreadLocks(
        (_DWORD)CurrentThread,
        1,
        1,
        1,
        (__int64)&v48,
        (__int64)v46,
        (__int64)&v31->AbSelfIoBoostsList);
      KiAbProcessLocksWorker(v46, &v31->AbSelfIoBoostsList, &v48, 0LL);
      v32 = v48;
      while ( v32 )
      {
        v33 = v32 - 27;
        v32 = (_QWORD *)*v32;
        KiDeferredReadyThread((__int64)v31, v33);
      }
    }
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v34);
      }
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    CurrentPrcb->NestingLevel = 1;
    v36 = __rdtsc();
    v37 = v36 - CurrentPrcb->StartCycles;
    v38 = v37 + CurrentThread->CurrentRunTime;
    CurrentThread->CycleTime += v37;
    CurrentPrcb->StartCycles = v36;
    Size = CurrentThread->Header.Size;
    if ( v38 > 0xFFFFFFFF )
      LODWORD(v38) = -1;
    CurrentThread->CurrentRunTime = v38;
    if ( (Size & 0x3E) != 0 )
    {
      if ( (Size & 0x10) != 0 )
      {
        CurrentPrcb->TaggedCycles[CurrentThread->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
        CurrentPrcb->TaggedCyclesStart = 0LL;
        Size &= ~0x10u;
      }
      if ( (Size & 0x3E) != 0 )
      {
        if ( (Size & 0x20) != 0 )
        {
          if ( CurrentThread[1].WaitBlock[2].SparePtr )
          {
            v40 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
            if ( v40 < 3 )
              v11 = v40;
            *(_QWORD *)(v41 + 8 * (CurrentPrcb->PowerState.Class + 2 * v11)) += v37;
          }
          Size &= ~0x20u;
        }
        if ( (Size & 0x3E) != 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            for ( i = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[49] )
              *i += v37;
          }
          if ( (CurrentThread->Header.Size & 8) != 0
            && (CurrentPrcb->ParentNode->Affinity.Mask & CurrentThread->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
          {
            CurrentPrcb->AffinitizedCycles += v37;
          }
          if ( CurrentThread->WaitBlock[0].SparePtr )
            KiEndCounterAccumulation(CurrentThread);
        }
      }
    }
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    NextThread->WaitBlockFill6[68] = 2;
    CurrentThread->WaitReason = 32;
    CurrentThread->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    LOBYTE(v44) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v44) )
      goto LABEL_98;
    goto LABEL_97;
  }
  if ( (CurrentThread->MiscFlags & 0x40) != 0 )
  {
LABEL_97:
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_98:
  LOBYTE(v2) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_104:
  if ( v5 && (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    LOBYTE(v2) = EtwTracePriority(a1, 1328, v47, v5, 0LL);
  return (char)v2;
}
