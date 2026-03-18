/*
 * XREFs of KiQueueReadyThread @ 0x1400EAD80
 * Callers:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KxDispatchInterrupt @ 0x14018A480 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1400EC79C (KiScheduleNextForegroundBoost.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

int __fastcall KiQueueReadyThread(__int64 a1, __int64 a2, unsigned __int64 p_AbPropagateBoostsList)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned int v7; // r12d
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // al
  unsigned int v10; // eax
  int v11; // edx
  char v12; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 *v28; // r14
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 **v31; // rcx
  __int64 *v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 **v35; // rcx
  bool v36; // zf
  __int64 v37; // rcx

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
    }
    else
    {
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        p_AbPropagateBoostsList = *(unsigned __int8 *)(a2 + 195);
        if ( (char)p_AbPropagateBoostsList < 16 )
        {
          v8 = *(_BYTE *)(a2 + 564);
          v9 = -1 - (v8 >> 4) - (v8 & 0xF) + p_AbPropagateBoostsList;
          if ( v9 < *(_BYTE *)(a2 + 563) )
            v9 = *(_BYTE *)(a2 + 563);
          p_AbPropagateBoostsList = v9;
          if ( v8 )
          {
            if ( (v8 & 0xF) != 0 )
              *(_DWORD *)(a2 + 1420) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(a2 + 564) = 0;
          }
          v10 = *(_DWORD *)(a2 + 1408);
          if ( v10 )
          {
            _BitScanReverse((unsigned int *)&v11, v10);
            p_AbPropagateBoostsList = (unsigned __int8)p_AbPropagateBoostsList;
            if ( (char)p_AbPropagateBoostsList < v11 )
              p_AbPropagateBoostsList = (unsigned __int8)v11;
          }
        }
        v12 = p_AbPropagateBoostsList;
        if ( KiAbEnabled )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (char)p_AbPropagateBoostsList > *(char *)(a2 + 195) )
          {
            if ( *(_BYTE *)(a2 + 793) )
            {
              v14 = (_QWORD *)(a2 + 1376);
              if ( *(_QWORD *)(a2 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (unsigned __int64)&CurrentPrcb->AbPropagateBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                {
                  *v14 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v14;
                  _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1416));
                  KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
                }
              }
            }
          }
        }
        v15 = (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        v16 = *(_DWORD *)(a2 + 120);
        *(_BYTE *)(a2 + 195) = v12;
        v17 = v3 + v15;
        if ( (v16 & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 4u);
        v18 = *(_QWORD *)(a2 + 544);
        *(_QWORD *)(a2 + 32) = v17;
        if ( *(_BYTE *)(v18 + 1490) == 2 && *(char *)(a2 + 195) < 16 && (*(_DWORD *)(a2 + 120) & 2) == 0 )
          KiScheduleNextForegroundBoost(a2);
        v7 = 0;
      }
      if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence
        && (*(_DWORD *)(a2 + 116) & 8) == 0
        && (unsigned int)KiComputeThreadAffinity(a2)
        && (*(unsigned __int8 *)(a1 + 1616) != *(_WORD *)(a2 + 584)
         || (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(a2 + 576)) == 0LL) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
      *(_QWORD *)(a2 + 64) = 0LL;
    }
  }
  LOBYTE(p_AbPropagateBoostsList) = 1;
  KiUpdateGroupSchedulingRank(a2, a1, p_AbPropagateBoostsList);
  v19 = 0LL;
  if ( *(char *)(a2 + 195) >= 16 || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v20 = *(_QWORD *)(a2 + 104);
    if ( v20 && (v21 = *(unsigned int *)(a1 + 1624) + v20) != 0 )
    {
      while ( (*(_BYTE *)(v21 + 112) & 2) == 0 )
      {
        v21 = *(_QWORD *)(v21 + 392);
        if ( !v21 )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      v19 = *(_QWORD *)(a2 + 576) & **(_QWORD **)(a1 + 1600);
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x800) != 0 || v19 )
  {
    v36 = *(_QWORD *)(a1 + 16) == 0LL;
    *(_BYTE *)(a2 + 388) = 7;
    LOBYTE(v4) = !v36;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
    *(_BYTE *)(a2 + 565) = v7;
    LODWORD(v24) = KiDeferredReadyThread(a1, (_BYTE *)a2);
    if ( !v4 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 8) != v24 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( *(_BYTE *)(a1 + 32) )
          {
            *(_BYTE *)(a1 + 6) = 1;
          }
          else
          {
            LOBYTE(v37) = 2;
            LODWORD(v24) = HalRequestSoftwareInterrupt(v37);
          }
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v22 = *(_QWORD *)(a2 + 104);
    if ( v22 )
      v22 += *(unsigned int *)(a1 + 1624);
    *(_BYTE *)(a2 + 388) = 1;
    if ( v22 && (*(_DWORD *)(a2 + 120) & 0x600) == 0 && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v22, 0LL) )
    {
      LODWORD(v24) = KiAddThreadToScbQueue(a1, v23, a2, v7);
    }
    else
    {
      v25 = *(char *)(a2 + 195);
      v26 = *(_QWORD *)(a1 + 24768);
      if ( (*(_DWORD *)(a2 + 120) & 0x1000) != 0 && v26 && (v26 & *(_QWORD *)(a2 + 576)) == v26 )
      {
        v27 = *(_QWORD *)(a1 + 24776);
        v28 = (__int64 *)(v27 + 16 * (v25 + 1));
        while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
        {
          do
          {
            if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v4);
          }
          while ( *(_QWORD *)v27 );
        }
        v29 = (__int64 *)(a2 + 216);
        if ( v7 )
        {
          v30 = *v28;
          *v29 = *v28;
          *(_QWORD *)(a2 + 224) = v28;
          if ( *(__int64 **)(v30 + 8) != v28 )
            __fastfail(3u);
          *(_QWORD *)(v30 + 8) = v29;
          *v28 = (__int64)v29;
          _bittestandreset((signed __int32 *)(a1 + 22684), v25);
        }
        else
        {
          v31 = (__int64 **)v28[1];
          *v29 = (__int64)v28;
          *(_QWORD *)(a2 + 224) = v31;
          if ( *v31 != v28 )
            __fastfail(3u);
          *v31 = v29;
          v28[1] = (__int64)v29;
        }
        *(_DWORD *)(v27 + 8) |= 1 << v25;
        LODWORD(v24) = *(_DWORD *)(a2 + 536) | 0x80000000;
        *(_DWORD *)(a2 + 536) = v24;
        _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
      }
      else
      {
        v32 = (__int64 *)(a2 + 216);
        v33 = (__int64 *)(a1 + 16 * (v25 + 1424));
        if ( v7 )
        {
          v34 = *v33;
          *v32 = *v33;
          v32[1] = (__int64)v33;
          if ( *(__int64 **)(v34 + 8) != v33 )
            __fastfail(3u);
          *(_QWORD *)(v34 + 8) = v32;
          *v33 = (__int64)v32;
          _bittestandset((signed __int32 *)(a1 + 22684), v25);
        }
        else
        {
          v35 = (__int64 **)v33[1];
          *v32 = (__int64)v33;
          v32[1] = (__int64)v35;
          if ( *v35 != v33 )
            __fastfail(3u);
          *v35 = v32;
          v33[1] = (__int64)v32;
        }
        LODWORD(v24) = *(_DWORD *)(a1 + 22680) | (1 << v25);
        *(_DWORD *)(a1 + 22680) = v24;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  return v24;
}
