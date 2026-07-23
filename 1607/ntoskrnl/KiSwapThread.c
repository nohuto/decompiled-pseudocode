/*
 * XREFs of KiSwapThread @ 0x14005AD80
 * Callers:
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x1400CCAA4 (KiInSwapSingleProcess.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140098864 (KiRecomputeGroupSchedulingRank.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140098904 (KiChargeSchedulingGroupCycleTime.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140098EDC (KiResortScbQueue.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A53EC (KiCheckForEffectivePriorityChange.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400C7DD4 (KiInsertDeferredPreemptionApc.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 *     EtwTraceContextSwap @ 0x1400D4300 (EtwTraceContextSwap.c)
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KiEndCounterAccumulation @ 0x1401D6E50 (KiEndCounterAccumulation.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // r10
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned int v17; // esi
  char EffectivePriorityThread; // al
  unsigned __int8 v19; // bp
  char v20; // r14
  __int64 v21; // rdi
  volatile signed __int32 *v23; // rsi
  char v24; // r12
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  volatile signed __int32 *v27; // r15
  _QWORD *v28; // rcx
  __int64 v29; // r10
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD *i; // rcx
  int v34; // r14d
  char v35; // al
  char v36; // r8
  unsigned __int64 v37; // rax
  char v38; // al
  __int64 v39; // r8
  unsigned int v40; // ecx
  volatile signed __int32 *v41; // rax
  unsigned __int64 v42; // r8
  __int64 v43; // r11
  unsigned int CurrentFrequency; // kr00_4
  int v45; // [rsp+30h] [rbp-78h] BYREF
  int v46; // [rsp+34h] [rbp-74h] BYREF
  int v47; // [rsp+38h] [rbp-70h] BYREF
  int v48; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v52[2]; // [rsp+58h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a2 + 11400) )
    KiProcessThreadWaitList(a2, 1LL, 0LL, 2LL);
  KiAbProcessContextSwitch(a1, 0LL, a3, a4);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v7 = __rdtsc();
  v8 = v7 - *(_QWORD *)(a2 + 23352);
  v9 = v8 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v8;
  v10 = 0xFFFFFFFFLL;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  *(_QWORD *)(a2 + 23352) = v7;
  v11 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v9;
  if ( (v11 & 0x3E) != 0 )
  {
    if ( (v11 & 0x10) != 0 )
    {
      v10 = *(_QWORD *)(a2 + 23352) - *(_QWORD *)(a2 + 23360);
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 23368) += v10;
      v11 &= ~0x10u;
      *(_QWORD *)(a2 + 23360) = 0LL;
    }
    if ( (v11 & 0x3E) != 0 )
    {
      if ( (v11 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(a1 + 1960) )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(a2);
          v6 = 3LL;
          if ( CurrentFrequency / 0x19 < 3 )
            v6 = CurrentFrequency / 0x19;
          v10 = v43 + 8 * (*(unsigned __int8 *)(a2 + 23858) + 2 * v6);
          *(_QWORD *)v10 += v8;
        }
        v11 &= ~0x20u;
      }
      if ( (v11 & 0x3E) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 104);
        if ( v32 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a2 + 1624) + v32); i; i = (_QWORD *)i[51] )
            *i += v8;
        }
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 136LL);
          if ( (*(_QWORD *)(a1 + 576) & v10) != v10 )
            *(_QWORD *)(a2 + 23392) += v8;
        }
        if ( *(_QWORD *)(a1 + 360) )
          KiEndCounterAccumulation(a1, v10, v6, v8);
      }
    }
  }
  _enable();
  v12 = *(_DWORD *)(a1 + 80) >> 1;
  v13 = *(_DWORD *)(a1 + 84) >> 1;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v13 + v12;
  v45 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v45);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v14 = *(_QWORD *)(a1 + 104);
  v50 = v14;
  v15 = v14;
  if ( v14 )
    v14 += *(unsigned int *)(a2 + 1624);
  if ( v14 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = *(_BYTE *)(v14 + 112);
      if ( (v35 & 4) != 0 )
      {
        if ( (v35 & 0x12) != 0 || !(unsigned __int8)KiChargeSchedulingGroupCycleTime(v15, v14) )
        {
          if ( *(_QWORD *)v14 >= *(_QWORD *)(v14 + 24) && (*(_BYTE *)(v14 + 112) & 2) == 0 )
            KiRecomputeGroupSchedulingRank(v15, v14, a2);
        }
        else
        {
          *(_BYTE *)(v14 + 112) |= 2u;
          if ( (*(_BYTE *)(v14 + 112) & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a2, v14, 1LL);
        }
      }
      else
      {
        if ( (v35 & 0x12) != 0 || !(unsigned __int8)KiChargeSchedulingGroupCycleTime(v15, v14) )
        {
          v36 = 0;
        }
        else
        {
          *(_BYTE *)(v14 + 112) |= 2u;
          v36 = 1;
        }
        v37 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)(v14 + 112) & 0x10) != 0 && *(_QWORD *)v14 >= v37
          || (*(_BYTE *)(v14 + 112) & 0x10) == 0 && (v36 || v37 != *(_QWORD *)(v14 + 16) && *(_QWORD *)v14 >= v37) )
        {
          v39 = *(unsigned int *)(v15 + 8);
          v40 = *(_QWORD *)(v14 + 32) / ((unsigned __int64)(KiCycleDivisorLongTerm * v39) >> 7) + 1;
          v41 = *(volatile signed __int32 **)(v14 + 120);
          *(_DWORD *)(v14 + 116) = v40;
          if ( v41 )
            _InterlockedExchangeAdd(v41, v40);
          v42 = KiCycleDivisorShortTerm * v39;
          *(_BYTE *)(v14 + 112) |= 4u;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v14 + 8) + (v42 >> 7);
          KiCheckForEffectivePriorityChange(a2, v14);
        }
        v38 = *(_BYTE *)(v14 + 112);
        if ( (v38 & 1) != 0 )
        {
          if ( (v38 & 2) != 0 )
            KiRemoveSchedulingGroupQueue(a2, v14, 1LL);
          else
            KiResortScbQueue(a2, v14, 1LL);
        }
        if ( (*(_BYTE *)(v14 + 112) & 4) != 0 && !*(_BYTE *)(a2 + 23321) )
        {
          _InterlockedOr64(
            &qword_1402F6C18[(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6],
            1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
          *(_BYTE *)(a2 + 23321) = 1;
        }
      }
      v34 += *(_DWORD *)(v14 + 116);
      v14 = *(_QWORD *)(v14 + 408);
      if ( !v14 )
        break;
      v15 = v14 - *(unsigned int *)(a2 + 1624);
      v50 = v15;
    }
  }
  v16 = KiSearchForNewThread(a2, 0LL);
  if ( !v16 )
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
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
    if ( *(_BYTE *)(v16 + 388) == 1 )
      *(_DWORD *)(v16 + 2008) = *(_DWORD *)(v16 + 2008) - *(_DWORD *)(v16 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v16 + 388) = 2;
  }
  if ( v16 != *(_QWORD *)(a2 + 24) && v16 != a1 && *(_BYTE *)(v16 + 113) )
  {
    KiUpdateThreadState(a2, v16, 3LL, 1LL);
    v16 = *(_QWORD *)(a2 + 24);
    KiUpdateThreadState(a2, v16, 2LL, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v19 = *(_BYTE *)(a1 + 390);
  if ( a1 == v16 )
  {
    v20 = *(_BYTE *)(v16 + 193) && !*(_WORD *)(v16 + 486) && !v19;
    _disable();
    KiStartThreadCycleAccumulation(a2, v16, 0LL);
    _enable();
    if ( (*(_DWORD *)(v16 + 120) & 0x400) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v16 + 120), 0xAu);
      KiInsertDeferredPreemptionApc(a2, v16, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v20 = KiSwapContext(a1, v16, v19);
  }
  v21 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    v23 = (volatile signed __int32 *)(a1 + 256);
    v24 = 0;
    while ( 1 )
    {
      v46 = 0;
      while ( _interlockedbittestandset(v23, 7u) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( (*v23 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(a1 + 259) & 0xC0) == 0 )
      {
        _InterlockedAnd(v23, 0xFFFFFF7F);
        goto LABEL_38;
      }
      v25 = *(unsigned __int8 *)(a1 + 258);
      v26 = *(unsigned int *)(a1 + 312);
      v47 = 0;
      v49 = KiProcessorBlock[v26] + 13824;
      v27 = (volatile signed __int32 *)(v49 + 32 * (v25 + 16));
      while ( _interlockedbittestandset64(v27, 0LL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(_QWORD *)v27 );
      }
      if ( *(char *)(a1 + 259) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v49 + 8LL * (*(_BYTE *)(a1 + 259) & 0x3F)), 0LL) )
      {
        _InterlockedAnd(v23, 0xFFFF7Fu);
        v24 = 1;
        goto LABEL_38;
      }
      _InterlockedAnd(v23, 0xFFFFFF7F);
      v48 = 0;
      while ( *(char *)(a1 + 259) < 0 )
        KeYieldProcessorEx(&v48);
    }
    v28 = *(_QWORD **)(a1 + 288);
    v29 = v49;
    v30 = *(_QWORD **)(a1 + 296);
    if ( v28[1] != a1 + 288 || *v30 != a1 + 288 )
      __fastfail(3u);
    *v30 = v28;
    v28[1] = v30;
    if ( v30 == v28 )
    {
      *(_DWORD *)(32 * (v25 + 16) + v29 + 28) = -1;
      v31 = qword_1403AB288[2 * *(unsigned __int8 *)(v29 - 12208)];
      if ( KiSerializeTimerExpiration )
        _interlockedbittestandreset64((volatile signed __int32 *)(v31 + 8 * (v25 >> 6)), v25 & 0x3F);
      else
        _interlockedbittestandreset64((volatile signed __int32 *)((v25 << 6) + v31), *(unsigned __int8 *)(v29 - 12207));
    }
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
    _InterlockedAnd(v23, 0xBFFFFF7F);
    v24 = 1;
LABEL_38:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v24 )
      {
LABEL_40:
        *(_BYTE *)(a1 + 481) = 4;
        *(_QWORD *)(a1 + 264) = a1 + 464;
        *(_QWORD *)(a1 + 272) = a1 + 464;
        goto LABEL_25;
      }
      v51 = a1 + 256;
      v52[0] = &v51;
      v52[1] = 8LL;
      EtwTraceKernelEvent((int)v52, 1, 0x40020000u, 3925, 1538);
    }
    if ( v24 )
      goto LABEL_25;
    goto LABEL_40;
  }
LABEL_25:
  if ( v20 )
  {
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  __writecr8(v19);
  return v21;
}
