/*
 * XREFs of KiSwapThread @ 0x1400A0810
 * Callers:
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x14010C694 (KiInSwapSingleProcess.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14000C7EC (KiInsertDeferredPreemptionApc.c)
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwTraceContextSwap @ 0x140017470 (EtwTraceContextSwap.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // rcx
  char v7; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *i; // rcx
  int v13; // ecx
  unsigned int v14; // edi
  __int64 v15; // rdi
  __int64 v16; // rcx
  char v17; // dl
  unsigned __int64 j; // rcx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  int v21; // eax
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // dx
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 v28; // rax
  _RTL_RB_TREE *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rsi
  __int64 v32; // rax
  _RTL_RB_TREE *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int8 v42; // r13
  char v43; // r12
  unsigned __int64 v44; // r9
  unsigned int v45; // eax
  __int64 v46; // r10
  __int64 v47; // rcx
  __int64 *v48; // rdx
  bool v49; // zf
  __int64 v50; // rbx
  __int64 v51; // rdi
  char v52; // r15
  unsigned int v53; // ebx
  unsigned __int64 v54; // r14
  __int64 v55; // rbp
  volatile signed __int32 *v56; // rsi
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  _QWORD *v59; // r8
  _QWORD *v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int v63; // r14d
  volatile signed __int32 *v64; // rdx
  __int64 v66; // [rsp+38h] [rbp-80h]
  __int64 v68; // [rsp+50h] [rbp-68h] BYREF
  int v69; // [rsp+58h] [rbp-60h]
  _QWORD v70[2]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a1;
  if ( *(_QWORD *)(a2 + 11400) )
    KiProcessThreadWaitList(a2, 1LL, 0LL, 2LL);
  KiAbProcessContextSwitch(v3, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v4 = __rdtsc();
  v5 = v4 - *(_QWORD *)(a2 + 23352);
  v6 = v5 + *(unsigned int *)(v3 + 80);
  *(_QWORD *)(v3 + 72) += v5;
  *(_QWORD *)(a2 + 23352) = v4;
  v7 = *(_BYTE *)(v3 + 2);
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  *(_DWORD *)(v3 + 80) = v6;
  if ( (v7 & 0x3E) != 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(v3 + 124) + 23368) += *(_QWORD *)(a2 + 23352)
                                                                      - *(_QWORD *)(a2 + 23360);
      v7 &= ~0x10u;
      *(_QWORD *)(a2 + 23360) = 0LL;
    }
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v3 + 1952) )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(a2);
          v10 = 3LL;
          if ( CurrentFrequency / 0x19 < 3 )
            v10 = CurrentFrequency / 0x19;
          *(_QWORD *)(v9 + 8 * (*(unsigned __int8 *)(a2 + 23858) + 2 * v10)) += v5;
        }
        v7 &= ~0x20u;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v11 = *(_QWORD *)(v3 + 104);
        if ( v11 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a2 + 1624) + v11); i; i = (_QWORD *)i[49] )
            *i += v5;
        }
        if ( (*(_BYTE *)(v3 + 2) & 8) != 0
          && (*(_QWORD *)(v3 + 576) & *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a2 + 1600)
                                                                                                + 136LL) )
        {
          *(_QWORD *)(a2 + 23392) += v5;
        }
        if ( *(_QWORD *)(v3 + 360) )
          KiEndCounterAccumulation(v3);
      }
    }
  }
  _enable();
  v13 = (*(_DWORD *)(v3 + 84) >> 1) + (*(_DWORD *)(v3 + 80) >> 1);
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 84) = v13;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    while ( *(_QWORD *)(a2 + 48) );
  }
  v15 = *(_QWORD *)(v3 + 104);
  v16 = v15;
  if ( v15 )
    v15 += *(unsigned int *)(a2 + 1624);
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = *(_BYTE *)(v15 + 112);
      if ( (v17 & 4) != 0 )
      {
        if ( (v17 & 0x12) != 0 || *(_QWORD *)v15 <= *(_QWORD *)(v15 + 16) )
        {
          if ( *(_QWORD *)v15 > *(_QWORD *)(v15 + 24) )
            KiRecomputeGroupSchedulingRank(v16, v15, a2);
        }
        else
        {
          *(_BYTE *)(v15 + 112) = v17 | 2;
          if ( *(__int64 *)(v16 + 32) > 0 )
            KiChargeSchedulingGroupCycleTime(v16, v15);
          if ( (*(_BYTE *)(v15 + 112) & 1) != 0 )
          {
            v30 = v15;
            do
            {
              v31 = (__int64 *)(v30 + 392);
              v32 = *(_QWORD *)(v30 + 392);
              v33 = (_RTL_RB_TREE *)(v32 + 376);
              if ( !v32 )
                v33 = (_RTL_RB_TREE *)(a2 + 22768);
              *(_QWORD *)(v30 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v30 + 64);
              *(_BYTE *)(v30 + 112) &= ~1u;
              RtlRbRemoveNode(v33, (PRTL_BALANCED_NODE)(v30 + 88));
              v30 = *v31;
            }
            while ( *v31 && (*(_BYTE *)(v30 + 112) & 1) != 0 && !*(_QWORD *)(v30 + 376) && !*(_WORD *)(v30 + 114) );
          }
        }
      }
      else
      {
        if ( *(_QWORD *)v15 >= *(_QWORD *)(v15 + 8) )
        {
          KiComputeGroupSchedulingRank(v16, a2, v15);
          goto LABEL_80;
        }
        if ( (v17 & 1) != 0 )
        {
          j = *(_QWORD *)(v15 + 96);
          v19 = v15 + 88;
          if ( j )
          {
            v20 = *(_QWORD **)j;
            if ( *(_QWORD *)j )
            {
              do
              {
                j = (unsigned __int64)v20;
                v20 = (_QWORD *)*v20;
              }
              while ( v20 );
            }
          }
          else
          {
            for ( j = *(_QWORD *)(v15 + 104) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v19 )
                break;
              v19 = j;
            }
          }
          if ( j )
          {
            v21 = *(_DWORD *)(v15 + 116) - *(_DWORD *)(j + 28);
            if ( v21 )
            {
LABEL_52:
              if ( v21 <= 0 )
                goto LABEL_80;
            }
            else
            {
              v22 = *(_WORD *)(v15 + 114);
              if ( v22 )
              {
                v23 = *(_WORD *)(j + 26);
                _BitScanReverse((unsigned int *)&v24, v22);
                v25 = 0;
                v69 = v24;
                if ( v23 )
                  _BitScanReverse((unsigned int *)&v25, v23);
                v21 = v25 - v24;
                goto LABEL_52;
              }
              if ( !*(_DWORD *)(v15 + 116) && *(_QWORD *)v15 <= *(_QWORD *)(j - 88) )
                goto LABEL_80;
            }
            v26 = v15;
            do
            {
              v27 = (__int64 *)(v26 + 392);
              v28 = *(_QWORD *)(v26 + 392);
              if ( v28 )
                v29 = (_RTL_RB_TREE *)(v28 + 376);
              else
                v29 = (_RTL_RB_TREE *)(a2 + 22768);
              *(_BYTE *)(v26 + 112) &= ~1u;
              RtlRbRemoveNode(v29, (PRTL_BALANCED_NODE)(v26 + 88));
              v26 = *v27;
            }
            while ( *v27 && (*(_BYTE *)(v26 + 112) & 1) != 0 && !*(_QWORD *)(v26 + 376) && !*(_WORD *)(v26 + 114) );
            KiInsertSchedulingGroupQueue(a2, v15, 0LL);
          }
        }
      }
LABEL_80:
      v15 = *(_QWORD *)(v15 + 392);
      if ( !v15 )
      {
        v3 = a1;
        break;
      }
      v16 = v15 - *(unsigned int *)(a2 + 1624);
    }
  }
  v35 = KiSearchForNewThread(a2, 0LL);
  if ( !v35 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      do
      {
        LODWORD(v35) = v35 + 1;
        if ( ((unsigned int)v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait((unsigned int)v35);
      }
      while ( *(_QWORD *)(a2 + 48) );
    }
    v35 = *(_QWORD *)(a2 + 16);
    if ( v35 )
      *(_QWORD *)(a2 + 16) = 0LL;
    else
      v35 = *(_QWORD *)(a2 + 24);
    if ( (*(_BYTE *)(v35 + 2) & 4) != 0 )
    {
      if ( *(char *)(v35 + 195) >= 16
        || !*(_QWORD *)(v35 + 104)
        || (v36 = *(_QWORD *)(v35 + 104)) == 0
        || (v37 = *(unsigned int *)(a2 + 1624) + v36) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v35, v37, 0LL),
            v34 = 1LL,
            !ThreadEffectiveRankNonZero) )
      {
        v34 = (unsigned int)*(char *)(v35 + 195);
      }
    }
    else
    {
      v34 = *(unsigned __int8 *)(v35 + 195);
    }
    **(_BYTE **)(a2 + 56) = v34;
    *(_QWORD *)(a2 + 8) = v35;
    *(_BYTE *)(v35 + 388) = 2;
  }
  if ( v35 != *(_QWORD *)(a2 + 24) && v35 != v3 && *(_BYTE *)(v35 + 113) )
  {
    if ( (*(_BYTE *)(v35 + 2) & 4) != 0 )
    {
      if ( *(char *)(v35 + 195) >= 16
        || !*(_QWORD *)(v35 + 104)
        || (v39 = *(_QWORD *)(v35 + 104)) == 0
        || (v40 = *(unsigned int *)(a2 + 1624) + v39) == 0
        || (v41 = KiGetThreadEffectiveRankNonZero(v35, v40, 0LL), v34 = 1LL, !v41) )
      {
        v34 = (unsigned int)*(char *)(v35 + 195);
      }
    }
    else
    {
      v34 = *(unsigned __int8 *)(v35 + 195);
    }
    **(_BYTE **)(a2 + 56) = v34;
    *(_QWORD *)(a2 + 16) = v35;
    *(_BYTE *)(v35 + 388) = 3;
    v35 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v35;
    *(_BYTE *)(v35 + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v42 = *(_BYTE *)(v3 + 390);
  if ( v3 == v35 )
  {
    v43 = *(_BYTE *)(v35 + 193) && !*(_WORD *)(v35 + 486) && !v42;
    _disable();
    v44 = __rdtsc();
    *(_QWORD *)(a2 + 23544) += v44 - *(_QWORD *)(a2 + 23352);
    if ( (*(_BYTE *)(v35 + 2) & 0x20) != 0 )
    {
      v45 = PpmPerfGetCurrentFrequency(a2);
      v47 = 3LL;
      if ( v45 / 0x19 < 3 )
        v47 = v45 / 0x19;
      v48 = (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(a2 + 23858) + 2944LL + 2 * v47));
      v34 = v46 + *v48;
      *v48 = v34;
    }
    *(_QWORD *)(a2 + 23352) = v44;
    if ( (*(_BYTE *)(v35 + 2) & 0x10) != 0 )
      *(_QWORD *)(a2 + 23360) = v44;
    if ( (*(_BYTE *)(v35 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v35, 0LL);
    v49 = *(_BYTE *)(a2 + 6) == 0;
    *(_BYTE *)(a2 + 32) = 0;
    if ( !v49 )
    {
      LOBYTE(v34) = 2;
      *(_BYTE *)(a2 + 6) = 0;
      HalRequestSoftwareInterrupt(v34);
    }
    _enable();
    if ( (*(_DWORD *)(v35 + 120) & 0x400) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v35 + 120), 0xAu);
      KiInsertDeferredPreemptionApc(a2, v35, 0);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(v3, v3);
  }
  else
  {
    v43 = KiSwapContext(v3, v35, v42);
  }
  v50 = *(_QWORD *)(v3 + 200);
  v66 = v50;
  if ( _bittestandreset((signed __int32 *)(v3 + 116), 9u) )
  {
    v51 = v3 + 256;
    v52 = 0;
    while ( 1 )
    {
      v53 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v51, 7u) )
      {
        do
        {
          if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v53);
        }
        while ( (*(_DWORD *)v51 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v51, 7u) );
      }
      if ( (*(_BYTE *)(v51 + 3) & 0xC0) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v51, 0xFFFFFF7F);
        goto LABEL_174;
      }
      v54 = *(unsigned __int8 *)(v51 + 2);
      v55 = KiProcessorBlock[*(unsigned int *)(v51 + 56)] + 13824;
      v56 = (volatile signed __int32 *)(v55 + 32 * (v54 + 16));
      v57 = 0;
      while ( _interlockedbittestandset64(v56, 0LL) )
      {
        do
        {
          if ( (++v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v57);
        }
        while ( *(_QWORD *)v56 );
      }
      if ( *(char *)(v51 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v56, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v55 + 8LL * (*(_BYTE *)(v51 + 3) & 0x3F)), 0LL) )
      {
        _InterlockedAnd((volatile signed __int32 *)v51, 0xFFFF7Fu);
        v52 = 1;
        goto LABEL_174;
      }
      _InterlockedAnd((volatile signed __int32 *)v51, 0xFFFFFF7F);
      v58 = 0;
      while ( *(char *)(v51 + 3) < 0 )
      {
        if ( (++v58 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v58);
      }
    }
    v59 = *(_QWORD **)(v51 + 32);
    v60 = *(_QWORD **)(v51 + 40);
    v61 = v54;
    if ( v59[1] != v51 + 32 || *v60 != v51 + 32 )
      __fastfail(3u);
    *v60 = v59;
    v59[1] = v60;
    if ( v60 == v59 )
    {
      *(_DWORD *)(32 * (v54 + 16) + v55 + 28) = -1;
      v62 = qword_1403D2238[2 * *(unsigned __int8 *)(v55 - 12208)];
      if ( KiSerializeTimerExpiration )
      {
        v63 = v54 & 0x3F;
        v64 = (volatile signed __int32 *)(v62 + 8 * (v61 >> 6));
      }
      else
      {
        v63 = *(unsigned __int8 *)(v55 - 12207);
        v64 = (volatile signed __int32 *)((v61 << 6) + v62);
      }
      _interlockedbittestandreset64(v64, v63);
    }
    _InterlockedAnd64((volatile signed __int64 *)v56, 0LL);
    _InterlockedAnd((volatile signed __int32 *)v51, 0xBFFFFF7F);
    v52 = 1;
LABEL_174:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v52 )
        goto LABEL_178;
      v68 = v51;
      v70[0] = &v68;
      v70[1] = 8LL;
      EtwTraceKernelEvent((int)v70, 1, 0x40020000u, 0xF55u, 1538);
    }
    if ( v52 )
    {
LABEL_179:
      v50 = v66;
      goto LABEL_180;
    }
LABEL_178:
    *(_BYTE *)(a1 + 481) = 4;
    *(_QWORD *)(a1 + 264) = a1 + 464;
    *(_QWORD *)(a1 + 272) = a1 + 464;
    goto LABEL_179;
  }
LABEL_180:
  if ( v43 )
  {
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
  }
  __writecr8(v42);
  return v50;
}
