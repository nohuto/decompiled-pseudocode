/*
 * XREFs of KiDirectSwitchThread @ 0x1400EBC80
 * Callers:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1400EC79C (KiScheduleNextForegroundBoost.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rsi
  __int64 *v5; // rax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int8 v15; // r8
  char v16; // r10
  unsigned __int8 v17; // dl
  unsigned int v18; // r11d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 *v23; // r14
  __int64 *v24; // rbp
  volatile signed __int32 *v25; // rdi
  unsigned int v26; // ebx
  __int64 *v27; // rcx
  __int64 **v28; // rax
  bool v29; // di
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r10
  __int64 v33; // r13
  unsigned __int64 v34; // rcx
  char v35; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *i; // rcx
  unsigned __int64 v41; // r9
  __int64 v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // r10
  _QWORD *v45; // rdx
  bool v46; // zf
  unsigned __int64 v47; // r14
  unsigned int v48; // ebx
  unsigned __int64 v49; // r12
  bool v50; // di
  char v51; // di
  unsigned int v52; // eax
  char v53; // r8
  unsigned __int8 v54; // dl
  char v55; // al
  unsigned int v56; // eax
  int v57; // edx
  char v58; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v60; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char v62; // dl
  int v63; // r10d
  int v64; // ebx
  int v65; // r9d
  char v66; // cl
  struct _KPRCB *v67; // rcx
  struct _SINGLE_LIST_ENTRY *v68; // rdx
  _SINGLE_LIST_ENTRY *v69; // r8
  int v70; // ebp
  unsigned int v71; // ebx
  int v72; // ebx
  unsigned int v73; // edx
  unsigned int v74; // ecx
  unsigned __int64 v75; // rax
  struct _KPRCB *v76; // rcx
  struct _SINGLE_LIST_ENTRY *v77; // rdx
  _SINGLE_LIST_ENTRY *v78; // r8
  unsigned int v79; // ecx
  __int64 v80; // rax
  unsigned int v81; // r8d
  char v82; // cl
  __int64 v83; // rdx
  __int64 v84; // rdx
  int v85; // eax
  char v86; // r8
  unsigned __int64 v87; // rcx
  unsigned int ThreadEffectiveRankNonZero; // [rsp+20h] [rbp-68h]
  char v90; // [rsp+24h] [rbp-64h]
  __int64 v91; // [rsp+30h] [rbp-58h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  bool v93; // [rsp+90h] [rbp+8h]
  char v95; // [rsp+A0h] [rbp+18h]
  unsigned int v96; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 11400) - 216LL;
  v5 = *(__int64 **)(a1 + 11400);
  v6 = *v5;
  *(_QWORD *)(a1 + 11400) = *v5;
  if ( *(_QWORD *)(a1 + 16) || (v7 = *(_DWORD *)(v3 + 120), (v7 & 0x10000) == 0) || (v7 & 0x40000) != 0 )
  {
    *v5 = v6;
    *(_QWORD *)(a1 + 11400) = v5;
    return 0;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v3, 1LL, a2, 1LL);
  v8 = *(_QWORD *)(v3 + 104);
  v9 = *(_QWORD *)(a1 + 8);
  v92 = v9;
  v91 = v8;
  if ( v8 )
  {
    v8 += *(unsigned int *)(a1 + 1624);
    v91 = v8;
  }
  ThreadEffectiveRankNonZero = 0;
  v96 = 0;
  if ( !v8 )
    goto LABEL_36;
  ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v3, v8, 1LL);
  if ( !ThreadEffectiveRankNonZero )
    goto LABEL_36;
  v11 = *(_QWORD *)(v9 + 104);
  if ( !v11 )
    goto LABEL_36;
  v12 = *(unsigned int *)(a1 + 1624) + v11;
  if ( !v12 )
    goto LABEL_36;
  v96 = KiGetThreadEffectiveRankNonZero(v9, v12, v10);
  if ( !v96 )
    goto LABEL_36;
  v14 = v8;
  if ( v8 == v13 )
  {
    ThreadEffectiveRankNonZero = *(_DWORD *)(v8 + 116);
    v96 = ThreadEffectiveRankNonZero;
    goto LABEL_36;
  }
  v15 = *(_BYTE *)(v8 + 113);
  v16 = 0;
  v17 = *(_BYTE *)(v13 + 113);
  v18 = 0;
  v96 = 0;
  if ( v15 > v17 )
  {
    v16 = 1;
    do
    {
      if ( *(_DWORD *)(v14 + 116) > v18 )
        v18 = *(_DWORD *)(v14 + 116);
      v14 = *(_QWORD *)(v14 + 392);
    }
    while ( *(_BYTE *)(v14 + 113) > v17 );
LABEL_26:
    v96 = v18;
    goto LABEL_27;
  }
  if ( v15 < v17 )
  {
    v16 = -1;
    do
    {
      if ( *(_DWORD *)(v13 + 116) > v18 )
        v18 = *(_DWORD *)(v13 + 116);
      v13 = *(_QWORD *)(v13 + 392);
    }
    while ( v15 < *(_BYTE *)(v13 + 113) );
    goto LABEL_26;
  }
LABEL_27:
  if ( v14 == v13 )
  {
    if ( v16 )
    {
      if ( v16 <= 0 )
      {
        ThreadEffectiveRankNonZero = 0;
      }
      else
      {
        ThreadEffectiveRankNonZero = v18;
        v96 = 0;
      }
      goto LABEL_36;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v14 + 392);
    v20 = *(_QWORD *)(v13 + 392);
    if ( v19 != v20 )
    {
      do
      {
        v21 = v19;
        v22 = v20;
        v19 = *(_QWORD *)(v19 + 392);
        v20 = *(_QWORD *)(v20 + 392);
      }
      while ( v19 != v20 );
      ThreadEffectiveRankNonZero = *(_DWORD *)(v21 + 116);
      v96 = *(_DWORD *)(v22 + 116);
      goto LABEL_36;
    }
  }
  ThreadEffectiveRankNonZero = *(_DWORD *)(v14 + 116);
  v96 = *(_DWORD *)(v13 + 116);
LABEL_36:
  v23 = *(__int64 **)(v3 + 208);
  v95 = 0;
  v90 = 1;
  v24 = &v23[6 * *(unsigned __int8 *)(v3 + 587)];
  do
  {
    if ( *((unsigned __int8 *)v23 + 17) < 5u )
    {
      v25 = (volatile signed __int32 *)v23[4];
      v26 = 0;
      if ( _interlockedbittestandset(v25, 7u) )
      {
        do
        {
          if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v26);
        }
        while ( (*v25 & 0x80u) != 0 || _interlockedbittestandset(v25, 7u) );
      }
      if ( *((_BYTE *)v23 + 17) == 4 )
      {
        v27 = (__int64 *)*v23;
        v28 = (__int64 **)v23[1];
        if ( *(__int64 **)(*v23 + 8) != v23 || *v28 != v23 )
          __fastfail(3u);
        *v28 = v27;
        v27[1] = (__int64)v28;
      }
      _InterlockedAnd(v25, 0xFFFFFF7F);
    }
    v23 += 6;
  }
  while ( v23 != v24 );
  v29 = *(_QWORD *)(a1 + 11400) == 0LL;
  v93 = v29;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v30 = __rdtsc();
  v31 = 3LL;
  v32 = v30 - *(_QWORD *)(a1 + 23352);
  v33 = v32 + *(_QWORD *)(v9 + 72);
  v34 = v32 + *(unsigned int *)(v9 + 80);
  *(_QWORD *)(v9 + 72) = v33;
  *(_QWORD *)(a1 + 23352) = v30;
  v35 = *(_BYTE *)(v9 + 2);
  if ( v34 > 0xFFFFFFFF )
    LODWORD(v34) = -1;
  *(_DWORD *)(v9 + 80) = v34;
  if ( (v35 & 0x3E) != 0 )
  {
    if ( (v35 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v9 + 124) + 23368) += *(_QWORD *)(a1 + 23352)
                                                                      - *(_QWORD *)(a1 + 23360);
      v35 &= ~0x10u;
      *(_QWORD *)(a1 + 23360) = 0LL;
    }
    if ( (v35 & 0x3E) != 0 )
    {
      if ( (v35 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v9 + 1952) )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
          v38 = 3LL;
          if ( CurrentFrequency / 0x19 < 3 )
            v38 = CurrentFrequency / 0x19;
          *(_QWORD *)(v37 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v38)) += v32;
        }
        v35 &= ~0x20u;
      }
      if ( (v35 & 0x3E) != 0 )
      {
        v39 = *(_QWORD *)(v9 + 104);
        if ( v39 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 1624) + v39); i; i = (_QWORD *)i[49] )
            *i += v32;
        }
        if ( (*(_BYTE *)(v9 + 2) & 8) != 0
          && (*(_QWORD *)(v9 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 1600)
                                                                                                + 136LL) )
        {
          *(_QWORD *)(a1 + 23392) += v32;
        }
        if ( *(_QWORD *)(v9 + 360) )
          KiEndCounterAccumulation(v9);
      }
    }
  }
  v41 = __rdtsc();
  *(_QWORD *)(a1 + 23544) += v41 - *(_QWORD *)(a1 + 23352);
  v42 = *(unsigned __int8 *)(v9 + 2);
  if ( (v42 & 0x20) != 0 )
  {
    v43 = (unsigned int)PpmPerfGetCurrentFrequency(a1) / 0x19;
    if ( v43 < 3 )
      v31 = v43;
    v45 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v31));
    v42 = v44 + *v45;
    *v45 = v42;
  }
  *(_QWORD *)(a1 + 23352) = v41;
  if ( (*(_BYTE *)(v9 + 2) & 0x10) != 0 )
    *(_QWORD *)(a1 + 23360) = v41;
  if ( (*(_BYTE *)(v9 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v9, 0LL);
  v46 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v46 )
  {
    LOBYTE(v42) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v42);
  }
  _enable();
  v47 = *(_QWORD *)(v9 + 32);
  v48 = 0;
  v49 = *(_QWORD *)(v3 + 72);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v48);
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 1616) != *(_WORD *)(v3 + 584)
    || (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(v3 + 576)) == 0LL )
  {
    goto LABEL_195;
  }
  v90 = 0;
  if ( *(char *)(v3 + 195) < 16 )
  {
    v51 = 0;
    v52 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v3 + 436);
    if ( v49 >= *(_QWORD *)(v3 + 32) )
    {
      v51 = 4;
      if ( v52 < 2 )
        v51 = 5;
    }
    if ( (v51 & 4) != 0 || *(char *)(v3 + 563) >= 14 || !*(_BYTE *)(v3 + 564) && v52 >= 2 )
    {
      v53 = *(_BYTE *)(v3 + 195);
      v51 |= 8u;
      if ( v53 < 16 )
      {
        v54 = *(_BYTE *)(v3 + 564);
        v55 = -1 - (v54 >> 4) - (v54 & 0xF) + v53;
        if ( v55 < *(char *)(v3 + 563) )
          v55 = *(_BYTE *)(v3 + 563);
        v53 = v55;
        if ( v54 )
        {
          if ( (v54 & 0xF) != 0 )
            *(_DWORD *)(v3 + 1420) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v3 + 564) = 0;
        }
        v56 = *(_DWORD *)(v3 + 1408);
        if ( v56 )
        {
          _BitScanReverse((unsigned int *)&v57, v56);
          if ( v53 < v57 )
            v53 = v57;
        }
      }
      v58 = v53;
      if ( KiAbEnabled )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v53 > *(char *)(v3 + 195) )
        {
          if ( *(_BYTE *)(v3 + 793) )
          {
            v60 = (struct _SINGLE_LIST_ENTRY *)(v3 + 1376);
            if ( *(_QWORD *)(v3 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
              if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
              {
                v60->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = v60;
                _InterlockedIncrement16((volatile signed __int16 *)(v3 + 1416));
                KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
              }
            }
          }
        }
      }
      *(_BYTE *)(v3 + 195) = v58;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 544) + 1490LL) == 2 )
      v51 |= 2u;
    if ( (v51 & 1) != 0
      || (*(_DWORD *)(v3 + 120) & 2) != 0
      || (v62 = *(_BYTE *)(v3 + 564)) != 0 && ((v62 & 0xF0) != 0 || (v51 & 2) == 0) )
    {
      if ( (v51 & 6) == 6 && (*(_DWORD *)(v3 + 120) & 2) == 0 )
        KiScheduleNextForegroundBoost(v3);
    }
    else
    {
      v63 = *(char *)(v3 + 563);
      v64 = v63 + (char)a2;
      if ( (v51 & 2) != 0 )
        v64 += (char)PsPrioritySeparation;
      if ( v64 >= 16 )
        v64 = 15;
      v65 = *(char *)(v3 + 195);
      if ( v64 > v65 )
      {
        v66 = 0;
        if ( v64 > v63 + (char)a2 )
          v66 = v64 - v63 - a2;
        v46 = KiAbEnabled == 0;
        *(_BYTE *)(v3 + 564) = v62 ^ (v66 ^ v62) & 0xF;
        if ( !v46 )
        {
          v67 = KeGetCurrentPrcb();
          if ( (char)v64 > (char)v65 )
          {
            if ( *(_BYTE *)(v3 + 793) )
            {
              v68 = (struct _SINGLE_LIST_ENTRY *)(v3 + 1376);
              if ( *(_QWORD *)(v3 + 1376) == 1LL )
              {
                v69 = &v67->AbPropagateBoostsList;
                if ( v67 != (struct _KPRCB *)-25656LL )
                {
                  v68->Next = v69->Next;
                  v69->Next = v68;
                  _InterlockedIncrement16((volatile signed __int16 *)(v3 + 1416));
                  KiAbQueueAutoBoostDpc((__int64)v67);
                }
              }
            }
          }
        }
        *(_BYTE *)(v3 + 195) = v64;
      }
    }
    v50 = (v51 & 8) != 0;
  }
  else
  {
    v50 = 1;
  }
  v70 = *(char *)(v3 + 195);
  v71 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
    {
      if ( (++v71 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v71);
    }
    while ( *(_QWORD *)(a1 + 48) );
  }
  v72 = *(char *)(v92 + 195);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( ThreadEffectiveRankNonZero <= v96 && (ThreadEffectiveRankNonZero != v96 || v70 > v72) )
    {
      *(_BYTE *)(v92 + 565) = 1;
LABEL_181:
      *(_BYTE *)(v3 + 565) = 0;
      *(_DWORD *)(v3 + 536) = *(_DWORD *)(a1 + 36);
      v95 = 1;
      if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
      {
        if ( *(char *)(v3 + 195) >= 16
          || !*(_QWORD *)(v3 + 104)
          || (v83 = *(_QWORD *)(v3 + 104)) == 0
          || (v84 = *(unsigned int *)(a1 + 1624) + v83) == 0
          || (v85 = KiGetThreadEffectiveRankNonZero(v3, v84, 0LL), v82 = v86 + 1, !v85) )
        {
          v82 = *(_BYTE *)(v3 + 195);
        }
      }
      else
      {
        v82 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v82;
      *(_QWORD *)(a1 + 16) = v3;
      *(_BYTE *)(v3 + 388) = 3;
      goto LABEL_190;
    }
    v73 = 1 << v70;
    v74 = *(_DWORD *)(*(_QWORD *)(a1 + 24776) + 8LL) | *(_DWORD *)(a1 + 22680);
    if ( (unsigned __int64)(unsigned int)KiDirectQuantumTarget + v33 <= v47 && !ThreadEffectiveRankNonZero )
    {
      if ( v72 >= 16 )
      {
        v72 = 15;
        if ( v70 >= 16 )
          v72 = v70;
      }
      if ( (v74 & v73) != 0 )
      {
        v75 = (unsigned int)KiDirectQuantumTarget + v49;
        v33 = v47 - (unsigned int)KiDirectQuantumTarget;
      }
      else
      {
        v75 = v47 + v49 - v33;
      }
      _interlockedbittestandset((volatile signed __int32 *)(v3 + 120), 4u);
      v50 = 0;
      *(_QWORD *)(v3 + 32) = v75;
      *(_QWORD *)(v92 + 32) = v33;
      if ( v70 != v72 )
      {
        if ( KiAbEnabled )
        {
          v76 = KeGetCurrentPrcb();
          if ( (char)v72 > *(char *)(v3 + 195) )
          {
            if ( *(_BYTE *)(v3 + 793) )
            {
              v77 = (struct _SINGLE_LIST_ENTRY *)(v3 + 1376);
              if ( *(_QWORD *)(v3 + 1376) == 1LL )
              {
                v78 = &v76->AbPropagateBoostsList;
                if ( v76 != (struct _KPRCB *)-25656LL )
                {
                  v77->Next = v78->Next;
                  v78->Next = v77;
                  _InterlockedIncrement16((volatile signed __int16 *)(v3 + 1416));
                  KiAbQueueAutoBoostDpc((__int64)v76);
                }
              }
            }
          }
        }
        *(_BYTE *)(v3 + 195) = v72;
        *(_BYTE *)(v3 + 564) += 16 * (v72 - v70);
      }
      goto LABEL_181;
    }
    if ( v73 > v74 )
    {
      if ( !ThreadEffectiveRankNonZero )
        goto LABEL_181;
      if ( v74 <= 1 )
      {
        v79 = *(_DWORD *)(*(_QWORD *)(v91 + 400) + 116LL);
        v80 = *(_QWORD *)(a1 + 22776);
        if ( !v80 )
          goto LABEL_181;
        v81 = *(_DWORD *)(v80 + 28);
        if ( v81 == v79 )
        {
          if ( *(unsigned __int16 *)(v80 + 26) < v73 )
            goto LABEL_181;
        }
        else if ( v81 > v79 )
        {
          goto LABEL_181;
        }
      }
    }
  }
LABEL_190:
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  if ( v50 )
  {
    v87 = v49 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v3 + 651);
    if ( (*(_DWORD *)(v3 + 120) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v3 + 120), 4u);
    *(_QWORD *)(v3 + 32) = v87;
  }
  v29 = v93;
LABEL_195:
  *(_QWORD *)(v3 + 64) = 0LL;
  if ( !v95 )
  {
    *(_BYTE *)(v3 + 566) = v90;
    *(_BYTE *)(v3 + 567) = a2;
    KiDeferredReadyThread(a1, (_BYTE *)v3);
  }
  return v29;
}
