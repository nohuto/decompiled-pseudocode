/*
 * XREFs of KiDirectSwitchThread @ 0x1400527F0
 * Callers:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x1400A2DF8 (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x1400AA4A4 (KiGetComparisonRanks.c)
 *     KiIsThreadRankNonZero @ 0x1400CE030 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400CE188 (KiCheckForMaxOverQuotaScb.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x140225EF4 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // r9
  char v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 *v13; // rbp
  bool v14; // si
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  bool v21; // cc
  char v22; // si
  unsigned int v23; // eax
  char v24; // r8
  unsigned __int8 v25; // dl
  char v26; // al
  unsigned int v27; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  char v29; // bp
  int v30; // edx
  bool v31; // si
  int v32; // ebp
  int v33; // r15d
  unsigned __int64 v34; // r9
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  bool result; // al
  char v39; // r8
  int v40; // r9d
  int v41; // ebp
  int v42; // ecx
  char v43; // r10
  struct _KPRCB *v44; // rdx
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // rsi
  __int64 v48; // rsi
  unsigned int v49; // ecx
  __int64 v50; // rax
  unsigned int v51; // r8d
  unsigned __int64 v52; // rcx
  struct _KPRCB *v53; // rcx
  volatile signed __int32 *v54; // r15
  __int64 *v55; // rcx
  __int64 **v56; // rax
  struct _SINGLE_LIST_ENTRY *v57; // r8
  _SINGLE_LIST_ENTRY *v58; // rdx
  struct _SINGLE_LIST_ENTRY *v59; // r8
  _SINGLE_LIST_ENTRY *v60; // rcx
  unsigned int CurrentFrequency; // eax
  __int64 v62; // r9
  __int64 v63; // r8
  unsigned __int64 *v64; // rdx
  int v65; // edx
  struct _SINGLE_LIST_ENTRY *v66; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  unsigned int v68; // [rsp+30h] [rbp-88h] BYREF
  unsigned int ThreadEffectiveRankNonZero; // [rsp+34h] [rbp-84h] BYREF
  int v70; // [rsp+38h] [rbp-80h]
  unsigned __int64 v71; // [rsp+40h] [rbp-78h]
  int v72; // [rsp+48h] [rbp-70h] BYREF
  _DWORD v73[3]; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-60h]
  unsigned __int64 v75; // [rsp+60h] [rbp-58h]
  bool v76; // [rsp+C0h] [rbp+8h]
  char v79; // [rsp+D8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 11400) - 216LL;
  v5 = *(__int64 **)(a1 + 11400);
  v6 = *v5;
  *(_QWORD *)(a1 + 11400) = *v5;
  if ( *(_QWORD *)(a1 + 16) || (*(_DWORD *)(v4 + 120) & 0x50000) != 0x10000 )
  {
    *v5 = v6;
    result = 0;
    *(_QWORD *)(a1 + 11400) = v5;
    return result;
  }
  v7 = 1;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v4, 1LL, a2);
  v8 = *(_QWORD *)(v4 + 104);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    v8 += *(unsigned int *)(a1 + 1624);
  v10 = 0xFFFFFFFFLL;
  v68 = 0;
  ThreadEffectiveRankNonZero = 0;
  if ( v8 )
  {
    LODWORD(v45) = v8;
    v46 = 0;
    if ( *(char *)(v4 + 195) < 16
      && (*(_DWORD *)(v4 + 120) & 0x100) == 0
      && !*(_DWORD *)(v4 + 484)
      && *(_BYTE *)(v4 + 390) != 1 )
    {
      if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v8, 0LL, v8, 0xFFFFFFFFLL) )
      {
        v68 = v10;
LABEL_89:
        v47 = *(_QWORD *)(v9 + 104);
        if ( v47 )
        {
          v48 = *(unsigned int *)(a1 + 1624) + v47;
          if ( v48 )
          {
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v9, v48, v45, 1, 0LL);
            if ( ThreadEffectiveRankNonZero )
              KiGetComparisonRanks(v8, v48, &v68, &ThreadEffectiveRankNonZero);
          }
        }
        goto LABEL_8;
      }
      do
      {
        v46 += *(_DWORD *)(v45 + 116);
        if ( v46 )
          break;
        v45 = *(_QWORD *)(v45 + 408);
      }
      while ( v45 );
    }
    v68 = v46;
    if ( !v46 )
      goto LABEL_8;
    goto LABEL_89;
  }
LABEL_8:
  v11 = *(unsigned __int8 *)(v4 + 587);
  v12 = *(__int64 **)(v4 + 208);
  v79 = 0;
  v70 = 1;
  v13 = &v12[6 * v11];
  do
  {
    if ( *((unsigned __int8 *)v12 + 17) < 5u )
    {
      v54 = (volatile signed __int32 *)v12[4];
      KiAcquireKobjectLockSafe(v54);
      if ( *((_BYTE *)v12 + 17) == 4 )
      {
        v55 = (__int64 *)*v12;
        v56 = (__int64 **)v12[1];
        if ( *(__int64 **)(*v12 + 8) != v12 || *v56 != v12 )
          __fastfail(3u);
        *v56 = v55;
        v55[1] = (__int64)v56;
      }
      _InterlockedAnd(v54, 0xFFFFFF7F);
    }
    v12 += 6;
  }
  while ( v12 != v13 );
  v14 = *(_QWORD *)(a1 + 11400) == 0LL;
  v76 = v14;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v15 = __rdtsc();
  v16 = v15 - *(_QWORD *)(a1 + 23352);
  v74 = v16 + *(_QWORD *)(v9 + 72);
  *(_QWORD *)(v9 + 72) = v74;
  v17 = v16 + *(unsigned int *)(v9 + 80);
  if ( v17 > 0xFFFFFFFF )
    v17 = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 23352) = v15;
  v18 = (*(_BYTE *)(v9 + 2) & 0x3E) == 0;
  *(_DWORD *)(v9 + 80) = v17;
  if ( !v18 )
    KiEndThreadAccountingPeriod(a1, v9, v16, v10);
  v19 = __rdtsc();
  *(_QWORD *)(a1 + 23544) += v19 - *(_QWORD *)(a1 + 23352);
  if ( (*(_BYTE *)(v9 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
    v63 = 3LL;
    if ( CurrentFrequency / 0x19 < 3 )
      v63 = CurrentFrequency / 0x19;
    v64 = (unsigned __int64 *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v63));
    v17 = v62 + *v64;
    *v64 = v17;
  }
  *(_QWORD *)(a1 + 23352) = v19;
  if ( (*(_BYTE *)(v9 + 2) & 0x10) != 0 )
    *(_QWORD *)(a1 + 23360) = v19;
  if ( (*(_BYTE *)(v9 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v9, 0LL);
  v18 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v18 )
  {
    LOBYTE(v17) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v17);
  }
  _enable();
  v20 = *(_QWORD *)(v4 + 72);
  v75 = *(_QWORD *)(v9 + 32);
  v71 = v20;
  v72 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v72);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 1616) != *(_WORD *)(v4 + 584)
    || (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(v4 + 576)) == 0LL )
  {
    goto LABEL_64;
  }
  v21 = *(_BYTE *)(v4 + 195) < 16;
  v70 = 0;
  if ( v21 )
  {
    v22 = 0;
    v23 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436);
    if ( v71 >= *(_QWORD *)(v4 + 32) )
    {
      v22 = 4;
      if ( v23 < 2 )
        v22 = 5;
    }
    if ( (v22 & 4) != 0 || *(char *)(v4 + 563) >= 14 || v23 >= 2 && !*(_BYTE *)(v4 + 564) )
    {
      v24 = *(_BYTE *)(v4 + 195);
      v22 |= 8u;
      if ( v24 < 16 )
      {
        v25 = *(_BYTE *)(v4 + 564);
        v26 = -1 - (v25 >> 4) - (v25 & 0xF) + v24;
        if ( v26 < *(char *)(v4 + 563) )
          v26 = *(_BYTE *)(v4 + 563);
        v24 = v26;
        if ( v25 )
        {
          if ( (v25 & 0xF) != 0 )
            *(_DWORD *)(v4 + 1424) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v4 + 564) = 0;
        }
        v27 = *(_DWORD *)(v4 + 1408);
        if ( v27 )
        {
          _BitScanReverse((unsigned int *)&v65, v27);
          if ( v24 < v65 )
            v24 = v65;
          v73[1] = v65;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = v24;
      if ( v24 > *(char *)(v4 + 195) )
      {
        if ( *(_BYTE *)(v4 + 793) )
        {
          v66 = (struct _SINGLE_LIST_ENTRY *)(v4 + 1376);
          if ( *(_QWORD *)(v4 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25784LL )
            {
              v66->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v66;
              _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
      *(_BYTE *)(v4 + 195) = v29;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 544) + 1466LL) == 2 )
      v22 |= 2u;
    v30 = *(_DWORD *)(v4 + 120);
    if ( ((unsigned __int8)~v22 & ((v30 & 2) == 0)) != 0
      && ((v39 = *(_BYTE *)(v4 + 564)) == 0 || (v39 & 0xF0) == 0 && (v22 & 2) != 0) )
    {
      v40 = *(char *)(v4 + 563);
      v41 = v40 + (char)a2;
      if ( (v22 & 2) != 0 )
        v41 += (char)PsPrioritySeparation;
      if ( v41 >= 16 )
        v41 = 15;
      v42 = *(char *)(v4 + 195);
      if ( v41 > v42 )
      {
        v43 = 0;
        if ( v41 > v40 + (char)a2 )
          v43 = v41 - v40 - a2;
        *(_BYTE *)(v4 + 564) = v39 ^ (v43 ^ v39) & 0xF;
        v44 = KeGetCurrentPrcb();
        if ( (char)v41 > (char)v42 )
        {
          if ( *(_BYTE *)(v4 + 793) )
          {
            v59 = (struct _SINGLE_LIST_ENTRY *)(v4 + 1376);
            if ( *(_QWORD *)(v4 + 1376) == 1LL )
            {
              v60 = &v44->AbPropagateBoostsList;
              if ( v44 != (struct _KPRCB *)-25784LL )
              {
                v59->Next = v60->Next;
                v60->Next = v59;
                _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
                KiAbQueueAutoBoostDpc(v44);
              }
            }
          }
        }
        *(_BYTE *)(v4 + 195) = v41;
      }
    }
    else if ( (v22 & 6) == 6 && (v30 & 2) == 0 )
    {
      KiScheduleNextForegroundBoost(v4);
    }
    v31 = (v22 & 8) != 0;
  }
  else
  {
    v31 = 1;
  }
  v32 = *(char *)(v4 + 195);
  v73[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(v73);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v33 = *(char *)(v9 + 195);
  if ( *(_QWORD *)(a1 + 16) )
    goto LABEL_62;
  if ( v68 <= ThreadEffectiveRankNonZero && (v68 != ThreadEffectiveRankNonZero || v32 > v33) )
  {
    *(_BYTE *)(v9 + 565) = 1;
    goto LABEL_57;
  }
  v34 = v74;
  v35 = 1 << v32;
  v36 = *(_DWORD *)(*(_QWORD *)(a1 + 24904) + 8LL) | *(_DWORD *)(a1 + 22680);
  if ( (unsigned int)KiDirectQuantumTarget + v74 <= v75 && !v68 )
  {
    if ( v33 >= 16 )
    {
      v33 = 15;
      if ( v32 >= 16 )
        v33 = v32;
    }
    if ( (v36 & v35) != 0 )
    {
      v37 = (unsigned int)KiDirectQuantumTarget + v71;
      v34 = v75 - (unsigned int)KiDirectQuantumTarget;
    }
    else
    {
      v37 = v75 + v71 - v74;
    }
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 4u);
    v31 = 0;
    *(_QWORD *)(v4 + 32) = v37;
    *(_QWORD *)(v9 + 32) = v34;
    if ( a3 && v32 != v33 )
    {
      v53 = KeGetCurrentPrcb();
      if ( (char)v33 > *(char *)(v4 + 195) )
      {
        if ( *(_BYTE *)(v4 + 793) )
        {
          v57 = (struct _SINGLE_LIST_ENTRY *)(v4 + 1376);
          if ( *(_QWORD *)(v4 + 1376) == 1LL )
          {
            v58 = &v53->AbPropagateBoostsList;
            if ( v53 != (struct _KPRCB *)-25784LL )
            {
              v57->Next = v58->Next;
              v58->Next = v57;
              _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1420));
              KiAbQueueAutoBoostDpc(v53);
            }
          }
        }
      }
      *(_BYTE *)(v4 + 195) = v33;
      *(_BYTE *)(v4 + 564) += 16 * (v33 - v32);
    }
    goto LABEL_57;
  }
  if ( v35 <= v36 )
    goto LABEL_62;
  if ( !v68 )
    goto LABEL_57;
  if ( v36 > 1 )
    goto LABEL_62;
  v49 = *(_DWORD *)(*(_QWORD *)(v8 + 416) + 116LL);
  v50 = *(_QWORD *)(a1 + 22776);
  if ( !v50 )
  {
LABEL_57:
    *(_BYTE *)(v4 + 565) = 0;
    *(_DWORD *)(v4 + 536) = *(_DWORD *)(a1 + 36);
    v79 = 1;
    if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
    {
      if ( !(unsigned __int8)KiIsThreadRankNonZero(v4, a1) )
        v7 = *(_BYTE *)(v4 + 195);
    }
    else
    {
      v7 = *(_BYTE *)(v4 + 195);
    }
    **(_BYTE **)(a1 + 56) = v7;
    *(_QWORD *)(a1 + 16) = v4;
    if ( *(_BYTE *)(v4 + 388) == 1 )
      *(_DWORD *)(v4 + 2008) = *(_DWORD *)(v4 + 2008) - *(_DWORD *)(v4 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v4 + 388) = 3;
    goto LABEL_62;
  }
  v51 = *(_DWORD *)(v50 + 28);
  if ( v51 == v49 )
  {
    if ( *(unsigned __int16 *)(v50 + 26) < v35 )
      goto LABEL_57;
  }
  else if ( v51 > v49 )
  {
    goto LABEL_57;
  }
LABEL_62:
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  if ( v31 )
  {
    v52 = v71 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
    if ( (*(_DWORD *)(v4 + 120) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 4u);
    *(_QWORD *)(v4 + 32) = v52;
  }
  v14 = v76;
LABEL_64:
  *(_QWORD *)(v4 + 64) = 0LL;
  if ( !v79 )
  {
    *(_BYTE *)(v4 + 566) = v70;
    *(_BYTE *)(v4 + 567) = a2;
    KiDeferredReadyThread(a1, v4);
  }
  return v14;
}
