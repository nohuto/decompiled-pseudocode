/*
 * XREFs of KiDirectSwitchThread @ 0x1400844B0
 * Callers:
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiScheduleNextForegroundBoost @ 0x1400E554C (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x1400ED9B8 (KiGetComparisonRanks.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x14020E210 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // r13
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 *v18; // rdi
  __int64 *v19; // r14
  volatile signed __int32 *v20; // rbp
  __int64 *v21; // rcx
  __int64 **v22; // rax
  bool v23; // di
  unsigned __int64 v24; // rax
  __int64 p_AbPropagateBoostsList; // r8
  __int64 v26; // r12
  unsigned __int64 v27; // rcx
  bool v28; // zf
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v33; // r10
  unsigned __int64 v34; // r15
  bool v35; // cc
  bool v36; // bp
  char v37; // bp
  unsigned int v38; // eax
  unsigned __int8 v39; // al
  unsigned int v40; // eax
  char v41; // di
  struct _KPRCB *CurrentPrcb; // rcx
  int v43; // r10d
  int v44; // edi
  int v45; // r9d
  char v46; // cl
  struct _KPRCB *v47; // rcx
  int v48; // r14d
  int v49; // edi
  unsigned int v50; // r9d
  unsigned int v51; // ecx
  unsigned __int64 v52; // rax
  struct _KPRCB *v53; // rcx
  struct _SINGLE_LIST_ENTRY *v54; // rdx
  _SINGLE_LIST_ENTRY *v55; // r8
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned int v58; // edx
  char EffectivePriorityThread; // al
  unsigned __int64 v60; // rcx
  unsigned int ThreadEffectiveRankNonZero; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+24h] [rbp-74h] BYREF
  int v64; // [rsp+28h] [rbp-70h]
  int v65; // [rsp+2Ch] [rbp-6Ch] BYREF
  _DWORD v66[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-60h]
  __int64 v68; // [rsp+40h] [rbp-58h]
  bool v69; // [rsp+A0h] [rbp+8h]
  char v70; // [rsp+A8h] [rbp+10h]
  char v72; // [rsp+B8h] [rbp+20h]

  v70 = a2;
  v5 = *(_QWORD *)(a1 + 11400) - 216LL;
  v6 = a2;
  v7 = *(__int64 **)(a1 + 11400);
  v8 = *v7;
  *(_QWORD *)(a1 + 11400) = *v7;
  if ( *(_QWORD *)(a1 + 16) || (v9 = *(unsigned int *)(v5 + 120), (v9 & 0x10000) == 0) || (v9 & 0x40000) != 0 )
  {
    *v7 = v8;
    *(_QWORD *)(a1 + 11400) = v7;
    return 0;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v5, 1LL, v6, 1LL);
  v10 = *(_QWORD *)(v5 + 104);
  v11 = *(_QWORD *)(a1 + 8);
  v68 = v10;
  if ( v10 )
  {
    v10 += *(unsigned int *)(a1 + 1624);
    v68 = v10;
  }
  ThreadEffectiveRankNonZero = 0;
  v63 = 0;
  if ( v10 )
  {
    ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v10, 1);
    if ( ThreadEffectiveRankNonZero )
    {
      v12 = *(_QWORD *)(v11 + 104);
      if ( v12 )
      {
        v13 = *(unsigned int *)(a1 + 1624) + v12;
        if ( v13 )
        {
          v63 = KiGetThreadEffectiveRankNonZero(v11, v13, v6);
          if ( v63 )
            KiGetComparisonRanks(v15, v14, &ThreadEffectiveRankNonZero, &v63);
        }
      }
    }
  }
  v16 = *(unsigned __int8 *)(v5 + 587);
  v17 = 3LL;
  v64 = 1;
  v18 = *(__int64 **)(v5 + 208);
  v72 = 0;
  v19 = &v18[6 * v16];
  do
  {
    if ( *((unsigned __int8 *)v18 + 17) < 5u )
    {
      v20 = (volatile signed __int32 *)v18[4];
      KiAcquireKobjectLockSafe(v20, v9, v6);
      if ( *((_BYTE *)v18 + 17) == 4 )
      {
        v21 = (__int64 *)*v18;
        v22 = (__int64 **)v18[1];
        if ( *(__int64 **)(*v18 + 8) != v18 || *v22 != v18 )
          __fastfail(3u);
        *v22 = v21;
        v21[1] = (__int64)v22;
      }
      _InterlockedAnd(v20, 0xFFFFFF7F);
    }
    v18 += 6;
  }
  while ( v18 != v19 );
  v23 = *(_QWORD *)(a1 + 11400) == 0LL;
  v69 = v23;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v24 = __rdtsc();
  p_AbPropagateBoostsList = v24 - *(_QWORD *)(a1 + 23352);
  v26 = p_AbPropagateBoostsList + *(_QWORD *)(v11 + 72);
  v27 = p_AbPropagateBoostsList + *(unsigned int *)(v11 + 80);
  *(_QWORD *)(v11 + 72) = v26;
  *(_QWORD *)(a1 + 23352) = v24;
  if ( v27 > 0xFFFFFFFF )
    v27 = 0xFFFFFFFFLL;
  v28 = (*(_BYTE *)(v11 + 2) & 0x3E) == 0;
  *(_DWORD *)(v11 + 80) = v27;
  if ( !v28 )
    KiEndThreadAccountingPeriod(a1, v11, p_AbPropagateBoostsList, a4);
  v29 = __rdtsc();
  v30 = (unsigned __int64)HIDWORD(v29) << 32;
  v31 = v29;
  *(_QWORD *)(a1 + 23544) += v29 - *(_QWORD *)(a1 + 23352);
  if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
    p_AbPropagateBoostsList = CurrentFrequency;
    if ( CurrentFrequency / 0x19 < 3 )
      v17 = CurrentFrequency / 0x19;
    v30 = a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v17);
    v27 = v33 + *(_QWORD *)v30;
    *(_QWORD *)v30 = v27;
  }
  *(_QWORD *)(a1 + 23352) = v31;
  if ( (*(_BYTE *)(v11 + 2) & 0x10) != 0 )
    *(_QWORD *)(a1 + 23360) = v31;
  if ( (*(_BYTE *)(v11 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v11, 0LL);
  v28 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v28 )
  {
    LOBYTE(v27) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v27);
  }
  _enable();
  v34 = *(_QWORD *)(v11 + 32);
  v67 = *(_QWORD *)(v5 + 72);
  v65 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v65, v30, p_AbPropagateBoostsList);
    while ( *(_QWORD *)(v5 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 1616) == *(_WORD *)(v5 + 584)
    && (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(v5 + 576)) != 0LL )
  {
    v35 = *(_BYTE *)(v5 + 195) < 16;
    v64 = 0;
    if ( v35 )
    {
      v37 = 0;
      v38 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436);
      if ( v67 >= *(_QWORD *)(v5 + 32) )
      {
        v37 = 4;
        if ( v38 < 2 )
          v37 = 5;
      }
      if ( (v37 & 4) != 0 || *(char *)(v5 + 563) >= 14 || !*(_BYTE *)(v5 + 564) && v38 >= 2 )
      {
        p_AbPropagateBoostsList = *(unsigned __int8 *)(v5 + 195);
        v37 |= 8u;
        if ( (char)p_AbPropagateBoostsList < 16 )
        {
          v30 = *(unsigned __int8 *)(v5 + 564);
          v39 = -1 - ((unsigned __int8)v30 >> 4) - (v30 & 0xF) + p_AbPropagateBoostsList;
          if ( v39 < *(_BYTE *)(v5 + 563) )
            v39 = *(_BYTE *)(v5 + 563);
          p_AbPropagateBoostsList = v39;
          if ( (_BYTE)v30 )
          {
            if ( (v30 & 0xF) != 0 )
              *(_DWORD *)(v5 + 1420) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v5 + 564) = 0;
          }
          v40 = *(_DWORD *)(v5 + 1408);
          if ( v40 )
          {
            _BitScanReverse((unsigned int *)&v30, v40);
            p_AbPropagateBoostsList = (unsigned __int8)p_AbPropagateBoostsList;
            if ( (char)p_AbPropagateBoostsList < (int)v30 )
              p_AbPropagateBoostsList = (unsigned __int8)v30;
            v66[1] = v30;
          }
        }
        v41 = p_AbPropagateBoostsList;
        if ( KiAbEnabled )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (char)p_AbPropagateBoostsList > *(char *)(v5 + 195) )
          {
            if ( *(_BYTE *)(v5 + 793) )
            {
              v30 = v5 + 1376;
              if ( *(_QWORD *)(v5 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&CurrentPrcb->AbPropagateBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                {
                  *(_QWORD *)v30 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v30;
                  _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1416));
                  KiAbQueueAutoBoostDpc(CurrentPrcb);
                }
              }
            }
          }
        }
        *(_BYTE *)(v5 + 195) = v41;
      }
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 544) + 1498LL) == 2 )
        v37 |= 2u;
      if ( (v37 & 1) != 0
        || (*(_DWORD *)(v5 + 120) & 2) != 0
        || (v30 = *(unsigned __int8 *)(v5 + 564), (_BYTE)v30) && ((v30 & 0xF0) != 0 || (v37 & 2) == 0) )
      {
        if ( (v37 & 6) == 6 && (*(_DWORD *)(v5 + 120) & 2) == 0 )
          KiScheduleNextForegroundBoost(v5);
      }
      else
      {
        v43 = *(char *)(v5 + 563);
        p_AbPropagateBoostsList = (unsigned int)(v43 + v70);
        v44 = v43 + v70;
        if ( (v37 & 2) != 0 )
          v44 += (char)PsPrioritySeparation;
        if ( v44 >= 16 )
          v44 = 15;
        v45 = *(char *)(v5 + 195);
        if ( v44 > v45 )
        {
          v46 = 0;
          if ( v44 > (int)p_AbPropagateBoostsList )
            v46 = v44 - v43 - v70;
          v28 = KiAbEnabled == 0;
          *(_BYTE *)(v5 + 564) = v30 ^ (v46 ^ v30) & 0xF;
          if ( !v28 )
          {
            v47 = KeGetCurrentPrcb();
            if ( (char)v44 > (char)v45 )
            {
              if ( *(_BYTE *)(v5 + 793) )
              {
                v30 = v5 + 1376;
                if ( *(_QWORD *)(v5 + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = (__int64)&v47->AbPropagateBoostsList;
                  if ( v47 != (struct _KPRCB *)-25656LL )
                  {
                    *(_QWORD *)v30 = *(_QWORD *)p_AbPropagateBoostsList;
                    *(_QWORD *)p_AbPropagateBoostsList = v30;
                    _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1416));
                    KiAbQueueAutoBoostDpc(v47);
                  }
                }
              }
            }
          }
          *(_BYTE *)(v5 + 195) = v44;
        }
      }
      v36 = (v37 & 8) != 0;
    }
    else
    {
      v36 = 1;
    }
    v48 = *(char *)(v5 + 195);
    v66[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(v66, v30, p_AbPropagateBoostsList);
      while ( *(_QWORD *)(a1 + 48) );
    }
    v49 = *(char *)(v11 + 195);
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_133;
    if ( ThreadEffectiveRankNonZero <= v63 && (ThreadEffectiveRankNonZero != v63 || v48 > v49) )
    {
      *(_BYTE *)(v11 + 565) = 1;
LABEL_129:
      *(_BYTE *)(v5 + 565) = 0;
      *(_DWORD *)(v5 + 536) = *(_DWORD *)(a1 + 36);
      v72 = 1;
      if ( (*(_BYTE *)(v5 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v5, a1);
      else
        EffectivePriorityThread = *(_BYTE *)(v5 + 195);
      **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
      *(_QWORD *)(a1 + 16) = v5;
      *(_BYTE *)(v5 + 388) = 3;
      goto LABEL_133;
    }
    v50 = 1 << v48;
    v51 = *(_DWORD *)(*(_QWORD *)(a1 + 24776) + 8LL) | *(_DWORD *)(a1 + 22680);
    if ( (unsigned __int64)(unsigned int)KiDirectQuantumTarget + v26 <= v34 && !ThreadEffectiveRankNonZero )
    {
      if ( v49 >= 16 )
      {
        v49 = 15;
        if ( v48 >= 16 )
          v49 = v48;
      }
      if ( (v51 & v50) != 0 )
      {
        v52 = (unsigned int)KiDirectQuantumTarget + v67;
        v26 = v34 - (unsigned int)KiDirectQuantumTarget;
      }
      else
      {
        v52 = v34 + v67 - v26;
      }
      _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 4u);
      v36 = 0;
      *(_QWORD *)(v5 + 32) = v52;
      *(_QWORD *)(v11 + 32) = v26;
      if ( a3 && v48 != v49 )
      {
        if ( KiAbEnabled )
        {
          v53 = KeGetCurrentPrcb();
          if ( (char)v49 > *(char *)(v5 + 195) )
          {
            if ( *(_BYTE *)(v5 + 793) )
            {
              v54 = (struct _SINGLE_LIST_ENTRY *)(v5 + 1376);
              if ( *(_QWORD *)(v5 + 1376) == 1LL )
              {
                v55 = &v53->AbPropagateBoostsList;
                if ( v53 != (struct _KPRCB *)-25656LL )
                {
                  v54->Next = v55->Next;
                  v55->Next = v54;
                  _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1416));
                  KiAbQueueAutoBoostDpc(v53);
                }
              }
            }
          }
        }
        *(_BYTE *)(v5 + 195) = v49;
        *(_BYTE *)(v5 + 564) += 16 * (v49 - v48);
      }
      goto LABEL_129;
    }
    if ( v50 > v51 )
    {
      if ( !ThreadEffectiveRankNonZero )
        goto LABEL_129;
      if ( v51 <= 1 )
      {
        v56 = *(_DWORD *)(*(_QWORD *)(v68 + 400) + 116LL);
        v57 = *(_QWORD *)(a1 + 22776);
        if ( !v57 )
          goto LABEL_129;
        v58 = *(_DWORD *)(v57 + 28);
        if ( v58 == v56 )
        {
          if ( *(unsigned __int16 *)(v57 + 26) < v50 )
            goto LABEL_129;
        }
        else if ( v58 > v56 )
        {
          goto LABEL_129;
        }
      }
    }
LABEL_133:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    if ( v36 )
    {
      v60 = v67 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
      if ( (*(_DWORD *)(v5 + 120) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 4u);
      *(_QWORD *)(v5 + 32) = v60;
    }
    v23 = v69;
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( !v72 )
  {
    *(_BYTE *)(v5 + 566) = v64;
    *(_BYTE *)(v5 + 567) = v70;
    KiDeferredReadyThread(a1, v5);
  }
  return v23;
}
