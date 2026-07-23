/*
 * XREFs of KiQuantumEnd @ 0x1400CF620
 * Callers:
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140166320 (KiDispatchInterrupt.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiSetPriorityBoost @ 0x1400911DC (KiSetPriorityBoost.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400A2758 (KiShouldScanSharedReadyQueue.c)
 *     KiScheduleNextForegroundBoost @ 0x1400A2DF8 (KiScheduleNextForegroundBoost.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400CCEEC (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiCheckThreadAffinity @ 0x1400CEFD4 (KiCheckThreadAffinity.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiComputeNewPriority @ 0x1400D02B0 (KiComputeNewPriority.c)
 *     KiReadyDeferredReadyList @ 0x1400D13F8 (KiReadyDeferredReadyList.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400DB160 (KiCheckPreferredHeteroProcessor.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140110860 (KiRemoveThreadFromReadyQueue.c)
 *     EtwTraceAntiStarvationBoost @ 0x140159B3C (EtwTraceAntiStarvationBoost.c)
 */

int __fastcall KiQuantumEnd(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rsi
  unsigned __int64 v6; // r15
  int v7; // edi
  char EffectivePriorityThread; // di
  struct _KPRCB *v9; // r8
  bool v10; // r14
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // di
  int v16; // r14d
  unsigned __int64 *PrcbLock; // rax
  __int64 SharedReadyQueue; // r13
  int v19; // r12d
  char v20; // si
  int v21; // edx
  int v22; // r14d
  int v23; // r15d
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  unsigned int v26; // esi
  _QWORD **v27; // rdi
  _QWORD *v28; // r11
  __int64 v29; // r10
  _SINGLE_LIST_ENTRY *v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rdi
  char v33; // r12
  unsigned __int64 Next; // rax
  _SINGLE_LIST_ENTRY *v35; // r8
  int v36; // r14d
  unsigned int ReadySummary; // r14d
  _LIST_ENTRY *DispatcherReadyListHead; // rdx
  int v39; // r14d
  unsigned int v40; // r13d
  _QWORD *v41; // r15
  int QueueIndex; // esi
  unsigned int v43; // r14d
  int v44; // r12d
  unsigned int v45; // ecx
  int v46; // r14d
  char v47; // r13
  unsigned int v48; // r13d
  _LIST_ENTRY *v49; // rdi
  _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY **p_Blink; // r11
  __int64 v52; // r11
  _QWORD *v53; // rdx
  __int64 v54; // rdi
  char v55; // r12
  unsigned __int64 v56; // rax
  int v57; // r14d
  __int64 NextThread; // rdi
  unsigned __int64 *v59; // r8
  char v60; // al
  unsigned __int64 *v61; // rcx
  _SINGLE_LIST_ENTRY *v62; // r8
  __int64 v63; // r9
  char v64; // al
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r8
  int v69; // [rsp+20h] [rbp-49h]
  int v70; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v71; // [rsp+28h] [rbp-41h] BYREF
  int v72; // [rsp+30h] [rbp-39h]
  unsigned int v73; // [rsp+34h] [rbp-35h]
  int v74; // [rsp+38h] [rbp-31h]
  _SINGLE_LIST_ENTRY *v75; // [rsp+40h] [rbp-29h]
  int v76; // [rsp+48h] [rbp-21h] BYREF
  int v77; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v78; // [rsp+50h] [rbp-19h] BYREF
  int v79; // [rsp+54h] [rbp-15h] BYREF
  int v80; // [rsp+58h] [rbp-11h] BYREF
  int v81; // [rsp+5Ch] [rbp-Dh] BYREF
  int v82; // [rsp+60h] [rbp-9h] BYREF
  int v83; // [rsp+64h] [rbp-5h] BYREF
  struct _KPRCB *v84; // [rsp+68h] [rbp-1h]
  __int64 v85; // [rsp+70h] [rbp+7h]
  unsigned int v86; // [rsp+78h] [rbp+Fh]
  unsigned int v87; // [rsp+7Ch] [rbp+13h]
  unsigned __int8 v88; // [rsp+D0h] [rbp+67h]
  char v89; // [rsp+D8h] [rbp+6Fh]
  unsigned __int64 v90; // [rsp+D8h] [rbp+6Fh]
  int v91; // [rsp+E0h] [rbp+77h]
  int v92; // [rsp+E8h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v88 = 0;
  v84 = CurrentPrcb;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  v85 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v6 = *(_QWORD *)(CurrentThread + 72);
    if ( v6 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v76 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v76);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v6 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x80u) == 0 || *(char *)(CurrentThread + 195) < 16 )
        {
          LOBYTE(a2) = 1;
          EffectivePriorityThread = KiComputeNewPriority(CurrentThread, a2);
          v77 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v77);
            while ( CurrentPrcb->PrcbLock );
          }
          v9 = KeGetCurrentPrcb();
          v10 = CurrentPrcb->NextThread == 0LL;
          if ( EffectivePriorityThread > *(char *)(CurrentThread + 195) )
          {
            if ( *(_BYTE *)(CurrentThread + 793) )
            {
              v11 = (struct _SINGLE_LIST_ENTRY *)(CurrentThread + 1376);
              if ( *(_QWORD *)(CurrentThread + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = &v9->AbPropagateBoostsList;
                if ( v9 != (struct _KPRCB *)-25784LL )
                {
                  v11->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = v11;
                  _InterlockedIncrement16((volatile signed __int16 *)(CurrentThread + 1420));
                  KiAbQueueAutoBoostDpc((__int64)v9);
                }
              }
            }
          }
          *(_BYTE *)(CurrentThread + 195) = EffectivePriorityThread;
          if ( v10 )
          {
            if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
              EffectivePriorityThread = KiQueryEffectivePriorityThread(CurrentThread, (__int64)CurrentPrcb);
            *CurrentPrcb->PriorityState = EffectivePriorityThread;
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v7 = *(unsigned __int8 *)(CurrentThread + 651);
          v88 = 1;
          if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 544) + 1466LL) == 2
            && *(char *)(CurrentThread + 195) < 16
            && (*(_DWORD *)(CurrentThread + 120) & 2) == 0 )
          {
            KiScheduleNextForegroundBoost(CurrentThread);
          }
        }
        else
        {
          v7 = 127;
        }
        v13 = v6 + (unsigned int)(v7 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 4u);
        *(_QWORD *)(CurrentThread + 32) = v13;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v14 = KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)];
          if ( (*(_QWORD *)(*(_QWORD *)(v14 + 1600) + 8LL) & *(_QWORD *)(*(_QWORD *)(v14 + 1600) + 80LL) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
  }
  v15 = 0;
  v92 = 10;
  v91 = 16;
  v16 = MEMORY[0xFFFFF78000000320];
  LODWORD(PrcbLock) = CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320];
  v69 = MEMORY[0xFFFFF78000000320];
  if ( (int)PrcbLock < 0 )
  {
    v15 = 1;
    LODWORD(PrcbLock) = KiShouldScanSharedReadyQueue((__int64)CurrentPrcb);
    if ( (_DWORD)PrcbLock )
    {
      SharedReadyQueue = (__int64)CurrentPrcb->SharedReadyQueue;
      LODWORD(PrcbLock) = *(_DWORD *)(SharedReadyQueue + 8);
      if ( ((unsigned __int16)PrcbLock & 0x7FFE) != 0 )
      {
        v74 = *(unsigned __int8 *)(SharedReadyQueue + 594);
        v78 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
        {
          do
            KeYieldProcessorEx(&v78);
          while ( *(_QWORD *)SharedReadyQueue );
        }
        v19 = *(_DWORD *)(SharedReadyQueue + 8) & 0x7FFE;
        if ( v19 )
        {
          v20 = v74;
          a3 = 0LL;
          v21 = 10;
          v72 = 10;
          v75 = 0LL;
          v22 = MEMORY[0xFFFFF78000000320];
          v23 = 16;
          v24 = __ROR4__(v19, v74);
          do
          {
            _BitScanForward(&v25, v24);
            v24 ^= 1 << v25;
            v86 = v25;
            v26 = ((_BYTE)v25 + v20) & 0x1F;
            v27 = (_QWORD **)(SharedReadyQueue + 16 + 16LL * v26);
            v73 = v26;
            v28 = *v27;
            do
            {
              v29 = (__int64)(v28 - 27);
              v28 = (_QWORD *)*v28;
              if ( v22 - 300 - *(_DWORD *)(v29 + 436) > 0 )
              {
                KiRemoveThreadFromSharedReadyQueue(SharedReadyQueue, v29, v26);
                v30 = v75;
                v21 = v72 - 1;
                *(_BYTE *)(v31 + 388) = 7;
                a3 = (_SINGLE_LIST_ENTRY *)(v31 + 216);
                v72 = v21;
                *(_QWORD *)(v31 + 216) = v30;
                v75 = (_SINGLE_LIST_ENTRY *)(v31 + 216);
              }
              --v23;
            }
            while ( v28 != v27 && v21 && v23 );
            v20 = v74;
          }
          while ( v24 && v21 && v23 );
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          CurrentPrcb = v84;
          CurrentThread = v85;
          if ( a3 )
          {
            do
            {
              v32 = (__int64)&a3[-27];
              v33 = 0;
              Next = (unsigned __int64)a3[-18].Next;
              v35 = a3->Next;
              v84 = (struct _KPRCB *)Next;
              v75 = v35;
              v79 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v79);
                while ( *(_QWORD *)(v32 + 64) );
              }
              v36 = *(char *)(v32 + 195);
              if ( v36 < 15 )
              {
                v33 = 1;
                KiSetPriorityBoost(0LL, v32, 15, (unsigned __int64)v84);
              }
              *(_QWORD *)(v32 + 64) = 0LL;
              if ( v33 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v32, (unsigned int)v36);
              KiDeferredReadyThread((__int64)CurrentPrcb, (_BYTE *)v32, v35, a4);
              a3 = v75;
            }
            while ( v75 );
          }
          if ( v23 && v72 )
          {
            LODWORD(PrcbLock) = 1;
            v15 = 1;
          }
          else
          {
            LODWORD(PrcbLock) = v73 + 1;
            v15 = 1;
            if ( v73 + 1 > 0xE )
              LODWORD(PrcbLock) = 1;
          }
          v16 = v69;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          LODWORD(PrcbLock) = 1;
        }
        *(_BYTE *)(SharedReadyQueue + 594) = (_BYTE)PrcbLock;
      }
    }
  }
  v71 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    LODWORD(PrcbLock) = KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v88, &v71);
  }
  else
  {
    v80 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v80);
        PrcbLock = (unsigned __int64 *)CurrentPrcb->PrcbLock;
      }
      while ( PrcbLock );
    }
  }
  if ( v15 )
  {
    LODWORD(PrcbLock) = v16 + 75;
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = (unsigned int)PrcbLock;
    if ( (ReadySummary & 0x7FFE) != 0 )
    {
      LODWORD(PrcbLock) = CurrentPrcb->QueueIndex;
      DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      v89 = (char)PrcbLock;
      v39 = ReadySummary & 0x7FFE;
      if ( v39 )
      {
        v41 = 0LL;
        QueueIndex = CurrentPrcb->QueueIndex;
        v43 = __ROR4__(v39, (char)PrcbLock);
        v44 = MEMORY[0xFFFFF78000000320] - 300;
        do
        {
          _BitScanForward(&v45, v43);
          v87 = v45;
          v70 = v43 ^ (1 << v45);
          v46 = v92;
          v47 = v45 + QueueIndex;
          QueueIndex = v91;
          v48 = v47 & 0x1F;
          v49 = &DispatcherReadyListHead[v48];
          Flink = v49->Flink;
          do
          {
            p_Blink = &Flink[-14].Blink;
            LODWORD(PrcbLock) = v44 - HIDWORD(Flink[13].Blink);
            Flink = Flink->Flink;
            if ( (int)PrcbLock > 0 )
            {
              LODWORD(PrcbLock) = KiRemoveThreadFromReadyQueue(CurrentPrcb, p_Blink + 27, v48);
              *(_BYTE *)(v52 + 388) = 7;
              --v46;
              *v53 = v41;
              v41 = v53;
            }
            --QueueIndex;
          }
          while ( Flink != v49 && v46 && QueueIndex );
          v92 = v46;
          v43 = v70;
          v91 = QueueIndex;
          LOBYTE(QueueIndex) = v89;
          if ( !v70 )
            break;
          LODWORD(PrcbLock) = v92;
          if ( !v92 )
            break;
          LODWORD(PrcbLock) = v91;
          DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
        }
        while ( v91 );
        CurrentThread = v85;
        if ( v41 )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          do
          {
            v54 = (__int64)(v41 - 27);
            v55 = 0;
            v56 = *(v41 - 18);
            v41 = (_QWORD *)*v41;
            v90 = v56;
            v81 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v81);
              while ( *(_QWORD *)(v54 + 64) );
            }
            v57 = *(char *)(v54 + 195);
            if ( v57 < 15 )
            {
              v55 = 1;
              KiSetPriorityBoost(0LL, v54, 15, v90);
            }
            *(_QWORD *)(v54 + 64) = 0LL;
            if ( v55 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v54, (unsigned int)v57);
            LODWORD(PrcbLock) = KiDeferredReadyThread((__int64)CurrentPrcb, (_BYTE *)v54, a3, a4);
          }
          while ( v41 );
          v82 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
            {
              KeYieldProcessorEx(&v82);
              PrcbLock = (unsigned __int64 *)CurrentPrcb->PrcbLock;
            }
            while ( PrcbLock );
          }
        }
        if ( v91 && v92 )
        {
          v40 = 1;
        }
        else
        {
          v40 = v48 + 1;
          if ( v40 > 0xE )
            v40 = 1;
        }
      }
      else
      {
        v40 = 1;
      }
      CurrentPrcb->QueueIndex = v40;
    }
  }
  while ( 1 )
  {
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v88 )
        *(_BYTE *)(CurrentThread + 565) = 0;
      goto LABEL_128;
    }
    if ( !v88
      || (PrcbLock = KiSelectReadyThread(*(char *)(CurrentThread + 195), (__int64)CurrentPrcb, (unsigned __int64 *)a3),
          (NextThread = (__int64)PrcbLock) == 0) )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x800) == 0 )
        goto LABEL_137;
      if ( KiQuantumEndResetIfIdle && (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
        goto LABEL_137;
      }
      LODWORD(PrcbLock) = KiSelectNextThread((__int64)CurrentPrcb, &v71, (unsigned __int64 *)a3);
      NextThread = (__int64)CurrentPrcb->NextThread;
LABEL_128:
      if ( !NextThread )
        goto LABEL_137;
    }
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
    {
      LODWORD(PrcbLock) = KiCheckThreadAffinity(NextThread);
      if ( !(_DWORD)PrcbLock )
      {
        if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
          v60 = KiQueryEffectivePriorityThread(CurrentThread, (__int64)CurrentPrcb);
        else
          v60 = *(_BYTE *)(CurrentThread + 195);
        *CurrentPrcb->PriorityState = v60;
        if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
          KiSelectNextThread((__int64)CurrentPrcb, &v71, v59);
        PrcbLock = v71;
        v61 = (unsigned __int64 *)(NextThread + 216);
        *(_BYTE *)(NextThread + 388) = 7;
        NextThread = 0LL;
        *v61 = (unsigned __int64)PrcbLock;
        v71 = v61;
      }
    }
LABEL_137:
    if ( !v71 )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      KiUpdateThreadState((__int64)CurrentPrcb, NextThread, 3, 1);
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    LODWORD(PrcbLock) = KiReadyDeferredReadyList(CurrentPrcb, &v71);
    v71 = 0LL;
    v83 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v83);
        PrcbLock = (unsigned __int64 *)CurrentPrcb->PrcbLock;
      }
      while ( PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread);
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      v64 = KiQueryEffectivePriorityThread(NextThread, (__int64)CurrentPrcb);
    else
      v64 = *(_BYTE *)(NextThread + 195);
    *CurrentPrcb->PriorityState = v64;
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
    {
      v62 = (_SINGLE_LIST_ENTRY *)(unsigned int)(*(_DWORD *)(NextThread + 2008) - *(_DWORD *)(NextThread + 436));
      *(_DWORD *)(NextThread + 2008) = (_DWORD)v62 + MEMORY[0xFFFFF78000000320];
    }
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v62, v63);
    KiAbProcessContextSwitch(CurrentThread, 1, v65, v66);
    LOBYTE(v67) = 1;
    LODWORD(PrcbLock) = KiSwapContext(CurrentThread, NextThread, v67);
  }
  return (int)PrcbLock;
}
