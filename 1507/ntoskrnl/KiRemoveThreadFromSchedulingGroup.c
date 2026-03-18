/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x14000B26C (KiSetThreadSchedulingGroup.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 * Callees:
 *     KeUpdateThreadSchedulingProperties @ 0x14000B9FC (KeUpdateThreadSchedulingProperties.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D3690 (KiRemoveThreadFromScbQueue.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

volatile signed __int64 *__fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r10
  unsigned __int64 v6; // rcx
  char v7; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r10
  bool v17; // zf
  unsigned int v18; // ebp
  volatile signed __int64 *result; // rax
  char v20; // bp
  unsigned int v21; // esi
  __int64 v22; // rdx
  char v23; // r14
  struct _KPRCB *v24; // rsi
  __int64 v25; // r15
  unsigned __int64 SharedReadyQueueMask; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r14
  _LIST_ENTRY *v28; // rsi
  unsigned int v29; // ebp
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *v34; // rdx
  struct _KPRCB *v35; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int64 *v36; // [rsp+48h] [rbp+10h] BYREF

  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = CurrentPrcb;
    _disable();
    CurrentPrcb->NestingLevel = 1;
    v3 = __rdtsc();
    v4 = 3LL;
    v5 = v3 - CurrentPrcb->StartCycles;
    *(_QWORD *)(a1 + 72) += v5;
    v6 = v5 + *(unsigned int *)(a1 + 80);
    CurrentPrcb->StartCycles = v3;
    v7 = *(_BYTE *)(a1 + 2);
    if ( v6 > 0xFFFFFFFF )
      v6 = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 80) = v6;
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                   - CurrentPrcb->TaggedCyclesStart;
        CurrentPrcb->TaggedCyclesStart = 0LL;
        v7 &= ~0x10u;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        if ( (v7 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(a1 + 1952) )
          {
            CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
            v10 = 3LL;
            if ( CurrentFrequency / 0x19 < 3 )
              v10 = CurrentFrequency / 0x19;
            v11 = CurrentPrcb->PowerState.Class + 2 * v10;
            v6 = v5 + *(_QWORD *)(v9 + 8 * v11);
            *(_QWORD *)(v9 + 8 * v11) = v6;
          }
          v7 &= ~0x20u;
        }
        if ( (v7 & 0x3E) != 0 )
        {
          v6 = *(_QWORD *)(a1 + 104);
          if ( v6 )
          {
            for ( v6 += CurrentPrcb->ScbOffset; v6; v6 = *(_QWORD *)(v6 + 392) )
              *(_QWORD *)v6 += v5;
          }
          if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
          {
            v6 = *(_QWORD *)(a1 + 576);
            if ( (v6 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
              CurrentPrcb->AffinitizedCycles += v5;
          }
          if ( *(_QWORD *)(a1 + 360) )
            KiEndCounterAccumulation(a1);
        }
      }
    }
    v12 = __rdtsc();
    v13 = (unsigned __int64)HIDWORD(v12) << 32;
    v14 = v12;
    CurrentPrcb->CycleTime += v12 - CurrentPrcb->StartCycles;
    if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
    {
      v15 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
      if ( v15 < 3 )
        v4 = v15;
      v13 = CurrentPrcb->PowerState.Class + 2 * v4;
      v6 = v16 + CurrentPrcb->Cycles[0][v13];
      CurrentPrcb->Cycles[0][v13] = v6;
    }
    CurrentPrcb->StartCycles = v14;
    if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
      CurrentPrcb->TaggedCyclesStart = v14;
    if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(a1, 0LL);
    v17 = CurrentPrcb->InterruptRequest == 0;
    CurrentPrcb->NestingLevel = 0;
    if ( !v17 )
    {
      LOBYTE(v6) = 2;
      CurrentPrcb->InterruptRequest = 0;
      HalRequestSoftwareInterrupt(v6);
    }
    _enable();
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v13) = 2;
    result = (volatile signed __int64 *)KeUpdateThreadSchedulingProperties(a1, v13, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    v20 = 0;
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v23 = KiAcquireThreadStateLock(a1, &v35, &v36);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v35, *(_QWORD *)(a1 + 1488), a1, (unsigned int)*(char *)(a1 + 195));
      v20 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    v24 = v35;
    LOBYTE(v22) = v23;
    KeUpdateThreadSchedulingProperties(a1, v22, v35);
    if ( v20 )
    {
      v25 = *(char *)(a1 + 195);
      SharedReadyQueueMask = v24->SharedReadyQueueMask;
      if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0
        && SharedReadyQueueMask
        && (SharedReadyQueueMask & *(_QWORD *)(a1 + 576)) == SharedReadyQueueMask )
      {
        SharedReadyQueue = v24->SharedReadyQueue;
        v28 = &SharedReadyQueue->ReadyListHead[v25];
        v29 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
        {
          do
          {
            if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v29);
          }
          while ( SharedReadyQueue->Lock );
        }
        Blink = v28->Blink;
        v31 = (struct _LIST_ENTRY *)(a1 + 216);
        *(_QWORD *)(a1 + 216) = v28;
        *(_QWORD *)(a1 + 224) = Blink;
        if ( Blink->Flink != v28 )
          __fastfail(3u);
        Blink->Flink = v31;
        v28->Blink = v31;
        SharedReadyQueue->ReadySummary |= 1 << v25;
        *(_DWORD *)(a1 + 536) |= 0x80000000;
        _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
        v24 = v35;
      }
      else
      {
        v32 = (struct _LIST_ENTRY *)(a1 + 216);
        v33 = &v24->DispatcherReadyListHead[v25];
        v34 = v33->Blink;
        *(_QWORD *)(a1 + 216) = v33;
        *(_QWORD *)(a1 + 224) = v34;
        if ( v34->Flink != v33 )
          __fastfail(3u);
        v34->Flink = v32;
        v33->Blink = v32;
        v24->ReadySummary |= 1 << v25;
      }
    }
    if ( v24 )
      _InterlockedAnd64((volatile signed __int64 *)&v24->PrcbLock, 0LL);
    result = v36;
    if ( v36 )
      _InterlockedAnd64(v36, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
