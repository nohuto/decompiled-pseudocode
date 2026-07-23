/*
 * XREFs of KiQueueReadyThread @ 0x1400CEB10
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     NtYieldExecution @ 0x140091250 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     KxDispatchInterrupt @ 0x1401663B0 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x1401D2B3C (KeRemovePriorityBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140098864 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x140098D0C (KiAddThreadToScbQueue.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400CE170 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400CE188 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x1400CE1A4 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400CE2C8 (KiCheckMaxOverQuotaTransition.c)
 *     KiCheckThreadAffinity @ 0x1400CEFD4 (KiCheckThreadAffinity.c)
 *     KiComputeNewPriority @ 0x1400D02B0 (KiComputeNewPriority.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400F0CB4 (KiTryScheduleNextForegroundBoost.c)
 */

int __fastcall KiQueueReadyThread(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  __int64 v6; // rbx
  int v8; // r12d
  __int64 v9; // rsi
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  bool v13; // cl
  __int64 v14; // rbp
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  int v25; // r14d
  __int16 v26; // dx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // al
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v37; // [rsp+78h] [rbp+10h] BYREF
  int v38; // [rsp+80h] [rbp+18h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  v6 = a2;
  v8 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v4 >= *(_QWORD *)(a2 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
    }
    else
    {
      if ( v4 >= *(_QWORD *)(a2 + 32) )
      {
        LOBYTE(a2) = 1;
        v31 = KiComputeNewPriority(v6, a2);
        KiUpdateThreadPriority(0LL, v6, v31, 0);
        v32 = v4 + (unsigned int)*(unsigned __int8 *)(v6 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(v6 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 4u);
        *(_QWORD *)(v6 + 32) = v32;
        KiTryScheduleNextForegroundBoost(v6);
        v8 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(v6)
        && (unsigned int)KiComputeThreadAffinity(v33)
        && !KiPrcbInGroupAffinity(a1, v6 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0xBu);
      }
      *(_QWORD *)(v6 + 64) = 0LL;
    }
  }
  v9 = *(_QWORD *)(v6 + 104);
  v39 = v9;
  v10 = (volatile signed __int64 *)v9;
  if ( v9 )
    v9 += *(unsigned int *)(a1 + 1624);
  if ( v9 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v9 + 112) & 4) != 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(v9, v10) )
        {
          if ( (*(_BYTE *)(v9 + 112) & 1) != 0 )
            KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a1, v9, 1);
        }
        else if ( *(_QWORD *)v9 >= *(_QWORD *)(v9 + 24) && (*(_BYTE *)(v9 + 112) & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank((__int64)v10, v9, a1);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank((__int64)v10, a1, v9);
      }
      v25 += *(_DWORD *)(v9 + 116);
      v9 = *(_QWORD *)(v9 + 408);
      if ( !v9 )
        break;
      v10 = (volatile signed __int64 *)(v9 - *(unsigned int *)(a1 + 1624));
      v39 = (__int64)v10;
    }
    if ( (*(_DWORD *)(v6 + 120) & 0x100) == 0
      && *(char *)(v6 + 195) < 16
      && KiShouldPreemptionBeDeferred(v6)
      && v25
      && (v26 & 0x600) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0xAu);
    }
  }
  v11 = 0LL;
  if ( *(char *)(v6 + 195) >= 16 || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v34 = *(_QWORD *)(v6 + 104);
    if ( !v34 || (v35 = *(unsigned int *)(a1 + 1624) + v34) == 0 || !KiCheckForMaxOverQuotaScb(v35) )
      v11 = *(_QWORD *)(v6 + 576) & **(_QWORD **)(a1 + 1600);
  }
  if ( (*(_DWORD *)(v6 + 120) & 0x800) == 0 && !v11 )
  {
    *(_BYTE *)(v6 + 565) = 0;
    *(_DWORD *)(v6 + 436) = MEMORY[0xFFFFF78000000320];
    v12 = *(_QWORD *)(v6 + 104);
    if ( v12 )
      v12 += *(unsigned int *)(a1 + 1624);
    v13 = 0;
    *(_BYTE *)(v6 + 388) = 1;
    v37 = 0;
    if ( v12 && (*(_DWORD *)(v6 + 120) & 0x600) == 0 )
    {
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v6, v12, (__int64)a3, 0, &v37) )
      {
        LODWORD(v19) = KiAddThreadToScbQueue(a1, v12, v6, v8);
LABEL_18:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return v19;
      }
      v13 = v37;
    }
    v14 = *(char *)(v6 + 195);
    v15 = *(_QWORD *)(a1 + 24896);
    if ( (*(_DWORD *)(v6 + 120) & 0x1000) != 0 && v15 && (v15 & *(_QWORD *)(v6 + 576)) == v15 && !v13 )
    {
      v20 = *(_QWORD *)(a1 + 24904);
      v21 = (_QWORD *)(v20 + 16 * (v14 + 1));
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( *(_QWORD *)v20 );
      }
      v22 = (_QWORD *)(v6 + 216);
      if ( v8 )
      {
        v23 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 )
          __fastfail(3u);
        *v22 = v23;
        *(_QWORD *)(v6 + 224) = v21;
        *(_QWORD *)(v23 + 8) = v22;
        *v21 = v22;
        _bittestandreset((signed __int32 *)(a1 + 22684), v14);
      }
      else
      {
        v27 = (_QWORD *)v21[1];
        if ( (_QWORD *)*v27 != v21 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v6 + 224) = v27;
        *v27 = v22;
        v21[1] = v22;
      }
      *(_DWORD *)(v20 + 8) |= 1 << v14;
      LODWORD(v19) = *(_DWORD *)(v6 + 536) | 0x80000000;
      *(_DWORD *)(v6 + 536) = v19;
      _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
    }
    else
    {
      v16 = (_QWORD *)(v6 + 216);
      v17 = (_QWORD *)(a1 + 16 * (v14 + 1424));
      if ( v8 )
      {
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) != v17 )
          __fastfail(3u);
        *v16 = v18;
        v16[1] = v17;
        *(_QWORD *)(v18 + 8) = v16;
        *v17 = v16;
        _bittestandset((signed __int32 *)(a1 + 22684), v14);
      }
      else
      {
        v24 = (_QWORD *)v17[1];
        if ( (_QWORD *)*v24 != v17 )
          __fastfail(3u);
        *v16 = v17;
        v16[1] = v24;
        *v24 = v16;
        v17[1] = v16;
      }
      LODWORD(v19) = *(_DWORD *)(a1 + 22680) | (1 << v14);
      *(_DWORD *)(a1 + 22680) = v19;
    }
    goto LABEL_18;
  }
  if ( *(_QWORD *)(a1 + 16) )
    v5 = 1;
  *(_BYTE *)(v6 + 388) = 7;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0xBu);
  *(_BYTE *)(v6 + 565) = v8;
  LODWORD(v19) = KiDeferredReadyThread(a1, (_BYTE *)v6, a3, a4);
  if ( !v5 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != v19 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v28) = 2;
        LODWORD(v19) = KiRequestSoftwareInterrupt(a1, v28, v29, v30);
      }
    }
  }
  return v19;
}
