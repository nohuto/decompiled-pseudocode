/*
 * XREFs of KeSetLegacyAffinityThread @ 0x140043120
 * Callers:
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int32 v8; // ett
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  _KTHREAD *CurrentThread; // rsi
  unsigned int v14; // ebx
  _KTHREAD *NextThread; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v21; // r11
  __int64 v22; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *i; // rcx
  bool v25; // zf
  _QWORD *v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v28 = 0LL;
    v29 = 0LL;
    v27 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2 + 64);
    }
    else
    {
      _m_prefetchw((const void *)(v2 + 64));
      v8 = *(_DWORD *)(v2 + 64) & 0x7FFFFFFF;
      if ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 64), v8 + 1, v8) )
        ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v2 + 64));
    }
    LOWORD(v29) = *(_WORD *)(a1 + 560);
    v9 = (unsigned __int16)v29;
    v10 = qword_1403D15E8[(unsigned __int16)v29] & a2;
    if ( v10 && (v10 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v29 + 88)) == v10 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v28 = v10;
      KiSetAffinityThread(a1, &v27, &v28);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2 + 64, retaddr);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v2 + 64), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 64));
    }
    v11 = v27;
    while ( v11 )
    {
      v12 = v11 - 27;
      v11 = (_QWORD *)*v11;
      KiDeferredReadyThread(CurrentPrcb, v12);
    }
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v9) = 2;
          HalRequestSoftwareInterrupt(v9);
        }
      }
    }
    else
    {
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v14);
          }
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v16 = __rdtsc();
        v17 = v16 - CurrentPrcb->StartCycles;
        CurrentThread->CycleTime += v17;
        v18 = v17 + CurrentThread->CurrentRunTime;
        CurrentPrcb->StartCycles = v16;
        Size = CurrentThread->Header.Size;
        if ( v18 > 0xFFFFFFFF )
          LODWORD(v18) = -1;
        CurrentThread->CurrentRunTime = v18;
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
                v22 = 3LL;
                if ( CurrentFrequency / 0x19 < 3 )
                  v22 = CurrentFrequency / 0x19;
                *(_QWORD *)(v21 + 8 * (CurrentPrcb->PowerState.Class + 2 * v22)) += v17;
              }
              Size &= ~0x20u;
            }
            if ( (Size & 0x3E) != 0 )
            {
              SchedulingGroup = CurrentThread->SchedulingGroup;
              if ( SchedulingGroup )
              {
                for ( i = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[49] )
                  *i += v17;
              }
              if ( (CurrentThread->Header.Size & 8) != 0
                && (CurrentThread->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
              {
                CurrentPrcb->AffinitizedCycles += v17;
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
        v25 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) == 0;
      }
      else
      {
        v25 = (CurrentThread->MiscFlags & 0x40) == 0;
      }
      if ( !v25 )
      {
        __writecr8(1uLL);
        CurrentThread->MiscFlags &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      __writecr8(CurrentIrql);
    }
  }
  return v3;
}
