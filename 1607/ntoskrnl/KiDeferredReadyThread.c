/*
 * XREFs of KiDeferredReadyThread @ 0x140056640
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiReadyThread @ 0x14005F76C (KiReadyThread.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C6A60 (KiSetThreadSchedulingGroup.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x1400D13F8 (KiReadyDeferredReadyList.c)
 *     KiFastReadyThread @ 0x1400F05F8 (KiFastReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiChooseTargetProcessor @ 0x1400570D0 (KiChooseTargetProcessor.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiAddThreadToScbQueue @ 0x140098D0C (KiAddThreadToScbQueue.c)
 *     KiScheduleNextForegroundBoost @ 0x1400A2DF8 (KiScheduleNextForegroundBoost.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CDE50 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1400CE030 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400CE170 (KiShouldPreemptionBeDeferred.c)
 *     KiComputeNewPriority @ 0x1400D02B0 (KiComputeNewPriority.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400F0CB4 (KiTryScheduleNextForegroundBoost.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401D7D70 (KiHeteroChooseTargetProcessor.c)
 */

int __fastcall KiDeferredReadyThread(__int64 a1, _BYTE *a2, _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList, __int64 a4)
{
  _BYTE *i; // rbx
  unsigned __int64 v6; // r14
  unsigned int v7; // r13d
  char v8; // r15
  char v9; // di
  unsigned int v10; // eax
  char v11; // dl
  int v12; // esi
  int v13; // ecx
  bool v14; // di
  unsigned __int8 v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // dx
  __int64 v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // cl
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rax
  bool v26; // zf
  struct _KPRCB *v27; // rax
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // al
  unsigned int v30; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  char v32; // si
  char v33; // al
  unsigned __int64 v34; // rdx
  _BYTE *v35; // r14
  _BYTE *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // cl
  __int64 v41; // rsi
  char v42; // cl
  __int64 v43; // rsi
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  char v48; // dl
  char v49; // cl
  char v50; // si
  struct _KPRCB *v51; // rcx
  unsigned __int64 v52; // rcx
  char v53; // r10
  struct _KPRCB *v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // r15
  _QWORD *v57; // r14
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  struct _SINGLE_LIST_ENTRY *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  int v63; // ecx
  struct _SINGLE_LIST_ENTRY *v64; // rdx
  struct _SINGLE_LIST_ENTRY *v65; // rdx
  int v67; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v68[3]; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v69; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v70; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v71; // [rsp+50h] [rbp-10h]
  char v72; // [rsp+A8h] [rbp+48h] BYREF
  BOOL v73; // [rsp+B0h] [rbp+50h] BYREF
  int v74; // [rsp+B8h] [rbp+58h] BYREF

  for ( i = a2; ; i = v35 )
  {
    v6 = *((_QWORD *)i + 9);
    v7 = 0;
    if ( i[566] == 1 )
      v8 = i[567];
    else
      v8 = 0;
    v74 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)i + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v74);
      while ( *((_QWORD *)i + 8) );
    }
    if ( !i[566] )
    {
      if ( v6 < *((_QWORD *)i + 4) )
      {
        v7 = (unsigned __int8)i[565];
        goto LABEL_25;
      }
      LOBYTE(a2) = 1;
      v33 = KiComputeNewPriority(i, a2);
      KiUpdateThreadPriority(0LL, i, (unsigned int)v33, 0LL);
      KiTryScheduleNextForegroundBoost(i);
      goto LABEL_60;
    }
    if ( (char)i[195] >= 16 )
    {
      v14 = 1;
    }
    else
    {
      v9 = 0;
      v10 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 109);
      if ( v6 >= *((_QWORD *)i + 4) )
      {
        v9 = 4;
        if ( v10 < 2 )
          v9 = 5;
      }
      if ( (v9 & 4) != 0 || (char)i[563] >= 14 || v10 >= 2 && !i[564] )
      {
        LODWORD(p_AbPropagateBoostsList) = (unsigned __int8)i[195];
        v9 |= 8u;
        if ( (char)p_AbPropagateBoostsList < 16 )
        {
          v28 = i[564];
          a4 = v28;
          v29 = -1 - (v28 >> 4) - (v28 & 0xF) + (_BYTE)p_AbPropagateBoostsList;
          if ( v29 < i[563] )
            v29 = i[563];
          LODWORD(p_AbPropagateBoostsList) = v29;
          if ( v28 )
          {
            if ( (v28 & 0xF) != 0 )
              *((_DWORD *)i + 356) = MEMORY[0xFFFFF78000000320];
            i[564] = 0;
          }
          v30 = *((_DWORD *)i + 352);
          if ( v30 )
          {
            _BitScanReverse((unsigned int *)&v63, v30);
            v68[1] = v63;
            if ( (char)p_AbPropagateBoostsList < v63 )
              LODWORD(p_AbPropagateBoostsList) = (unsigned __int8)v63;
          }
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = (char)p_AbPropagateBoostsList;
        if ( (char)p_AbPropagateBoostsList > (char)i[195] )
        {
          if ( i[793] )
          {
            v64 = (struct _SINGLE_LIST_ENTRY *)(i + 1376);
            if ( *((_QWORD *)i + 172) == 1LL )
            {
              p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
              if ( CurrentPrcb != (struct _KPRCB *)-25784LL )
              {
                v64->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = v64;
                _InterlockedIncrement16((volatile signed __int16 *)i + 710);
                KiAbQueueAutoBoostDpc(CurrentPrcb);
              }
            }
          }
        }
        i[195] = v32;
      }
      if ( *(_BYTE *)(*((_QWORD *)i + 68) + 1466LL) == 2 )
        v9 |= 2u;
      if ( (v9 & 1) != 0
        || (*((_DWORD *)i + 30) & 2) != 0
        || (v11 = i[564]) != 0 && ((v11 & 0xF0) != 0 || (v9 & 2) == 0) )
      {
        if ( (v9 & 6) == 6 && (*((_DWORD *)i + 30) & 2) == 0 )
          KiScheduleNextForegroundBoost(i);
      }
      else
      {
        a4 = (unsigned int)(char)i[563];
        LODWORD(p_AbPropagateBoostsList) = a4 + v8;
        v12 = (int)p_AbPropagateBoostsList;
        if ( (v9 & 2) != 0 )
          v12 = (char)PsPrioritySeparation + (_DWORD)p_AbPropagateBoostsList;
        if ( v12 >= 16 )
          v12 = 15;
        v13 = (char)i[195];
        if ( v12 > v13 )
        {
          v53 = 0;
          if ( v12 > (int)p_AbPropagateBoostsList )
            v53 = v12 - i[563] - v8;
          i[564] = v11 ^ (v53 ^ v11) & 0xF;
          v54 = KeGetCurrentPrcb();
          if ( (char)v12 > (char)v13 )
          {
            if ( i[793] )
            {
              v60 = (struct _SINGLE_LIST_ENTRY *)(i + 1376);
              if ( *((_QWORD *)i + 172) == 1LL )
              {
                p_AbPropagateBoostsList = &v54->AbPropagateBoostsList;
                if ( v54 != (struct _KPRCB *)-25784LL )
                {
                  v60->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = v60;
                  _InterlockedIncrement16((volatile signed __int16 *)i + 710);
                  KiAbQueueAutoBoostDpc(v54);
                }
              }
            }
          }
          i[195] = v12;
        }
      }
      v14 = (v9 & 8) != 0;
    }
    if ( i[566] == 2 )
    {
      v48 = i[195];
      v49 = i[567];
      if ( v48 < v49 && v48 < 13 && (*((_DWORD *)i + 30) & 2) == 0 )
      {
        LODWORD(p_AbPropagateBoostsList) = v49;
        if ( v49 >= 13 )
          LODWORD(p_AbPropagateBoostsList) = 13;
        v50 = (char)p_AbPropagateBoostsList;
        i[564] += 16 * ((_BYTE)p_AbPropagateBoostsList - v48);
        v51 = KeGetCurrentPrcb();
        if ( (char)p_AbPropagateBoostsList > v48 )
        {
          if ( i[793] )
          {
            v65 = (struct _SINGLE_LIST_ENTRY *)(i + 1376);
            if ( *((_QWORD *)i + 172) == 1LL )
            {
              p_AbPropagateBoostsList = &v51->AbPropagateBoostsList;
              if ( v51 != (struct _KPRCB *)-25784LL )
              {
                v65->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = v65;
                _InterlockedIncrement16((volatile signed __int16 *)i + 710);
                KiAbQueueAutoBoostDpc(v51);
              }
            }
          }
        }
        v52 = *((_QWORD *)i + 4);
        i[195] = v50;
        if ( v6 > v52 )
        {
          *((_QWORD *)i + 4) = v6 + (unsigned int)KiLockQuantumTarget;
        }
        else if ( v52 - v6 < (unsigned int)KiLockQuantumTarget )
        {
          *((_QWORD *)i + 4) = v6 + (unsigned int)KiLockQuantumTarget;
        }
        goto LABEL_24;
      }
      if ( !v14 )
      {
        v55 = *((_QWORD *)i + 4);
        if ( v6 > v55 )
        {
          *((_QWORD *)i + 4) = v6 + (unsigned int)KiLockQuantumTarget;
        }
        else if ( v55 - v6 < (unsigned int)KiLockQuantumTarget )
        {
          *((_QWORD *)i + 4) = v6 + (unsigned int)KiLockQuantumTarget;
        }
        goto LABEL_25;
      }
LABEL_60:
      v34 = v6 + (unsigned int)(unsigned __int8)i[651] * KiCyclesPerClockQuantum;
      if ( (*((_DWORD *)i + 30) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)i + 30, 4u);
      *((_QWORD *)i + 4) = v34;
      goto LABEL_25;
    }
LABEL_24:
    if ( v14 )
      goto LABEL_60;
LABEL_25:
    *(_WORD *)(i + 565) = 0;
    v15 = _bittestandreset((signed __int32 *)i + 29, 1u);
    if ( *((_QWORD *)i + 71) != KiCpuSetSequence && (*((_DWORD *)i + 29) & 8) == 0 )
      KiComputeThreadAffinity(i);
    v16 = *((_QWORD *)i + 72);
    v17 = *((_WORD *)i + 292);
    v71 = v17;
    v70 = v16;
    if ( ((v16 - 1) & v16) != 0 )
    {
      if ( i[125] )
        v18 = KiHeteroChooseTargetProcessor(a1, i, &v70, &v73);
      else
        v18 = KiChooseTargetProcessor(a1, i, &v70, &v73);
    }
    else
    {
      _BitScanReverse64(&v16, v16);
      v68[2] = v16;
      v67 = 0;
      v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v17 + (unsigned int)v16]];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v67);
        while ( *(_QWORD *)(v18 + 48) );
      }
      v73 = (*(_BYTE *)(v18 + 35) & 1) == 0;
    }
    v19 = *(_DWORD *)(v18 + 36);
    *((_DWORD *)i + 134) = v19;
    v20 = *((_QWORD *)i + 13);
    if ( v20 )
      v20 += *(unsigned int *)(v18 + 1624);
    v69 = v20;
    if ( v20 )
    {
      v37 = v20;
      while ( (*(_BYTE *)(v37 + 112) & 2) == 0 )
      {
        v37 = *(_QWORD *)(v37 + 408);
        if ( !v37 )
          goto LABEL_32;
      }
      if ( !(unsigned __int8)KiShouldPreemptionBeDeferred(i) )
        goto LABEL_90;
    }
LABEL_32:
    if ( v73 )
      break;
    v35 = *(_BYTE **)(v18 + 16);
    if ( !v35 )
    {
      v36 = *(_BYTE **)(v18 + 8);
      if ( KiGroupSchedulingEnabled )
      {
        if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v18, *(_QWORD *)(v18 + 8), i, &v69) )
        {
LABEL_89:
          v20 = v69;
          goto LABEL_90;
        }
      }
      else if ( i[195] <= v36[195] )
      {
LABEL_90:
        v41 = v20;
        if ( !v15 )
        {
          v20 = v69;
          *((_DWORD *)i + 109) = MEMORY[0xFFFFF78000000320];
        }
        if ( !v20 )
        {
          v41 = *((_QWORD *)i + 13);
          if ( v41 )
            v41 += *(unsigned int *)(v18 + 1624);
        }
        v42 = 0;
        i[388] = 1;
        v72 = 0;
        if ( v41 && (*((_DWORD *)i + 30) & 0x600) == 0 )
        {
          if ( (unsigned int)KiGetThreadEffectiveRankNonZero(
                               (_DWORD)i,
                               v41,
                               (_DWORD)p_AbPropagateBoostsList,
                               0,
                               (__int64)&v72) )
          {
            LODWORD(v25) = KiAddThreadToScbQueue(v18, v41, i, v7);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
            *((_QWORD *)i + 8) = 0LL;
            return v25;
          }
          v42 = v72;
        }
        v43 = (char)i[195];
        v44 = *(_QWORD *)(v18 + 24896);
        if ( (*((_DWORD *)i + 30) & 0x1000) != 0 && v44 && (v44 & *((_QWORD *)i + 72)) == v44 && !v42 )
        {
          v56 = *(_QWORD *)(v18 + 24904);
          v57 = (_QWORD *)(v56 + 16 * (v43 + 1));
          v68[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v56, 0LL) )
          {
            do
              KeYieldProcessorEx(v68);
            while ( *(_QWORD *)v56 );
          }
          v58 = i + 216;
          if ( v7 )
          {
            v62 = *v57;
            if ( *(_QWORD **)(*v57 + 8LL) != v57 )
              __fastfail(3u);
            *v58 = v62;
            *((_QWORD *)i + 28) = v57;
            *(_QWORD *)(v62 + 8) = v58;
            *v57 = v58;
            _bittestandreset((signed __int32 *)(v18 + 22684), v43);
          }
          else
          {
            v59 = (_QWORD *)v57[1];
            if ( (_QWORD *)*v59 != v57 )
              __fastfail(3u);
            *v58 = v57;
            *((_QWORD *)i + 28) = v59;
            *v59 = v58;
            v57[1] = v58;
          }
          *(_DWORD *)(v56 + 8) |= 1 << v43;
          LODWORD(v25) = *((_DWORD *)i + 134) | 0x80000000;
          *((_DWORD *)i + 134) = v25;
          _InterlockedAnd64((volatile signed __int64 *)v56, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
          *((_QWORD *)i + 8) = 0LL;
        }
        else
        {
          v45 = i + 216;
          v46 = (_QWORD *)(v18 + 16 * (v43 + 1424));
          if ( v7 )
          {
            v61 = *v46;
            if ( *(_QWORD **)(*v46 + 8LL) != v46 )
              __fastfail(3u);
            *v45 = v61;
            *((_QWORD *)i + 28) = v46;
            *(_QWORD *)(v61 + 8) = v45;
            *v46 = v45;
            _bittestandset((signed __int32 *)(v18 + 22684), v43);
          }
          else
          {
            v47 = (_QWORD *)v46[1];
            if ( (_QWORD *)*v47 != v46 )
              __fastfail(3u);
            *v45 = v46;
            *((_QWORD *)i + 28) = v47;
            *v47 = v45;
            v46[1] = v45;
          }
          LODWORD(v25) = *(_DWORD *)(v18 + 22680) | (1 << v43);
          *(_DWORD *)(v18 + 22680) = v25;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
          *((_QWORD *)i + 8) = 0LL;
        }
        return v25;
      }
      if ( v36[388] == 2 )
        v36[565] = 1;
      if ( (i[2] & 4) != 0 )
      {
        if ( (unsigned __int8)KiIsThreadRankNonZero(i, v18) )
          v40 = 1;
        else
          v40 = i[195];
      }
      else
      {
        v40 = i[195];
      }
      **(_BYTE **)(v18 + 56) = v40;
      *(_QWORD *)(v18 + 16) = i;
      LODWORD(v25) = (unsigned __int8)i[388];
      if ( (_BYTE)v25 == 1 )
      {
        LODWORD(v25) = *((_DWORD *)i + 502) - *((_DWORD *)i + 109) + MEMORY[0xFFFFF78000000320];
        *((_DWORD *)i + 502) = v25;
      }
      i[388] = 3;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
      *((_QWORD *)i + 8) = 0LL;
      v26 = a1 == v18;
      goto LABEL_43;
    }
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v18, *(_QWORD *)(v18 + 16), i, &v69) )
        goto LABEL_89;
    }
    else if ( i[195] <= v35[195] )
    {
      goto LABEL_90;
    }
    LOBYTE(a4) = 1;
    v35[565] = 1;
    KiUpdateThreadState(v18, i, 3LL, a4);
    v35[388] = 7;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    *((_QWORD *)i + 8) = 0LL;
  }
  v21 = *(_QWORD *)(v18 + 16);
  if ( v21 && v21 != *(_QWORD *)(v18 + 24) )
    __fastfail(0x1Eu);
  if ( (i[2] & 4) != 0 )
  {
    if ( (char)i[195] < 16
      && *((_QWORD *)i + 13)
      && (v38 = *((_QWORD *)i + 13)) != 0
      && (v39 = *(unsigned int *)(v18 + 1624) + v38) != 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)i, v39, (_DWORD)p_AbPropagateBoostsList, 0, 0LL) )
    {
      v22 = 1;
    }
    else
    {
      v22 = i[195];
    }
  }
  else
  {
    v22 = i[195];
  }
  **(_BYTE **)(v18 + 56) = v22;
  *(_QWORD *)(v18 + 16) = i;
  if ( i[388] == 1 )
    *((_DWORD *)i + 502) = *((_DWORD *)i + 502) - *((_DWORD *)i + 109) + MEMORY[0xFFFFF78000000320];
  i[388] = 3;
  v23 = *(unsigned __int8 *)(v18 + 35);
  v20 = *(_QWORD *)(v18 + 1600);
  *(_BYTE *)(v18 + 11755) = 0;
  if ( (v23 & 1) != 0 )
    __fastfail(0x21u);
  v24 = v23 + 1;
  *(_BYTE *)(v18 + 35) = v24;
  if ( v24 == 1 )
    _interlockedbittestandreset64((volatile signed __int32 *)v20, *(unsigned __int8 *)(v18 + 1617));
  _interlockedbittestandreset64((volatile signed __int32 *)(v20 + 16), *(unsigned __int8 *)(v18 + 1617));
  v25 = ~*(_QWORD *)(v18 + 24920);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 8), v25);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
  *((_QWORD *)i + 8) = 0LL;
  if ( v18 != a1 )
  {
    v26 = *(_BYTE *)(v18 + 7) == 0;
LABEL_43:
    if ( !v26 )
    {
      v27 = KeGetCurrentPrcb();
      LOBYTE(v20) = 2;
      ++v27->SynchCounters.IpiSendSoftwareInterruptCount;
      LODWORD(v25) = HalSendSoftwareInterrupt(v19, v20);
    }
  }
  return v25;
}
