/*
 * XREFs of KiDeferredReadyThread @ 0x140087D50
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x14002AB48 (KiFastReadyThread.c)
 *     KiReadyThread @ 0x140034300 (KiReadyThread.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiSetThreadSchedulingGroup @ 0x140094830 (KiSetThreadSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC (KeUpdateProcessSharedReadyQueueAffinity.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiIsThreadRankNonZero @ 0x140014D90 (KiIsThreadRankNonZero.c)
 *     KiComputeNewPriority @ 0x14002A650 (KiComputeNewPriority.c)
 *     KiShouldPreemptionBeDeferred @ 0x14002A6D4 (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14002A78C (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400840E0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 *     KiAddThreadToScbQueue @ 0x1400C38CC (KiAddThreadToScbQueue.c)
 *     KiScheduleNextForegroundBoost @ 0x1400E554C (KiScheduleNextForegroundBoost.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401C97F0 (KiHeteroChooseTargetProcessor.c)
 */

int __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList)
{
  __int64 i; // rbx
  unsigned __int64 v5; // rbp
  unsigned int v6; // r15d
  char v7; // r14
  char v8; // al
  bool v9; // di
  char v10; // di
  unsigned int v11; // eax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  unsigned int v14; // eax
  int v15; // edx
  char v16; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v18; // rdx
  char v19; // dl
  int v20; // r10d
  int v21; // esi
  int v22; // r9d
  char v23; // cl
  struct _KPRCB *v24; // rcx
  _QWORD *v25; // rdx
  char v26; // dl
  char v27; // cl
  char v28; // si
  struct _KPRCB *v29; // rcx
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int8 v34; // r14
  unsigned __int64 v35; // rcx
  unsigned __int16 v36; // dx
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // ebp
  __int64 v42; // rdx
  __int64 v43; // rcx
  _BYTE *v44; // rsi
  _BYTE *v45; // rsi
  __int64 v46; // r10
  __int64 v47; // r10
  unsigned __int64 v48; // rax
  char v49; // cl
  bool IsThreadRankNonZero; // al
  bool v51; // zf
  __int64 v52; // rbp
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 *v55; // r14
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 **v58; // rcx
  __int64 *v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rdx
  __int64 **v62; // rdx
  __int64 v63; // rax
  char v64; // cl
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  int v68; // eax
  int v69; // eax
  struct _KPRCB *v70; // rax
  _DWORD v72[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v73; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v74; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v75; // [rsp+40h] [rbp-48h]
  BOOL v76; // [rsp+98h] [rbp+10h] BYREF
  int v77; // [rsp+A0h] [rbp+18h] BYREF
  int v78; // [rsp+A8h] [rbp+20h] BYREF

  for ( i = a2; ; i = (__int64)v44 )
  {
    v5 = *(_QWORD *)(i + 72);
    v6 = 0;
    v7 = *(_BYTE *)(i + 566) == 1 ? *(_BYTE *)(i + 567) : 0;
    v77 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v77, a2, p_AbPropagateBoostsList);
      while ( *(_QWORD *)(i + 64) );
    }
    if ( *(_BYTE *)(i + 566) )
    {
      if ( *(char *)(i + 195) < 16 )
      {
        v10 = 0;
        v11 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(i + 436);
        if ( v5 >= *(_QWORD *)(i + 32) )
        {
          v10 = 4;
          if ( v11 < 2 )
            v10 = 5;
        }
        if ( (v10 & 4) != 0 || *(char *)(i + 563) >= 14 || !*(_BYTE *)(i + 564) && v11 >= 2 )
        {
          p_AbPropagateBoostsList = *(unsigned __int8 *)(i + 195);
          v10 |= 8u;
          if ( (char)p_AbPropagateBoostsList < 16 )
          {
            v12 = *(_BYTE *)(i + 564);
            v13 = -1 - (v12 >> 4) - (v12 & 0xF) + p_AbPropagateBoostsList;
            if ( v13 < *(_BYTE *)(i + 563) )
              v13 = *(_BYTE *)(i + 563);
            p_AbPropagateBoostsList = v13;
            if ( v12 )
            {
              if ( (v12 & 0xF) != 0 )
                *(_DWORD *)(i + 1420) = MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(i + 564) = 0;
            }
            v14 = *(_DWORD *)(i + 1408);
            if ( v14 )
            {
              _BitScanReverse((unsigned int *)&v15, v14);
              p_AbPropagateBoostsList = (unsigned __int8)p_AbPropagateBoostsList;
              if ( (char)p_AbPropagateBoostsList < v15 )
                p_AbPropagateBoostsList = (unsigned __int8)v15;
              v72[1] = v15;
            }
          }
          v16 = p_AbPropagateBoostsList;
          if ( KiAbEnabled )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (char)p_AbPropagateBoostsList > *(char *)(i + 195) )
            {
              if ( *(_BYTE *)(i + 793) )
              {
                v18 = (_QWORD *)(i + 1376);
                if ( *(_QWORD *)(i + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = (__int64)&CurrentPrcb->AbPropagateBoostsList;
                  if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                  {
                    *v18 = *(_QWORD *)p_AbPropagateBoostsList;
                    *(_QWORD *)p_AbPropagateBoostsList = v18;
                    _InterlockedIncrement16((volatile signed __int16 *)(i + 1416));
                    KiAbQueueAutoBoostDpc(CurrentPrcb);
                  }
                }
              }
            }
          }
          *(_BYTE *)(i + 195) = v16;
        }
        if ( *(_BYTE *)(*(_QWORD *)(i + 544) + 1498LL) == 2 )
          v10 |= 2u;
        if ( (v10 & 1) != 0
          || (*(_DWORD *)(i + 120) & 2) != 0
          || (v19 = *(_BYTE *)(i + 564)) != 0 && ((v19 & 0xF0) != 0 || (v10 & 2) == 0) )
        {
          if ( (v10 & 6) == 6 && (*(_DWORD *)(i + 120) & 2) == 0 )
            KiScheduleNextForegroundBoost(i);
        }
        else
        {
          v20 = *(char *)(i + 563);
          p_AbPropagateBoostsList = (unsigned int)(v20 + v7);
          v21 = v20 + v7;
          if ( (v10 & 2) != 0 )
            v21 += (char)PsPrioritySeparation;
          if ( v21 >= 16 )
            v21 = 15;
          v22 = *(char *)(i + 195);
          if ( v21 > v22 )
          {
            v23 = 0;
            if ( v21 > (int)p_AbPropagateBoostsList )
              v23 = v21 - v20 - v7;
            v51 = KiAbEnabled == 0;
            *(_BYTE *)(i + 564) = v19 ^ (v23 ^ v19) & 0xF;
            if ( !v51 )
            {
              v24 = KeGetCurrentPrcb();
              if ( (char)v21 > (char)v22 )
              {
                if ( *(_BYTE *)(i + 793) )
                {
                  v25 = (_QWORD *)(i + 1376);
                  if ( *(_QWORD *)(i + 1376) == 1LL )
                  {
                    p_AbPropagateBoostsList = (__int64)&v24->AbPropagateBoostsList;
                    if ( v24 != (struct _KPRCB *)-25656LL )
                    {
                      *v25 = *(_QWORD *)p_AbPropagateBoostsList;
                      *(_QWORD *)p_AbPropagateBoostsList = v25;
                      _InterlockedIncrement16((volatile signed __int16 *)(i + 1416));
                      KiAbQueueAutoBoostDpc(v24);
                    }
                  }
                }
              }
            }
            *(_BYTE *)(i + 195) = v21;
          }
        }
        v9 = (v10 & 8) != 0;
      }
      else
      {
        v9 = 1;
      }
      if ( *(_BYTE *)(i + 566) == 2 )
      {
        v26 = *(_BYTE *)(i + 195);
        v27 = *(_BYTE *)(i + 567);
        if ( v26 >= v27 || v26 >= 13 || (*(_DWORD *)(i + 120) & 2) != 0 )
        {
          if ( !v9 )
          {
            v38 = *(_QWORD *)(i + 32);
            if ( v5 > v38 || v38 - v5 < (unsigned int)KiLockQuantumTarget )
              *(_QWORD *)(i + 32) = (unsigned int)KiLockQuantumTarget + v5;
            goto LABEL_84;
          }
          goto LABEL_81;
        }
        p_AbPropagateBoostsList = (unsigned int)v27;
        if ( v27 >= 13 )
          p_AbPropagateBoostsList = 13LL;
        v28 = p_AbPropagateBoostsList;
        *(_BYTE *)(i + 564) += 16 * (p_AbPropagateBoostsList - v26);
        if ( KiAbEnabled )
        {
          v29 = KeGetCurrentPrcb();
          if ( (char)p_AbPropagateBoostsList > v26 )
          {
            if ( *(_BYTE *)(i + 793) )
            {
              v30 = (_QWORD *)(i + 1376);
              if ( *(_QWORD *)(i + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&v29->AbPropagateBoostsList;
                if ( v29 != (struct _KPRCB *)-25656LL )
                {
                  *v30 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v30;
                  _InterlockedIncrement16((volatile signed __int16 *)(i + 1416));
                  KiAbQueueAutoBoostDpc(v29);
                }
              }
            }
          }
        }
        v31 = *(_QWORD *)(i + 32);
        v32 = (unsigned int)KiLockQuantumTarget;
        *(_BYTE *)(i + 195) = v28;
        if ( v5 > v31 || v31 - v5 < v32 )
          *(_QWORD *)(i + 32) = v32 + v5;
      }
      if ( v9 )
        goto LABEL_81;
    }
    else
    {
      if ( v5 >= *(_QWORD *)(i + 32) )
      {
        v8 = KiComputeNewPriority(i, 1);
        KiUpdateThreadPriority(0LL, i, v8, 0);
        KiTryScheduleNextForegroundBoost(i);
LABEL_81:
        v33 = v5 + (unsigned int)*(unsigned __int8 *)(i + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(i + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(i + 120), 4u);
        *(_QWORD *)(i + 32) = v33;
        goto LABEL_84;
      }
      v6 = *(unsigned __int8 *)(i + 565);
    }
LABEL_84:
    *(_WORD *)(i + 565) = 0;
    v34 = _bittestandreset((signed __int32 *)(i + 116), 1u);
    if ( *(_QWORD *)(i + 568) != KiCpuSetSequence && (*(_DWORD *)(i + 116) & 8) == 0 )
      KiComputeThreadAffinity(i);
    v35 = *(_QWORD *)(i + 576);
    v36 = *(_WORD *)(i + 584);
    v75 = v36;
    v74 = v35;
    if ( ((v35 - 1) & v35) != 0 )
    {
      if ( *(_BYTE *)(i + 125) )
        v37 = KiHeteroChooseTargetProcessor(a1, i, &v74, &v76);
      else
        v37 = KiChooseTargetProcessor(a1, i, &v74, &v76);
    }
    else
    {
      v39 = v36;
      v40 = 0x140000000uLL;
      _BitScanReverse64(&v35, v35);
      v72[2] = v35;
      v78 = 0;
      v37 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v35 + (v39 << 6))]];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v78, v40, p_AbPropagateBoostsList);
        while ( *(_QWORD *)(v37 + 48) );
      }
      v76 = (*(_BYTE *)(v37 + 35) & 1) == 0;
    }
    v41 = *(_DWORD *)(v37 + 36);
    *(_DWORD *)(i + 536) = v41;
    v42 = *(_QWORD *)(i + 104);
    if ( v42 )
      v42 += *(unsigned int *)(v37 + 1624);
    v73 = v42;
    if ( v42 )
    {
      v43 = v42;
      while ( (*(_BYTE *)(v43 + 112) & 2) == 0 )
      {
        v43 = *(_QWORD *)(v43 + 392);
        if ( !v43 )
          goto LABEL_108;
      }
      if ( !KiShouldPreemptionBeDeferred(i) )
        goto LABEL_118;
    }
LABEL_108:
    if ( v76 )
      break;
    v44 = *(_BYTE **)(v37 + 16);
    if ( !v44 )
    {
      v45 = *(_BYTE **)(v37 + 8);
      if ( KiGroupSchedulingEnabled )
      {
        if ( !KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v37, *(_QWORD *)(v37 + 8), i, &v73) )
        {
LABEL_117:
          v42 = v73;
LABEL_118:
          v46 = v42;
          if ( !v34 )
          {
            v42 = v73;
            *(_DWORD *)(i + 436) = MEMORY[0xFFFFF78000000320];
          }
          if ( !v42 )
          {
            v46 = *(_QWORD *)(i + 104);
            if ( v46 )
              v46 += *(unsigned int *)(v37 + 1624);
          }
          *(_BYTE *)(i + 388) = 1;
          if ( v46 && (*(_DWORD *)(i + 120) & 0x600) == 0 && (unsigned int)KiGetThreadEffectiveRankNonZero(i, v46, 0) )
          {
            LODWORD(v48) = KiAddThreadToScbQueue(v37, v47, i, v6);
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 48), 0LL);
            *(_QWORD *)(i + 64) = 0LL;
          }
          else
          {
            v52 = *(char *)(i + 195);
            v53 = *(_QWORD *)(v37 + 24768);
            if ( (*(_DWORD *)(i + 120) & 0x1000) != 0 && v53 && (v53 & *(_QWORD *)(i + 576)) == v53 )
            {
              v54 = *(_QWORD *)(v37 + 24776);
              v55 = (__int64 *)(v54 + 16 * (v52 + 1));
              v72[0] = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v54, 0LL) )
              {
                do
                  KeYieldProcessorEx(v72, v42, p_AbPropagateBoostsList);
                while ( *(_QWORD *)v54 );
              }
              v56 = (__int64 *)(i + 216);
              if ( v6 )
              {
                v57 = *v55;
                *v56 = *v55;
                *(_QWORD *)(i + 224) = v55;
                if ( *(__int64 **)(v57 + 8) != v55 )
                  __fastfail(3u);
                *(_QWORD *)(v57 + 8) = v56;
                *v55 = (__int64)v56;
                _bittestandreset((signed __int32 *)(v37 + 22684), v52);
              }
              else
              {
                v58 = (__int64 **)v55[1];
                *v56 = (__int64)v55;
                *(_QWORD *)(i + 224) = v58;
                if ( *v58 != v55 )
                  __fastfail(3u);
                *v58 = v56;
                v55[1] = (__int64)v56;
              }
              *(_DWORD *)(v54 + 8) |= 1 << v52;
              LODWORD(v48) = *(_DWORD *)(i + 536) | 0x80000000;
              *(_DWORD *)(i + 536) = v48;
              _InterlockedAnd64((volatile signed __int64 *)v54, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 48), 0LL);
              *(_QWORD *)(i + 64) = 0LL;
            }
            else
            {
              v59 = (__int64 *)(i + 216);
              v60 = (__int64 *)(v37 + 16 * (v52 + 1424));
              if ( v6 )
              {
                v61 = *v60;
                *v59 = *v60;
                *(_QWORD *)(i + 224) = v60;
                if ( *(__int64 **)(v61 + 8) != v60 )
                  __fastfail(3u);
                *(_QWORD *)(v61 + 8) = v59;
                *v60 = (__int64)v59;
                _bittestandset((signed __int32 *)(v37 + 22684), v52);
              }
              else
              {
                v62 = (__int64 **)v60[1];
                *v59 = (__int64)v60;
                *(_QWORD *)(i + 224) = v62;
                if ( *v62 != v60 )
                  __fastfail(3u);
                *v62 = v59;
                v60[1] = (__int64)v59;
              }
              LODWORD(v48) = *(_DWORD *)(v37 + 22680) | (1 << v52);
              *(_DWORD *)(v37 + 22680) = v48;
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 48), 0LL);
              *(_QWORD *)(i + 64) = 0LL;
            }
          }
          return v48;
        }
      }
      else if ( *(_BYTE *)(i + 195) <= v45[195] )
      {
        goto LABEL_118;
      }
      if ( v45[388] == 2 )
        v45[565] = 1;
      if ( (*(_BYTE *)(i + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(i, (struct _KPRCB *)v37);
        v49 = 1;
        if ( !IsThreadRankNonZero )
          v49 = *(_BYTE *)(i + 195);
      }
      else
      {
        v49 = *(_BYTE *)(i + 195);
      }
      v48 = *(_QWORD *)(v37 + 56);
      *(_BYTE *)v48 = v49;
      *(_QWORD *)(v37 + 16) = i;
      *(_BYTE *)(i + 388) = 3;
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 48), 0LL);
      *(_QWORD *)(i + 64) = 0LL;
      v51 = a1 == v37;
LABEL_182:
      if ( !v51 )
      {
        v70 = KeGetCurrentPrcb();
        LOBYTE(v42) = 2;
        ++v70->SynchCounters.IpiSendSoftwareInterruptCount;
        LODWORD(v48) = HalSendSoftwareInterrupt(v41, v42);
      }
      return v48;
    }
    if ( KiGroupSchedulingEnabled )
    {
      if ( !KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v37, *(_QWORD *)(v37 + 16), i, &v73) )
        goto LABEL_117;
    }
    else if ( *(_BYTE *)(i + 195) <= v44[195] )
    {
      goto LABEL_118;
    }
    v44[565] = 1;
    KiUpdateThreadState(v37, (_BYTE *)i, 3, 1);
    v44[388] = 7;
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 48), 0LL);
    *(_QWORD *)(i + 64) = 0LL;
  }
  v63 = *(_QWORD *)(v37 + 16);
  if ( v63 && v63 != *(_QWORD *)(v37 + 24) )
    __fastfail(0x1Eu);
  if ( (*(_BYTE *)(i + 2) & 4) != 0 )
  {
    if ( *(char *)(i + 195) < 16
      && *(_QWORD *)(i + 104)
      && (v65 = *(_QWORD *)(i + 104)) != 0
      && (v66 = *(unsigned int *)(v37 + 1624) + v65) != 0
      && *(char *)(i + 195) < 16
      && (*(_DWORD *)(i + 120) & 0x100) == 0 )
    {
      v67 = v66;
      while ( (*(_BYTE *)(v67 + 112) & 2) == 0 )
      {
        v67 = *(_QWORD *)(v67 + 392);
        if ( !v67 )
        {
          while ( !*(_DWORD *)(v66 + 116) )
          {
            v66 = *(_QWORD *)(v66 + 392);
            if ( !v66 )
              goto LABEL_174;
          }
          break;
        }
      }
      v64 = 1;
    }
    else
    {
LABEL_174:
      v64 = *(_BYTE *)(i + 195);
    }
  }
  else
  {
    v64 = *(_BYTE *)(i + 195);
  }
  **(_BYTE **)(v37 + 56) = v64;
  *(_QWORD *)(v37 + 16) = i;
  *(_BYTE *)(i + 388) = 3;
  v68 = *(unsigned __int8 *)(v37 + 35);
  v42 = *(_QWORD *)(v37 + 1600);
  *(_BYTE *)(v37 + 11755) = 0;
  if ( (v68 & 1) != 0 )
    __fastfail(0x21u);
  v69 = v68 + 1;
  *(_BYTE *)(v37 + 35) = v69;
  if ( v69 == 1 )
    _interlockedbittestandreset64((volatile signed __int32 *)v42, *(unsigned __int8 *)(v37 + 1617));
  _interlockedbittestandreset64((volatile signed __int32 *)(v42 + 16), *(unsigned __int8 *)(v37 + 1617));
  v48 = ~*(_QWORD *)(v37 + 24792);
  _InterlockedAnd64((volatile signed __int64 *)(v42 + 8), v48);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 48), 0LL);
  *(_QWORD *)(i + 64) = 0LL;
  if ( v37 != a1 )
  {
    v51 = *(_BYTE *)(v37 + 7) == 0;
    goto LABEL_182;
  }
  return v48;
}
