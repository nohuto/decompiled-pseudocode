/*
 * XREFs of KiSwapThread @ 0x140082450
 * Callers:
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x1400C7B28 (KiInSwapSingleProcess.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400312FC (KiInsertDeferredPreemptionApc.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400C3468 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400C3838 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400C3C94 (KiComputeGroupSchedulingRank.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     KiAccumulateCycleStats @ 0x14014290C (KiAccumulateCycleStats.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     KiEndCounterAccumulation @ 0x1401C7FE4 (KiEndCounterAccumulation.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // bp
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // esi
  char EffectivePriorityThread; // al
  unsigned __int8 v20; // bp
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // r14
  __int64 v24; // rdi
  volatile signed __int32 *v26; // rsi
  char v27; // r15
  unsigned __int64 v28; // r13
  __int64 v29; // rax
  volatile signed __int32 *v30; // r12
  _QWORD *v31; // rcx
  __int64 v32; // r10
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *i; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  char v38; // dl
  int v39; // [rsp+30h] [rbp-78h] BYREF
  int v40; // [rsp+34h] [rbp-74h] BYREF
  int v41; // [rsp+38h] [rbp-70h] BYREF
  int v42; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h]
  _QWORD v46[2]; // [rsp+58h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a2 + 11400) )
    KiProcessThreadWaitList(a2, 1LL, 0LL);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a2 + 23352);
  v8 = v7 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v7;
  v9 = 0xFFFFFFFFLL;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_QWORD *)(a2 + 23352) = v6;
  v10 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v8;
  if ( (v10 & 0x3E) != 0 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 23352) - *(_QWORD *)(a2 + 23360);
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 23368) += v9;
      v10 &= ~0x10u;
      *(_QWORD *)(a2 + 23360) = 0LL;
    }
    if ( (v10 & 0x3E) != 0 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        KiAccumulateCycleStats(a2, a1, v7, v5);
        v10 &= ~0x20u;
      }
      if ( (v10 & 0x3E) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 104);
        if ( v34 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a2 + 1624) + v34); i; i = (_QWORD *)i[49] )
            *i += v7;
        }
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 136LL);
          if ( (*(_QWORD *)(a1 + 576) & v9) != v9 )
            *(_QWORD *)(a2 + 23392) += v7;
        }
        if ( *(_QWORD *)(a1 + 360) )
          KiEndCounterAccumulation(a1, v9, v4, v5);
      }
    }
  }
  _enable();
  v11 = *(_DWORD *)(a1 + 84) >> 1;
  v12 = *(_DWORD *)(a1 + 80) >> 1;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v12 + v11;
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v42, v9, v4);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v13 = *(_QWORD *)(a1 + 104);
  v14 = v13;
  v45 = v13;
  if ( v13 )
  {
    v37 = *(unsigned int *)(a2 + 1624) + v13;
    if ( v37 )
    {
      while ( 1 )
      {
        v38 = *(_BYTE *)(v37 + 112);
        if ( (v38 & 4) != 0 )
        {
          if ( (v38 & 0x12) != 0 || *(_QWORD *)v37 <= *(_QWORD *)(v37 + 16) )
          {
            if ( *(_QWORD *)v37 > *(_QWORD *)(v37 + 24) )
              KiRecomputeGroupSchedulingRank(v14, v37, a2);
          }
          else
          {
            *(_BYTE *)(v37 + 112) = v38 | 2;
            if ( *(__int64 *)(v14 + 32) > 0 )
              KiChargeSchedulingGroupCycleTime(v14, v37);
            if ( (*(_BYTE *)(v37 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue(a2, v37, 1LL);
          }
        }
        else if ( *(_QWORD *)v37 >= *(_QWORD *)(v37 + 8) )
        {
          KiComputeGroupSchedulingRank(v14, a2, v37);
        }
        else if ( (v38 & 1) != 0 )
        {
          KiResortScbQueue(a2, v37, 1LL);
        }
        v37 = *(_QWORD *)(v37 + 392);
        if ( !v37 )
          break;
        v14 = v37 - *(unsigned int *)(a2 + 1624);
        v45 = v14;
      }
    }
  }
  v16 = KiSearchForNewThread(a2, 0LL);
  if ( !v16 )
  {
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18, v15, v17);
      }
      while ( *(_QWORD *)(a2 + 48) );
    }
    v16 = *(_QWORD *)(a2 + 16);
    if ( v16 )
      *(_QWORD *)(a2 + 16) = 0LL;
    else
      v16 = *(_QWORD *)(a2 + 24);
    if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(v16, a2);
    else
      EffectivePriorityThread = *(_BYTE *)(v16 + 195);
    **(_BYTE **)(a2 + 56) = EffectivePriorityThread;
    *(_QWORD *)(a2 + 8) = v16;
    *(_BYTE *)(v16 + 388) = 2;
  }
  if ( v16 != *(_QWORD *)(a2 + 24) && v16 != a1 && *(_BYTE *)(v16 + 113) )
  {
    KiUpdateThreadState(a2, (_BYTE *)v16, 3, 1);
    v16 = *(_QWORD *)(a2 + 24);
    KiUpdateThreadState(a2, (_BYTE *)v16, 2, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v20 = *(_BYTE *)(a1 + 390);
  if ( a1 == v16 )
  {
    v23 = *(_BYTE *)(v16 + 193) && !*(_WORD *)(v16 + 486) && !v20;
    _disable();
    KiStartThreadCycleAccumulation(a2, v16, 0);
    _enable();
    if ( (*(_DWORD *)(v16 + 120) & 0x400) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v16 + 120), 0xAu);
      KiInsertDeferredPreemptionApc(a2, v16, 0);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v23 = KiSwapContext(a1, v16, v20);
  }
  v24 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    v26 = (volatile signed __int32 *)(a1 + 256);
    v27 = 0;
    while ( 1 )
    {
      v41 = 0;
      while ( _interlockedbittestandset(v26, 7u) )
      {
        do
          KeYieldProcessorEx(&v41, v21, v22);
        while ( (*v26 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(a1 + 259) & 0xC0) == 0 )
      {
        _InterlockedAnd(v26, 0xFFFFFF7F);
        goto LABEL_37;
      }
      v28 = *(unsigned __int8 *)(a1 + 258);
      v29 = *(unsigned int *)(a1 + 312);
      v40 = 0;
      v43 = KiProcessorBlock[v29] + 13824;
      v30 = (volatile signed __int32 *)(v43 + 32 * (v28 + 16));
      while ( _interlockedbittestandset64(v30, 0LL) )
      {
        do
          KeYieldProcessorEx(&v40, v21, v22);
        while ( *(_QWORD *)v30 );
      }
      if ( *(char *)(a1 + 259) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
      v21 = v43;
      if ( _InterlockedExchange64((volatile __int64 *)(v43 + 8LL * (*(_BYTE *)(a1 + 259) & 0x3F)), 0LL) )
      {
        _InterlockedAnd(v26, 0xFFFF7Fu);
        v27 = 1;
        goto LABEL_37;
      }
      _InterlockedAnd(v26, 0xFFFFFF7F);
      v39 = 0;
      while ( *(char *)(a1 + 259) < 0 )
        KeYieldProcessorEx(&v39, v21, v22);
    }
    v31 = *(_QWORD **)(a1 + 288);
    v32 = v43;
    v33 = *(_QWORD **)(a1 + 296);
    if ( v31[1] != a1 + 288 || *v33 != a1 + 288 )
      __fastfail(3u);
    *v33 = v31;
    v31[1] = v33;
    if ( v33 == v31 )
    {
      *(_DWORD *)(32 * (v28 + 16) + v32 + 28) = -1;
      v36 = qword_140383178[2 * *(unsigned __int8 *)(v32 - 12208)];
      if ( KiSerializeTimerExpiration )
        _interlockedbittestandreset64((volatile signed __int32 *)(v36 + 8 * (v28 >> 6)), v28 & 0x3F);
      else
        _interlockedbittestandreset64((volatile signed __int32 *)((v28 << 6) + v36), *(unsigned __int8 *)(v32 - 12207));
    }
    _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
    _InterlockedAnd(v26, 0xBFFFFF7F);
    v27 = 1;
LABEL_37:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v27 )
      {
LABEL_39:
        *(_BYTE *)(a1 + 481) = 4;
        *(_QWORD *)(a1 + 264) = a1 + 464;
        *(_QWORD *)(a1 + 272) = a1 + 464;
        goto LABEL_21;
      }
      v44 = a1 + 256;
      v46[0] = &v44;
      v46[1] = 8LL;
      EtwTraceKernelEvent((int)v46, 1, 0x40020000u, 0xF55u, 1538);
    }
    if ( v27 )
      goto LABEL_21;
    goto LABEL_39;
  }
LABEL_21:
  if ( v23 )
  {
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  __writecr8(v20);
  return v24;
}
