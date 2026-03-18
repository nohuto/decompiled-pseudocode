/*
 * XREFs of KiSchedulerApc @ 0x14000EB14
 * Callers:
 *     <none>
 * Callees:
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14000D1B4 (KiInsertQueueApc.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiSetProcessorIdle @ 0x1400D53B0 (KiSetProcessorIdle.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiRemoveQueueApc @ 0x140128614 (KiRemoveQueueApc.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x14069A078 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x14069A0CC (KiSuspendUmsThread.c)
 */

void __fastcall KiSchedulerApc(__int64 a1)
{
  bool v1; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v5; // esi
  __int64 NextThread; // rsi
  __int64 v7; // rcx
  __int64 ScbOffset; // rax
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  char v14; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *i; // rcx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v24; // r15
  KPROCESSOR_MODE v25; // di
  __int64 v26; // rax
  __int16 v27; // ax
  char v28; // si
  unsigned __int8 v29; // r12
  unsigned int v30; // esi
  unsigned __int8 v31; // si
  unsigned int v32; // edi
  __int64 v33; // r8
  char v34; // bp
  struct _KPRCB *v35; // r14
  unsigned int v36; // esi
  _BYTE v37[16]; // [rsp+30h] [rbp-E8h] BYREF
  _DWORD v38[40]; // [rsp+40h] [rbp-D8h] BYREF

  v1 = (*(_DWORD *)(a1 + 120) & 0x4000) != 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
    KiAbProcessContextSwitch(a1, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, a1, 0LL)) != 0 )
    {
LABEL_20:
      CurrentPrcb->NextThread = 0LL;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v11 = __rdtsc();
      v12 = v11 - CurrentPrcb->StartCycles;
      v13 = v12 + *(unsigned int *)(a1 + 80);
      *(_QWORD *)(a1 + 72) += v12;
      CurrentPrcb->StartCycles = v11;
      v14 = *(_BYTE *)(a1 + 2);
      if ( v13 > 0xFFFFFFFF )
        LODWORD(v13) = -1;
      *(_DWORD *)(a1 + 80) = v13;
      if ( (v14 & 0x3E) != 0 )
      {
        if ( (v14 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                     - CurrentPrcb->TaggedCyclesStart;
          v14 &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (v14 & 0x3E) != 0 )
        {
          if ( (v14 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(a1 + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v17 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v17 = CurrentFrequency / 0x19;
              *(_QWORD *)(v16 + 8 * (CurrentPrcb->PowerState.Class + 2 * v17)) += v12;
            }
            v14 &= ~0x20u;
          }
          if ( (v14 & 0x3E) != 0 )
          {
            v18 = *(_QWORD *)(a1 + 104);
            if ( v18 )
            {
              for ( i = (_QWORD *)(CurrentPrcb->ScbOffset + v18); i; i = (_QWORD *)i[49] )
                *i += v12;
            }
            if ( (*(_BYTE *)(a1 + 2) & 8) != 0
              && (*(_QWORD *)(a1 + 576) & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
            {
              CurrentPrcb->AffinitizedCycles += v12;
            }
            if ( *(_QWORD *)(a1 + 360) )
              KiEndCounterAccumulation(a1);
          }
        }
      }
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        if ( *(char *)(NextThread + 195) >= 16
          || !*(_QWORD *)(NextThread + 104)
          || (v21 = *(_QWORD *)(NextThread + 104)) == 0
          || (v22 = CurrentPrcb->ScbOffset + v21) == 0
          || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(NextThread, v22, 0LL),
              v20 = 1,
              !ThreadEffectiveRankNonZero) )
        {
          v20 = *(_BYTE *)(NextThread + 195);
        }
      }
      else
      {
        v20 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v20;
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 104);
      if ( v7 )
      {
        ScbOffset = CurrentPrcb->ScbOffset;
        v9 = ScbOffset + v7 == 0;
        v10 = ScbOffset + v7;
        while ( !v9 )
        {
          if ( (*(_BYTE *)(v10 + 112) & 2) != 0 )
          {
            NextThread = (__int64)CurrentPrcb->IdleThread;
            KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL);
            if ( NextThread )
              goto LABEL_20;
            break;
          }
          v10 = *(_QWORD *)(v10 + 392);
          v9 = v10 == 0;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    }
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v1 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    {
      v24 = 1;
      KiSuspendUmsThread(a1, v37);
    }
    else
    {
      v24 = 0;
    }
    v25 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v26 = *(_QWORD *)(a1 + 144);
      if ( v26 )
      {
        --*(_WORD *)(a1 + 486);
        v25 = *(_BYTE *)(v26 + 368) & 1;
        v27 = *(_WORD *)(a1 + 486) + 1;
        *(_WORD *)(a1 + 486) = v27;
        if ( !v27 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v28 = *(_BYTE *)(a1 + 194);
    if ( v28 )
    {
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
        {
          if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v30);
        }
        while ( *(_QWORD *)(a1 + 64) );
      }
      v28 = *(_BYTE *)(a1 + 194);
      *(_BYTE *)(a1 + 194) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v29);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v25, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v28 )
    {
      v31 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
        {
          if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v32);
        }
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) = 1;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v31);
    }
    if ( v24 )
      KiResumeUmsThread(a1, v37);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      memset(v38, 0, 0x98uLL);
      LOBYTE(v33) = 1;
      v38[0] = -1073741523;
      v38[1] = 1;
      DbgkForwardException(v38, 0LL, v33);
    }
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v35 = KeGetCurrentPrcb();
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v36);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      *(_BYTE *)(a1 + 729) = 1;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      if ( *(_BYTE *)(a1 + 730) )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      KiSignalThreadForApc((__int64)v35, a1 + 648, v34);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((_DWORD)v35, 0, 1, 0, v34);
  }
}
