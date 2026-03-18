/*
 * XREFs of KiDeferredReadyThread @ 0x14004CE40
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x14000B26C (KiSetThreadSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x14000B7FC (KeUpdateProcessSharedReadyQueueAffinity.c)
 *     KiFastReadyThread @ 0x14000DBF8 (KiFastReadyThread.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400A15C0 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1400F38BC (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1400F4204 (KiAbApplyWakeupBoost.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     KiReadyThread @ 0x1401109F0 (KiReadyThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400EBAC0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1400EC79C (KiScheduleNextForegroundBoost.c)
 *     KiAddThreadToReadyQueue @ 0x1400ED780 (KiAddThreadToReadyQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiHeteroChooseTargetProcessor @ 0x140206FF4 (KiHeteroChooseTargetProcessor.c)
 */

unsigned __int64 __fastcall KiDeferredReadyThread(__int64 a1, _BYTE *a2)
{
  char v4; // r12
  unsigned __int64 v5; // rbp
  int v6; // r15d
  char v7; // r14
  unsigned int v8; // edi
  char v9; // r8
  unsigned __int8 v10; // dl
  char v11; // al
  unsigned int v12; // eax
  int v13; // edx
  char v14; // di
  struct _KPRCB *v15; // rcx
  struct _SINGLE_LIST_ENTRY *v16; // rdx
  _SINGLE_LIST_ENTRY *v17; // r8
  __int64 v18; // rax
  bool v19; // di
  char v20; // di
  unsigned int v21; // eax
  char v22; // r8
  unsigned __int8 v23; // dl
  char v24; // al
  unsigned int v25; // eax
  int v26; // edx
  char v27; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v29; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char v31; // dl
  int v32; // r10d
  int v33; // esi
  int v34; // r9d
  char v35; // cl
  struct _KPRCB *v36; // rcx
  struct _SINGLE_LIST_ENTRY *v37; // rdx
  _SINGLE_LIST_ENTRY *v38; // r8
  char v39; // dl
  char v40; // cl
  char v41; // r8
  char v42; // si
  struct _KPRCB *v43; // rcx
  struct _SINGLE_LIST_ENTRY *v44; // rdx
  _SINGLE_LIST_ENTRY *v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int8 v49; // r14
  unsigned __int64 v50; // rcx
  unsigned __int16 v51; // dx
  __int64 v52; // rsi
  unsigned __int64 v53; // rcx
  unsigned int v54; // edi
  unsigned int v55; // ebp
  __int64 v56; // rdx
  __int64 v57; // rcx
  _BYTE *v58; // rdi
  char v59; // cl
  __int64 v60; // rdx
  __int64 v61; // rdx
  int ThreadEffectiveRankNonZero; // eax
  _BYTE *v63; // rdi
  unsigned __int64 result; // rax
  bool v65; // zf
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  int v70; // eax
  int v71; // eax
  struct _KPRCB *v72; // rax
  __int64 v73; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int16 v75; // [rsp+48h] [rbp-40h]
  BOOL v76; // [rsp+98h] [rbp+10h] BYREF
  int v77; // [rsp+A0h] [rbp+18h]
  int v78; // [rsp+A8h] [rbp+20h]

  v4 = 1;
  while ( 1 )
  {
    v5 = *((_QWORD *)a2 + 9);
    v6 = 0;
    v7 = a2[566] == 1 ? a2[567] : 0;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2 + 16, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( *((_QWORD *)a2 + 8) );
    }
    if ( a2[566] )
    {
      if ( (char)a2[195] < 16 )
      {
        v20 = 0;
        v21 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)a2 + 109);
        if ( v5 >= *((_QWORD *)a2 + 4) )
        {
          v20 = 4;
          if ( v21 < 2 )
            v20 = 5;
        }
        if ( (v20 & 4) != 0 || (char)a2[563] >= 14 || !a2[564] && v21 >= 2 )
        {
          v22 = a2[195];
          v20 |= 8u;
          if ( v22 < 16 )
          {
            v23 = a2[564];
            v24 = -1 - (v23 >> 4) - (v23 & 0xF) + v22;
            if ( v24 < (char)a2[563] )
              v24 = a2[563];
            v22 = v24;
            if ( v23 )
            {
              if ( (v23 & 0xF) != 0 )
                *((_DWORD *)a2 + 355) = MEMORY[0xFFFFF78000000320];
              a2[564] = 0;
            }
            v25 = *((_DWORD *)a2 + 352);
            if ( v25 )
            {
              _BitScanReverse((unsigned int *)&v26, v25);
              if ( v22 < v26 )
                v22 = v26;
              v78 = v26;
            }
          }
          v27 = v22;
          if ( KiAbEnabled )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            if ( v22 > (char)a2[195] )
            {
              if ( a2[793] )
              {
                v29 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
                if ( *((_QWORD *)a2 + 172) == 1LL )
                {
                  p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
                  if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                  {
                    v29->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = v29;
                    _InterlockedIncrement16((volatile signed __int16 *)a2 + 708);
                    KiAbQueueAutoBoostDpc(CurrentPrcb);
                  }
                }
              }
            }
          }
          a2[195] = v27;
        }
        if ( *(_BYTE *)(*((_QWORD *)a2 + 68) + 1490LL) == 2 )
          v20 |= 2u;
        if ( (v20 & 1) != 0
          || (*((_DWORD *)a2 + 30) & 2) != 0
          || (v31 = a2[564]) != 0 && ((v31 & 0xF0) != 0 || (v20 & 2) == 0) )
        {
          if ( (v20 & 6) == 6 && (*((_DWORD *)a2 + 30) & 2) == 0 )
            KiScheduleNextForegroundBoost(a2);
        }
        else
        {
          v32 = (char)a2[563];
          v33 = v7 + v32;
          if ( (v20 & 2) != 0 )
            v33 += (char)PsPrioritySeparation;
          if ( v33 >= 16 )
            v33 = 15;
          v34 = (char)a2[195];
          if ( v33 > v34 )
          {
            v35 = 0;
            if ( v33 > v7 + v32 )
              v35 = v33 - v7 - v32;
            v65 = KiAbEnabled == 0;
            a2[564] = v31 ^ (v35 ^ v31) & 0xF;
            if ( !v65 )
            {
              v36 = KeGetCurrentPrcb();
              if ( (char)v33 > (char)v34 )
              {
                if ( a2[793] )
                {
                  v37 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
                  if ( *((_QWORD *)a2 + 172) == 1LL )
                  {
                    v38 = &v36->AbPropagateBoostsList;
                    if ( v36 != (struct _KPRCB *)-25656LL )
                    {
                      v37->Next = v38->Next;
                      v38->Next = v37;
                      _InterlockedIncrement16((volatile signed __int16 *)a2 + 708);
                      KiAbQueueAutoBoostDpc(v36);
                    }
                  }
                }
              }
            }
            a2[195] = v33;
          }
        }
        v19 = (v20 & 8) != 0;
      }
      else
      {
        v19 = 1;
      }
      if ( a2[566] == 2 )
      {
        v39 = a2[195];
        v40 = a2[567];
        if ( v39 >= v40 || v39 >= 13 || (*((_DWORD *)a2 + 30) & 2) != 0 )
        {
          if ( !v19 )
          {
            v53 = *((_QWORD *)a2 + 4);
            if ( v5 > v53 || v53 - v5 < (unsigned int)KiLockQuantumTarget )
              *((_QWORD *)a2 + 4) = (unsigned int)KiLockQuantumTarget + v5;
            goto LABEL_108;
          }
          goto LABEL_105;
        }
        v41 = a2[567];
        if ( v40 >= 13 )
          v41 = 13;
        v42 = v41;
        a2[564] += 16 * (v41 - v39);
        if ( KiAbEnabled )
        {
          v43 = KeGetCurrentPrcb();
          if ( v41 > v39 )
          {
            if ( a2[793] )
            {
              v44 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
              if ( *((_QWORD *)a2 + 172) == 1LL )
              {
                v45 = &v43->AbPropagateBoostsList;
                if ( v43 != (struct _KPRCB *)-25656LL )
                {
                  v44->Next = v45->Next;
                  v45->Next = v44;
                  _InterlockedIncrement16((volatile signed __int16 *)a2 + 708);
                  KiAbQueueAutoBoostDpc(v43);
                }
              }
            }
          }
        }
        v46 = *((_QWORD *)a2 + 4);
        v47 = (unsigned int)KiLockQuantumTarget;
        a2[195] = v42;
        if ( v5 > v46 || v46 - v5 < v47 )
          *((_QWORD *)a2 + 4) = v47 + v5;
      }
      if ( v19 )
        goto LABEL_105;
    }
    else
    {
      if ( v5 >= *((_QWORD *)a2 + 4) )
      {
        v9 = a2[195];
        if ( v9 < 16 )
        {
          v10 = a2[564];
          v11 = -1 - (v10 >> 4) - (v10 & 0xF) + v9;
          if ( v11 < (char)a2[563] )
            v11 = a2[563];
          v9 = v11;
          if ( v10 )
          {
            if ( (v10 & 0xF) != 0 )
              *((_DWORD *)a2 + 355) = MEMORY[0xFFFFF78000000320];
            a2[564] = 0;
          }
          v12 = *((_DWORD *)a2 + 352);
          if ( v12 )
          {
            _BitScanReverse((unsigned int *)&v13, v12);
            if ( v9 < v13 )
              v9 = v13;
            v77 = v13;
          }
        }
        v14 = v9;
        if ( KiAbEnabled )
        {
          v15 = KeGetCurrentPrcb();
          if ( v9 > (char)a2[195] )
          {
            if ( a2[793] )
            {
              v16 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
              if ( *((_QWORD *)a2 + 172) == 1LL )
              {
                v17 = &v15->AbPropagateBoostsList;
                if ( v15 != (struct _KPRCB *)-25656LL )
                {
                  v16->Next = v17->Next;
                  v17->Next = v16;
                  _InterlockedIncrement16((volatile signed __int16 *)a2 + 708);
                  KiAbQueueAutoBoostDpc(v15);
                }
              }
            }
          }
        }
        v18 = *((_QWORD *)a2 + 68);
        a2[195] = v14;
        if ( *(_BYTE *)(v18 + 1490) == 2 && (char)a2[195] < 16 && (*((_DWORD *)a2 + 30) & 2) == 0 )
          KiScheduleNextForegroundBoost(a2);
LABEL_105:
        v48 = v5 + KiCyclesPerClockQuantum * (unsigned int)(unsigned __int8)a2[651];
        if ( (*((_DWORD *)a2 + 30) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)a2 + 30, 4u);
        *((_QWORD *)a2 + 4) = v48;
        goto LABEL_108;
      }
      v6 = (unsigned __int8)a2[565];
    }
LABEL_108:
    *(_WORD *)(a2 + 565) = 0;
    v49 = _bittestandreset((signed __int32 *)a2 + 29, 1u);
    if ( *((_QWORD *)a2 + 71) != KiCpuSetSequence && (*((_DWORD *)a2 + 29) & 8) == 0 )
      KiComputeThreadAffinity(a2);
    v50 = *((_QWORD *)a2 + 72);
    v51 = *((_WORD *)a2 + 292);
    v75 = v51;
    v74 = v50;
    if ( ((v50 - 1) & v50) != 0 )
    {
      if ( a2[125] )
        v52 = KiHeteroChooseTargetProcessor(a1, a2, &v74, &v76);
      else
        v52 = KiChooseTargetProcessor(a1, a2, &v74, &v76);
    }
    else
    {
      _BitScanReverse64(&v50, v50);
      v54 = 0;
      v52 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v51 + (unsigned int)v50]];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 48), 0LL) )
      {
        do
        {
          if ( (++v54 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v54);
        }
        while ( *(_QWORD *)(v52 + 48) );
      }
      v76 = (*(_BYTE *)(v52 + 35) & 1) == 0;
    }
    v55 = *(_DWORD *)(v52 + 36);
    *((_DWORD *)a2 + 134) = v55;
    v56 = *((_QWORD *)a2 + 13);
    if ( v56 )
      v56 += *(unsigned int *)(v52 + 1624);
    v73 = v56;
    if ( v56 )
    {
      v57 = v56;
      while ( (*(_BYTE *)(v57 + 112) & 2) == 0 )
      {
        v57 = *(_QWORD *)(v57 + 392);
        if ( !v57 )
          goto LABEL_137;
      }
      if ( !*((_DWORD *)a2 + 121) && a2[390] != 1 )
        goto LABEL_155;
    }
LABEL_137:
    if ( v76 )
      break;
    v58 = *(_BYTE **)(v52 + 16);
    if ( !v58 )
    {
      v63 = *(_BYTE **)(v52 + 8);
      if ( KiGroupSchedulingEnabled )
      {
        if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v52, *(_QWORD *)(v52 + 8), a2, &v73) )
        {
LABEL_154:
          LODWORD(v56) = v73;
LABEL_155:
          result = KiAddThreadToReadyQueue(v52, v56, (_DWORD)a2, v49, v6);
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 48), 0LL);
          *((_QWORD *)a2 + 8) = 0LL;
          return result;
        }
      }
      else if ( a2[195] <= v63[195] )
      {
        goto LABEL_155;
      }
      if ( v63[388] == 2 )
        v63[565] = 1;
      if ( (a2[2] & 4) != 0 )
      {
        if ( (char)a2[195] >= 16
          || !*((_QWORD *)a2 + 13)
          || (v56 = *((_QWORD *)a2 + 13)) == 0
          || (v56 += *(unsigned int *)(v52 + 1624)) == 0
          || !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v56, 0LL) )
        {
          v4 = a2[195];
        }
      }
      else
      {
        v4 = a2[195];
      }
      result = *(_QWORD *)(v52 + 56);
      *(_BYTE *)result = v4;
      *(_QWORD *)(v52 + 16) = a2;
      a2[388] = 3;
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 48), 0LL);
      *((_QWORD *)a2 + 8) = 0LL;
      v65 = a1 == v52;
LABEL_191:
      if ( !v65 )
      {
        v72 = KeGetCurrentPrcb();
        LOBYTE(v56) = 2;
        ++v72->SynchCounters.IpiSendSoftwareInterruptCount;
        return HalSendSoftwareInterrupt(v55, v56);
      }
      return result;
    }
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v52, *(_QWORD *)(v52 + 16), a2, &v73) )
        goto LABEL_154;
    }
    else if ( a2[195] <= v58[195] )
    {
      goto LABEL_155;
    }
    v58[565] = 1;
    if ( (a2[2] & 4) != 0 )
    {
      if ( (char)a2[195] >= 16
        || !*((_QWORD *)a2 + 13)
        || (v60 = *((_QWORD *)a2 + 13)) == 0
        || (v61 = *(unsigned int *)(v52 + 1624) + v60) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, v61, 0LL),
            v59 = 1,
            !ThreadEffectiveRankNonZero) )
      {
        v59 = a2[195];
      }
    }
    else
    {
      v59 = a2[195];
    }
    **(_BYTE **)(v52 + 56) = v59;
    *(_QWORD *)(v52 + 16) = a2;
    a2[388] = 3;
    v58[388] = 7;
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 48), 0LL);
    *((_QWORD *)a2 + 8) = 0LL;
    a2 = v58;
  }
  v66 = *(_QWORD *)(v52 + 16);
  if ( v66 && v66 != *(_QWORD *)(v52 + 24) )
    __fastfail(0x1Eu);
  if ( (a2[2] & 4) != 0 )
  {
    if ( (char)a2[195] < 16
      && *((_QWORD *)a2 + 13)
      && (v67 = *((_QWORD *)a2 + 13)) != 0
      && (v68 = *(unsigned int *)(v52 + 1624) + v67) != 0
      && (char)a2[195] < 16
      && (*((_DWORD *)a2 + 30) & 0x100) == 0 )
    {
      v69 = v68;
      while ( (*(_BYTE *)(v69 + 112) & 2) == 0 )
      {
        v69 = *(_QWORD *)(v69 + 392);
        if ( !v69 )
        {
          while ( !*(_DWORD *)(v68 + 116) )
          {
            v68 = *(_QWORD *)(v68 + 392);
            if ( !v68 )
              goto LABEL_184;
          }
          break;
        }
      }
    }
    else
    {
LABEL_184:
      v4 = a2[195];
    }
  }
  else
  {
    v4 = a2[195];
  }
  **(_BYTE **)(v52 + 56) = v4;
  *(_QWORD *)(v52 + 16) = a2;
  a2[388] = 3;
  v70 = *(unsigned __int8 *)(v52 + 35);
  v56 = *(_QWORD *)(v52 + 1600);
  *(_BYTE *)(v52 + 11755) = 0;
  if ( (v70 & 1) != 0 )
    __fastfail(0x21u);
  v71 = v70 + 1;
  *(_BYTE *)(v52 + 35) = v71;
  if ( v71 == 1 )
    _interlockedbittestandreset64((volatile signed __int32 *)v56, *(unsigned __int8 *)(v52 + 1617));
  _interlockedbittestandreset64((volatile signed __int32 *)(v56 + 16), *(unsigned __int8 *)(v52 + 1617));
  result = ~*(_QWORD *)(v52 + 24792);
  _InterlockedAnd64((volatile signed __int64 *)(v56 + 8), result);
  _InterlockedAnd64((volatile signed __int64 *)(v52 + 48), 0LL);
  *((_QWORD *)a2 + 8) = 0LL;
  if ( v52 != a1 )
  {
    v65 = *(_BYTE *)(v52 + 7) == 0;
    goto LABEL_191;
  }
  return result;
}
