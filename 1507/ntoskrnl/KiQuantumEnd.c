/*
 * XREFs of KiQuantumEnd @ 0x1400A25A0
 * Callers:
 *     KiIdleLoop @ 0x140186810 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1400EC79C (KiScheduleNextForegroundBoost.c)
 *     KiShouldScanSharedReadyQueue @ 0x14011B3C4 (KiShouldScanSharedReadyQueue.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     KiGenerateHeteroSets @ 0x140206EF4 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x140206F38 (KiGetHeteroCpuPolicyThread.c)
 *     EtwTraceAntiStarvationBoost @ 0x14025CC50 (EtwTraceAntiStarvationBoost.c)
 */

_KTHREAD *KiQuantumEnd()
{
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *v1; // r14
  __int64 CurrentThread; // r13
  unsigned __int64 v3; // r14
  unsigned int v4; // ebx
  int v5; // ebx
  char v6; // bp
  unsigned __int8 v7; // dl
  char v8; // al
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // ebx
  char v12; // bl
  bool v13; // si
  struct _KPRCB *v14; // r8
  struct _SINGLE_LIST_ENTRY *v15; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int HeteroCpuPolicyThread; // eax
  _KNODE *v24; // rcx
  _KNODE *ParentNode; // rax
  char v26; // si
  int v27; // r15d
  int v28; // ebp
  bool v29; // sf
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r12
  char QueueIndex; // si
  unsigned int v32; // ebx
  char v33; // al
  unsigned int v34; // ebx
  int v35; // r13d
  int v36; // r11d
  unsigned int v37; // ecx
  _LIST_ENTRY *v38; // r10
  _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY **p_Blink; // r8
  _KTHREAD **v41; // rcx
  _KTHREAD ***v42; // rdx
  _KTHREAD ***v43; // rax
  _KLOCK_ENTRY *v44; // rsi
  _RTL_BALANCED_NODE *Min; // rbp
  char v46; // r14
  unsigned int v47; // ebx
  int v48; // edx
  unsigned int v49; // ebx
  struct _KPRCB *v50; // r8
  struct _SINGLE_LIST_ENTRY *v51; // rcx
  _SINGLE_LIST_ENTRY *v52; // rdx
  _RTL_BALANCED_NODE *LockState; // rcx
  unsigned __int64 v54; // r8
  unsigned int ReadySummary; // r11d
  unsigned int v56; // esi
  int v57; // r11d
  unsigned int v58; // r12d
  unsigned int v59; // ebx
  unsigned int v60; // r11d
  int v61; // ebx
  unsigned int v62; // ecx
  int v63; // r12d
  _LIST_ENTRY *v64; // r10
  _LIST_ENTRY *v65; // r9
  struct _LIST_ENTRY **v66; // r8
  _KTHREAD **v67; // rcx
  _KTHREAD ***v68; // rdx
  _KTHREAD ***v69; // rax
  int v70; // eax
  _KLOCK_ENTRY *v71; // rsi
  char v72; // r15
  _RTL_BALANCED_NODE *v73; // rbp
  unsigned int v74; // ebx
  int v75; // edx
  unsigned int v76; // ebx
  struct _KPRCB *v77; // r8
  struct _SINGLE_LIST_ENTRY *v78; // rcx
  _SINGLE_LIST_ENTRY *v79; // rdx
  _RTL_BALANCED_NODE *v80; // rcx
  unsigned __int64 v81; // r8
  unsigned int v82; // ebx
  __int64 NextThread; // rbx
  char v84; // cl
  __int64 v85; // rdx
  __int64 v86; // rdx
  int v87; // eax
  char v88; // r8
  _KTHREAD *v89; // rcx
  _KTHREAD *result; // rax
  char v91; // cl
  __int64 v92; // rdx
  __int64 v93; // rdx
  int v94; // eax
  char v95; // r8
  _KTHREAD *v96; // rbx
  _KLOCK_ENTRY *v97; // rdx
  unsigned int v98; // ebx
  unsigned __int64 v99; // rax
  __int64 v100; // r10
  unsigned __int64 v101; // rcx
  char v102; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v104; // r11
  __int64 v105; // rcx
  __int64 v106; // rcx
  _QWORD *i; // rcx
  char v108; // cl
  __int64 v109; // rdx
  __int64 v110; // rdx
  int v111; // eax
  char v112; // r8
  __int64 v113; // r8
  _KTHREAD *v114; // [rsp+30h] [rbp-88h] BYREF
  int v115; // [rsp+38h] [rbp-80h]
  __int64 v116; // [rsp+40h] [rbp-78h] BYREF
  __int64 v117; // [rsp+48h] [rbp-70h]
  unsigned int v118; // [rsp+50h] [rbp-68h]
  int v119; // [rsp+54h] [rbp-64h]
  __int64 v120; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v121; // [rsp+60h] [rbp-58h]
  _KTHREAD *v122; // [rsp+68h] [rbp-50h]
  unsigned __int8 v123; // [rsp+C0h] [rbp+8h]
  int v124; // [rsp+C8h] [rbp+10h]
  int v125; // [rsp+D0h] [rbp+18h]
  int v126; // [rsp+D8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  v123 = 0;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  v117 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v3 = *(_QWORD *)(CurrentThread + 72);
    if ( v3 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v4 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
        {
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v3 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x80u) == 0 || *(char *)(CurrentThread + 195) < 16 )
        {
          v6 = *(_BYTE *)(CurrentThread + 195);
          if ( v6 < 16 )
          {
            v7 = *(_BYTE *)(CurrentThread + 564);
            v8 = -1 - (v7 >> 4) - (v7 & 0xF) + v6;
            if ( v8 < *(char *)(CurrentThread + 563) )
              v8 = *(_BYTE *)(CurrentThread + 563);
            v6 = v8;
            if ( v7 )
            {
              if ( (v7 & 0xF) != 0 )
                *(_DWORD *)(CurrentThread + 1420) = MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(CurrentThread + 564) = 0;
            }
            v9 = *(_DWORD *)(CurrentThread + 1408);
            if ( v9 )
            {
              _BitScanReverse((unsigned int *)&v10, v9);
              if ( v6 < v10 )
                v6 = v10;
              v119 = v10;
            }
          }
          v11 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v11);
            }
            while ( CurrentPrcb->PrcbLock );
          }
          v12 = v6;
          v13 = CurrentPrcb->NextThread == 0LL;
          if ( KiAbEnabled )
          {
            v14 = KeGetCurrentPrcb();
            if ( v6 > *(char *)(CurrentThread + 195) )
            {
              if ( *(_BYTE *)(CurrentThread + 793) )
              {
                v15 = (struct _SINGLE_LIST_ENTRY *)(CurrentThread + 1376);
                if ( *(_QWORD *)(CurrentThread + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = &v14->AbPropagateBoostsList;
                  if ( v14 != (struct _KPRCB *)-25656LL )
                  {
                    v15->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = v15;
                    _InterlockedIncrement16((volatile signed __int16 *)(CurrentThread + 1416));
                    KiAbQueueAutoBoostDpc(v14);
                  }
                }
              }
            }
          }
          *(_BYTE *)(CurrentThread + 195) = v6;
          if ( v13 )
          {
            if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
            {
              if ( v6 >= 16
                || !*(_QWORD *)(CurrentThread + 104)
                || (v17 = *(_QWORD *)(CurrentThread + 104)) == 0
                || (v18 = CurrentPrcb->ScbOffset + v17) == 0
                || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(CurrentThread, v18, 0LL),
                    v12 = v20 + 1,
                    !ThreadEffectiveRankNonZero) )
              {
                v12 = *(_BYTE *)(CurrentThread + 195);
              }
            }
            *CurrentPrcb->PriorityState = v12;
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v5 = *(unsigned __int8 *)(CurrentThread + 651);
          v123 = 1;
          if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 544) + 1490LL) == 2
            && *(char *)(CurrentThread + 195) < 16
            && (*(_DWORD *)(CurrentThread + 120) & 2) == 0 )
          {
            KiScheduleNextForegroundBoost(CurrentThread);
          }
        }
        else
        {
          v5 = 127;
        }
        v21 = v3 + (unsigned int)(v5 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 4u);
        *(_QWORD *)(CurrentThread + 32) = v21;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v22 = KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)];
          if ( (*(_QWORD *)(*(_QWORD *)(v22 + 1600) + 8LL) & *(_QWORD *)(*(_QWORD *)(v22 + 1600) + 80LL) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
          }
        }
      }
      if ( *(_BYTE *)(CurrentThread + 125) )
      {
        if ( (HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(CurrentThread, CurrentPrcb),
              KiGenerateHeteroSets(
                CurrentPrcb->ParentNode,
                *(_QWORD *)(CurrentThread + 576),
                HeteroCpuPolicyThread,
                (unsigned int)&v116,
                (__int64)&v120),
              (v116 & CurrentPrcb->GroupSetMember) == 0)
          && ((v24 = *(_KNODE **)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 1600),
               (v24->IdleNonParkedCpuSet & v116) != 0)
           || (ParentNode = CurrentPrcb->ParentNode, ParentNode != v24) && (ParentNode->IdleNonParkedCpuSet & v116) != 0)
          || (v120 & CurrentPrcb->GroupSetMember) == 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
        }
      }
      v1 = 0LL;
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
    else
    {
      v1 = 0LL;
    }
  }
  v26 = 0;
  v125 = 10;
  v27 = 16;
  v28 = MEMORY[0xFFFFF78000000320];
  v29 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v115 = MEMORY[0xFFFFF78000000320];
  if ( v29 )
  {
    v26 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        QueueIndex = SharedReadyQueue->QueueIndex;
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v32);
          }
          while ( SharedReadyQueue->Lock );
        }
        if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
        {
          v34 = __ROR4__(SharedReadyQueue->ReadySummary & 0x7FFE, QueueIndex);
          v35 = 10;
          v36 = MEMORY[0xFFFFF78000000320];
          do
          {
            _BitScanForward(&v37, v34);
            v34 ^= 1 << v37;
            v118 = v37;
            v38 = &SharedReadyQueue->ReadyListHead[((_BYTE)v37 + QueueIndex) & 0x1F];
            v126 = ((_BYTE)v37 + QueueIndex) & 0x1F;
            Flink = v38->Flink;
            do
            {
              p_Blink = &Flink[-14].Blink;
              Flink = Flink->Flink;
              if ( v36 - 300 - *((_DWORD *)p_Blink + 109) > 0 )
              {
                v41 = (_KTHREAD **)(p_Blink + 27);
                v42 = (_KTHREAD ***)p_Blink[27];
                v43 = (_KTHREAD ***)p_Blink[28];
                if ( v42[1] != (_KTHREAD **)(p_Blink + 27) || *v43 != v41 )
                  __fastfail(3u);
                *v43 = (_KTHREAD **)v42;
                v42[1] = (_KTHREAD **)v43;
                if ( v43 == v42 )
                  SharedReadyQueue->ReadySummary ^= 1 << v126;
                *((_BYTE *)p_Blink + 388) = 7;
                *v41 = v1;
                --v35;
                v1 = (_KTHREAD *)(p_Blink + 27);
              }
              --v27;
            }
            while ( Flink != v38 && v35 && v27 );
          }
          while ( v34 && v35 && v27 );
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          if ( v1 )
          {
            do
            {
              v44 = &v1[-1].LockEntries[5];
              Min = v1[-1].LockEntries[5].WaiterTree.Min;
              v122 = *(_KTHREAD **)&v1->Header.Lock;
              v46 = 0;
              v47 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&v44->WaiterTree, 0LL) )
              {
                do
                {
                  if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v47);
                }
                while ( v44->WaiterTree.Root );
              }
              v48 = SBYTE3(v44[2].FreeListEntry.Next);
              v49 = v48;
              if ( v48 < 15 )
              {
                v46 = 1;
                BYTE4(v44[5].EntryLock) += 16 * (15 - v48);
                if ( KiAbEnabled )
                {
                  v50 = KeGetCurrentPrcb();
                  if ( v44[8].ThreadLocalFlags )
                  {
                    v51 = (struct _SINGLE_LIST_ENTRY *)&v44[14].32;
                    if ( *(_QWORD *)&v44[14].LockState.0 == 1LL )
                    {
                      v52 = &v50->AbPropagateBoostsList;
                      if ( v50 != (struct _KPRCB *)-25656LL )
                      {
                        v51->Next = v52->Next;
                        v52->Next = v51;
                        _InterlockedIncrement16((volatile signed __int16 *)&v44[14].WaiterTree.Min);
                        KiAbQueueAutoBoostDpc(v50);
                      }
                    }
                  }
                }
                LockState = (_RTL_BALANCED_NODE *)v44->LockState.LockState;
                v54 = (unsigned int)KiLockQuantumTarget;
                BYTE3(v44[2].FreeListEntry.Next) = 15;
                if ( Min > LockState || (char *)LockState - (char *)Min < v54 )
                  v44->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)((char *)Min + v54);
              }
              v44->WaiterTree.Root = 0LL;
              if ( v46 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v44, v49);
              KiDeferredReadyThread((__int64)CurrentPrcb, v44);
              v1 = v122;
            }
            while ( v122 );
          }
          if ( v27 && v35 )
          {
            v33 = 1;
          }
          else
          {
            v33 = v126 + 1;
            if ( (unsigned int)(v126 + 1) > 0xE )
              v33 = 1;
          }
          CurrentThread = v117;
          v1 = 0LL;
          v27 = 16;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          v33 = 1;
        }
        v26 = 1;
        v28 = v115;
        SharedReadyQueue->QueueIndex = v33;
      }
    }
  }
  v114 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v123, &v114);
  }
  else
  {
    v59 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v59);
      }
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( v26 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v28 + 75;
    if ( (ReadySummary & 0x7FFE) != 0 )
    {
      v56 = CurrentPrcb->QueueIndex;
      v57 = ReadySummary & 0x7FFE;
      if ( v57 )
      {
        v60 = __ROR4__(v57, v56);
        v61 = MEMORY[0xFFFFF78000000320];
        do
        {
          _BitScanForward(&v62, v60);
          v60 ^= 1 << v62;
          v121 = v62;
          v63 = ((_BYTE)v62 + (_BYTE)v56) & 0x1F;
          v64 = &CurrentPrcb->DispatcherReadyListHead[((_BYTE)v62 + (_BYTE)v56) & 0x1F];
          v65 = v64->Flink;
          do
          {
            v66 = &v65[-14].Blink;
            v65 = v65->Flink;
            if ( v61 - 300 - *((_DWORD *)v66 + 109) <= 0 )
            {
              v70 = v125;
            }
            else
            {
              v67 = (_KTHREAD **)(v66 + 27);
              v68 = (_KTHREAD ***)v66[27];
              v69 = (_KTHREAD ***)v66[28];
              if ( v68[1] != (_KTHREAD **)(v66 + 27) || *v69 != v67 )
                __fastfail(3u);
              *v69 = (_KTHREAD **)v68;
              v68[1] = (_KTHREAD **)v69;
              if ( v69 == v68 )
                CurrentPrcb->ReadySummary ^= 1 << v63;
              *((_BYTE *)v66 + 388) = 7;
              *v67 = v1;
              v1 = (_KTHREAD *)(v66 + 27);
              v70 = --v125;
            }
            v124 = --v27;
          }
          while ( v65 != v64 && v70 && v27 );
        }
        while ( v60 && v70 && v27 );
        if ( v1 )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          do
          {
            v71 = &v1[-1].LockEntries[5];
            v72 = 0;
            v73 = v1[-1].LockEntries[5].WaiterTree.Min;
            v74 = 0;
            v1 = *(_KTHREAD **)&v1->Header.Lock;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v71->WaiterTree, 0LL) )
            {
              do
              {
                if ( (++v74 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v74);
              }
              while ( v71->WaiterTree.Root );
            }
            v75 = SBYTE3(v71[2].FreeListEntry.Next);
            v76 = v75;
            if ( v75 < 15 )
            {
              v72 = 1;
              BYTE4(v71[5].EntryLock) += 16 * (15 - v75);
              if ( KiAbEnabled )
              {
                v77 = KeGetCurrentPrcb();
                if ( v71[8].ThreadLocalFlags )
                {
                  v78 = (struct _SINGLE_LIST_ENTRY *)&v71[14].32;
                  if ( *(_QWORD *)&v71[14].LockState.0 == 1LL )
                  {
                    v79 = &v77->AbPropagateBoostsList;
                    if ( v77 != (struct _KPRCB *)-25656LL )
                    {
                      v78->Next = v79->Next;
                      v79->Next = v78;
                      _InterlockedIncrement16((volatile signed __int16 *)&v71[14].WaiterTree.Min);
                      KiAbQueueAutoBoostDpc(v77);
                    }
                  }
                }
              }
              v80 = (_RTL_BALANCED_NODE *)v71->LockState.LockState;
              v81 = (unsigned int)KiLockQuantumTarget;
              BYTE3(v71[2].FreeListEntry.Next) = 15;
              if ( v73 > v80 || (char *)v80 - (char *)v73 < v81 )
                v71->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)((char *)v73 + v81);
            }
            v71->WaiterTree.Root = 0LL;
            if ( v72 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v71, v76);
            KiDeferredReadyThread((__int64)CurrentPrcb, v71);
          }
          while ( v1 );
          v82 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
            {
              if ( (++v82 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v82);
            }
            while ( CurrentPrcb->PrcbLock );
          }
          v27 = v124;
        }
        if ( v27 && v125 )
        {
          v58 = 1;
        }
        else
        {
          v58 = v63 + 1;
          if ( v58 > 0xE )
            v58 = 1;
        }
      }
      else
      {
        v58 = 1;
      }
      CurrentPrcb->QueueIndex = v58;
    }
  }
  while ( 1 )
  {
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v123 )
        *(_BYTE *)(CurrentThread + 565) = 0;
    }
    else
    {
      if ( v123 )
      {
        NextThread = KiSelectReadyThread(*(char *)(CurrentThread + 195), (__int64)CurrentPrcb);
        if ( NextThread )
          goto LABEL_203;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x800) == 0 )
        goto LABEL_217;
      KiSelectNextThread(CurrentPrcb, &v114);
      NextThread = (__int64)CurrentPrcb->NextThread;
    }
    if ( !NextThread )
      goto LABEL_217;
LABEL_203:
    if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread
      || *(_QWORD *)(NextThread + 568) == KiCpuSetSequence
      || (*(_DWORD *)(NextThread + 116) & 8) != 0 )
    {
LABEL_217:
      result = v114;
      goto LABEL_218;
    }
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
    {
      if ( *(char *)(CurrentThread + 195) >= 16
        || !*(_QWORD *)(CurrentThread + 104)
        || (v85 = *(_QWORD *)(CurrentThread + 104)) == 0
        || (v86 = CurrentPrcb->ScbOffset + v85) == 0
        || (v87 = KiGetThreadEffectiveRankNonZero(CurrentThread, v86, 0LL), v84 = v88 + 1, !v87) )
      {
        v84 = *(_BYTE *)(CurrentThread + 195);
      }
    }
    else
    {
      v84 = *(_BYTE *)(CurrentThread + 195);
    }
    *CurrentPrcb->PriorityState = v84;
    if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
      KiSelectNextThread(CurrentPrcb, &v114);
    v89 = v114;
    result = (_KTHREAD *)(NextThread + 216);
    *(_BYTE *)(NextThread + 388) = 7;
    NextThread = (__int64)v1;
    *(_QWORD *)&result->Header.Lock = v89;
    v114 = result;
LABEL_218:
    if ( !result )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        if ( *(char *)(NextThread + 195) >= 16
          || !*(_QWORD *)(NextThread + 104)
          || (v92 = *(_QWORD *)(NextThread + 104)) == 0
          || (v93 = CurrentPrcb->ScbOffset + v92) == 0
          || (v94 = KiGetThreadEffectiveRankNonZero(NextThread, v93, 0LL), v91 = v95 + 1, !v94) )
        {
          v91 = *(_BYTE *)(NextThread + 195);
        }
      }
      else
      {
        v91 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v91;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v96 = v114;
    do
    {
      v97 = &v96[-1].LockEntries[5];
      v96 = *(_KTHREAD **)&v96->Header.Lock;
      KiDeferredReadyThread((__int64)CurrentPrcb, v97);
    }
    while ( v96 );
    v114 = v1;
    v98 = (unsigned int)v1;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v98 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v98);
      }
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    CurrentPrcb->NextThread = v1;
    _disable();
    CurrentPrcb->NestingLevel = 1;
    v99 = __rdtsc();
    v100 = v99 - CurrentPrcb->StartCycles;
    v101 = v100 + *(unsigned int *)(CurrentThread + 80);
    *(_QWORD *)(CurrentThread + 72) += v100;
    CurrentPrcb->StartCycles = v99;
    v102 = *(_BYTE *)(CurrentThread + 2);
    if ( v101 > 0xFFFFFFFF )
      LODWORD(v101) = -1;
    *(_DWORD *)(CurrentThread + 80) = v101;
    if ( (v102 & 0x3E) != 0 )
    {
      if ( (v102 & 0x10) != 0 )
      {
        CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(CurrentThread + 124)] += CurrentPrcb->StartCycles
                                                                              - CurrentPrcb->TaggedCyclesStart;
        v102 &= ~0x10u;
        CurrentPrcb->TaggedCyclesStart = (unsigned __int64)v1;
      }
      if ( (v102 & 0x3E) != 0 )
      {
        if ( (v102 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(CurrentThread + 1952) )
          {
            CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
            v105 = 3LL;
            if ( CurrentFrequency / 0x19 < 3 )
              v105 = CurrentFrequency / 0x19;
            *(_QWORD *)(v104 + 8 * (CurrentPrcb->PowerState.Class + 2 * v105)) += v100;
          }
          v102 &= ~0x20u;
        }
        if ( (v102 & 0x3E) != 0 )
        {
          v106 = *(_QWORD *)(CurrentThread + 104);
          if ( v106 )
          {
            for ( i = (_QWORD *)(CurrentPrcb->ScbOffset + v106); i; i = (_QWORD *)i[49] )
              *i += v100;
          }
          if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0
            && (*(_QWORD *)(CurrentThread + 576) & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
          {
            CurrentPrcb->AffinitizedCycles += v100;
          }
          if ( *(_QWORD *)(CurrentThread + 360) )
            KiEndCounterAccumulation(CurrentThread);
        }
      }
    }
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
    {
      if ( *(char *)(NextThread + 195) >= 16
        || !*(_QWORD *)(NextThread + 104)
        || (v109 = *(_QWORD *)(NextThread + 104)) == 0
        || (v110 = CurrentPrcb->ScbOffset + v109) == 0
        || (v111 = KiGetThreadEffectiveRankNonZero(NextThread, v110, 0LL), v108 = v112 + 1, !v111) )
      {
        v108 = *(_BYTE *)(NextThread + 195);
      }
    }
    else
    {
      v108 = *(_BYTE *)(NextThread + 195);
    }
    *CurrentPrcb->PriorityState = v108;
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    KiAbProcessContextSwitch(CurrentThread, 1);
    LOBYTE(v113) = 1;
    return (_KTHREAD *)KiSwapContext(CurrentThread, NextThread, v113);
  }
  return result;
}
