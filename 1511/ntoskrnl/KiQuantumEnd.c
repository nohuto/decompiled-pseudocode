/*
 * XREFs of KiQuantumEnd @ 0x14007AAB0
 * Callers:
 *     KiIdleLoop @ 0x140157220 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x14015A980 (KiDispatchInterrupt.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiCheckThreadAffinity @ 0x14002A76C (KiCheckThreadAffinity.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1400969D0 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140096AF4 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400E53FC (KiShouldScanSharedReadyQueue.c)
 *     KiScheduleNextForegroundBoost @ 0x1400E554C (KiScheduleNextForegroundBoost.c)
 *     KiSetPriorityBoost @ 0x140102184 (KiSetPriorityBoost.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     KiGenerateHeteroSets @ 0x1401C9790 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1401C97D4 (KiGetHeteroCpuPolicyThread.c)
 *     EtwTraceAntiStarvationBoost @ 0x14020D9E4 (EtwTraceAntiStarvationBoost.c)
 */

$AFA89EB939CB06A89731FB47CA7CEC74 *__fastcall KiQuantumEnd(__int64 a1, __int64 a2, unsigned __int64 CoreProcessorSet)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v4; // r15
  __int64 CurrentThread; // rsi
  unsigned __int64 v6; // r15
  int v7; // edi
  char EffectivePriorityThread; // di
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int v11; // eax
  int v12; // edx
  bool v13; // r14
  struct _SINGLE_LIST_ENTRY *v14; // rcx
  _SINGLE_LIST_ENTRY *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  int HeteroCpuPolicyThread; // eax
  _KNODE *v19; // rcx
  _KNODE *ParentNode; // rax
  char v21; // di
  int v22; // r14d
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r13
  int v24; // r12d
  char v25; // al
  char v26; // si
  int v27; // edx
  unsigned int v28; // r12d
  int v29; // r15d
  int v30; // r14d
  unsigned int v31; // ecx
  unsigned int v32; // esi
  _LIST_ENTRY *v33; // rdi
  _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY **p_Blink; // r10
  struct _KPRCB *v36; // rcx
  __int64 v37; // r10
  char *v38; // rdi
  char v39; // r12
  unsigned __int64 v40; // rax
  struct _KPRCB *v41; // r8
  int v42; // r14d
  unsigned int v43; // eax
  unsigned int ReadySummary; // r14d
  _LIST_ENTRY *DispatcherReadyListHead; // rdx
  int v46; // r14d
  unsigned int v47; // r13d
  char v48; // si
  unsigned int v49; // r14d
  int v50; // r12d
  unsigned int v51; // ecx
  int v52; // r14d
  char v53; // r13
  int v54; // esi
  unsigned int v55; // r13d
  _LIST_ENTRY *v56; // rdi
  _LIST_ENTRY *v57; // r10
  struct _LIST_ENTRY **v58; // r11
  int v59; // eax
  __int64 v60; // r11
  _QWORD *v61; // rdx
  volatile signed __int32 *v62; // rdi
  char v63; // r12
  __int64 v64; // rax
  int v65; // r14d
  _KTHREAD *NextThread; // rdi
  char v67; // al
  struct _LIST_ENTRY *p_WaitListEntry; // rcx
  $AFA89EB939CB06A89731FB47CA7CEC74 *result; // rax
  char Priority; // al
  char *PriorityState; // r8
  __int64 v72; // r8
  int v73; // [rsp+30h] [rbp-69h]
  int v74; // [rsp+30h] [rbp-69h]
  $AFA89EB939CB06A89731FB47CA7CEC74 *v75; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v76; // [rsp+40h] [rbp-59h]
  int v77; // [rsp+44h] [rbp-55h]
  int QueueIndex; // [rsp+48h] [rbp-51h]
  struct _KPRCB *v79; // [rsp+50h] [rbp-49h]
  int v80; // [rsp+58h] [rbp-41h] BYREF
  int v81; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v82; // [rsp+60h] [rbp-39h] BYREF
  int v83; // [rsp+64h] [rbp-35h] BYREF
  int v84; // [rsp+68h] [rbp-31h] BYREF
  int v85; // [rsp+6Ch] [rbp-2Dh] BYREF
  int v86; // [rsp+70h] [rbp-29h] BYREF
  int v87; // [rsp+74h] [rbp-25h] BYREF
  __int64 v88; // [rsp+78h] [rbp-21h] BYREF
  struct _KPRCB *v89; // [rsp+80h] [rbp-19h]
  __int64 v90; // [rsp+88h] [rbp-11h]
  unsigned int v91; // [rsp+90h] [rbp-9h]
  __int64 v92; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v93; // [rsp+A0h] [rbp+7h]
  int v94; // [rsp+A4h] [rbp+Bh]
  unsigned __int8 v95; // [rsp+100h] [rbp+67h]
  unsigned int v96; // [rsp+108h] [rbp+6Fh]
  __int64 v97; // [rsp+108h] [rbp+6Fh]
  int v98; // [rsp+110h] [rbp+77h]
  int v99; // [rsp+118h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v95 = 0;
  v89 = CurrentPrcb;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  v90 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v6 = *(_QWORD *)(CurrentThread + 72);
    if ( v6 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v85 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v85);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v6 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x80u) == 0 || *(char *)(CurrentThread + 195) < 16 )
        {
          EffectivePriorityThread = *(_BYTE *)(CurrentThread + 195);
          if ( EffectivePriorityThread < 16 )
          {
            v9 = *(_BYTE *)(CurrentThread + 564);
            CoreProcessorSet = v9;
            v10 = -1 - (v9 >> 4) - (v9 & 0xF) + EffectivePriorityThread;
            if ( v10 < *(char *)(CurrentThread + 563) )
              v10 = *(_BYTE *)(CurrentThread + 563);
            EffectivePriorityThread = v10;
            if ( v9 )
            {
              if ( (v9 & 0xF) != 0 )
                *(_DWORD *)(CurrentThread + 1420) = MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(CurrentThread + 564) = 0;
            }
            v11 = *(_DWORD *)(CurrentThread + 1408);
            if ( v11 )
            {
              _BitScanReverse((unsigned int *)&v12, v11);
              if ( EffectivePriorityThread < v12 )
                EffectivePriorityThread = v12;
              v94 = v12;
            }
          }
          v84 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v84);
            while ( CurrentPrcb->PrcbLock );
          }
          v13 = CurrentPrcb->NextThread == 0LL;
          if ( KiAbEnabled )
          {
            CoreProcessorSet = (unsigned __int64)KeGetCurrentPrcb();
            if ( EffectivePriorityThread > *(char *)(CurrentThread + 195) )
            {
              if ( *(_BYTE *)(CurrentThread + 793) )
              {
                v14 = (struct _SINGLE_LIST_ENTRY *)(CurrentThread + 1376);
                if ( *(_QWORD *)(CurrentThread + 1376) == 1LL )
                {
                  v15 = (_SINGLE_LIST_ENTRY *)(CoreProcessorSet + 25656);
                  if ( CoreProcessorSet != -25656LL )
                  {
                    v14->Next = v15->Next;
                    v15->Next = v14;
                    _InterlockedIncrement16((volatile signed __int16 *)(CurrentThread + 1416));
                    KiAbQueueAutoBoostDpc(CoreProcessorSet);
                  }
                }
              }
            }
          }
          *(_BYTE *)(CurrentThread + 195) = EffectivePriorityThread;
          if ( v13 )
          {
            if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
              EffectivePriorityThread = KiQueryEffectivePriorityThread(CurrentThread, (__int64)CurrentPrcb);
            *CurrentPrcb->PriorityState = EffectivePriorityThread;
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v7 = *(unsigned __int8 *)(CurrentThread + 651);
          v95 = 1;
          if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 544) + 1498LL) == 2
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
        v16 = v6 + (unsigned int)(v7 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 4u);
        *(_QWORD *)(CurrentThread + 32) = v16;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u) )
        {
          CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
          if ( (CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CoreProcessorSet )
          {
            v17 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 1600);
            if ( (*(_QWORD *)(v17 + 8) & *(_QWORD *)(v17 + 80) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
            {
              *(_DWORD *)(CurrentThread + 116) |= 0x80u;
              _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
            }
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
                (unsigned int)&v88,
                (__int64)&v92),
              (CurrentPrcb->GroupSetMember & v88) == 0)
          && ((v19 = *(_KNODE **)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 1600),
               (v19->IdleNonParkedCpuSet & v88) != 0)
           || (ParentNode = CurrentPrcb->ParentNode, ParentNode != v19) && (ParentNode->IdleNonParkedCpuSet & v88) != 0)
          || (CurrentPrcb->GroupSetMember & v92) == 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
        }
      }
      v4 = 0LL;
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  v21 = 0;
  v99 = 10;
  v98 = 16;
  v22 = MEMORY[0xFFFFF78000000320];
  v73 = MEMORY[0xFFFFF78000000320];
  if ( (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0 )
  {
    v21 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        QueueIndex = SharedReadyQueue->QueueIndex;
        v86 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
        {
          do
            KeYieldProcessorEx(&v86);
          while ( SharedReadyQueue->Lock );
        }
        v24 = SharedReadyQueue->ReadySummary & 0x7FFE;
        if ( v24 )
        {
          v26 = QueueIndex;
          v79 = 0LL;
          CoreProcessorSet = 0LL;
          v77 = 10;
          v27 = 10;
          v28 = __ROR4__(v24, QueueIndex);
          v29 = 16;
          v30 = MEMORY[0xFFFFF78000000320];
          do
          {
            _BitScanForward(&v31, v28);
            v28 ^= 1 << v31;
            v91 = v31;
            v32 = ((_BYTE)v31 + v26) & 0x1F;
            v33 = &SharedReadyQueue->ReadyListHead[v32];
            v76 = v32;
            Flink = v33->Flink;
            do
            {
              p_Blink = &Flink[-14].Blink;
              Flink = Flink->Flink;
              if ( v30 - 300 - *((_DWORD *)p_Blink + 109) > 0 )
              {
                KiRemoveThreadFromSharedReadyQueue(SharedReadyQueue, p_Blink, v32);
                v36 = v79;
                v27 = v77 - 1;
                *(_BYTE *)(v37 + 388) = 7;
                CoreProcessorSet = v37 + 216;
                v77 = v27;
                *(_QWORD *)(v37 + 216) = v36;
                v79 = (struct _KPRCB *)(v37 + 216);
              }
              --v29;
            }
            while ( Flink != v33 && v27 && v29 );
            v26 = QueueIndex;
          }
          while ( v28 && v27 && v29 );
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          CurrentPrcb = v89;
          CurrentThread = v90;
          if ( CoreProcessorSet )
          {
            do
            {
              v38 = (char *)(CoreProcessorSet - 216);
              v39 = 0;
              v40 = *(_QWORD *)(CoreProcessorSet - 216 + 72);
              v41 = *(struct _KPRCB **)CoreProcessorSet;
              v89 = (struct _KPRCB *)v40;
              v79 = v41;
              v82 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v38 + 16, 0LL) )
              {
                do
                  KeYieldProcessorEx(&v82);
                while ( *((_QWORD *)v38 + 8) );
              }
              v42 = v38[195];
              if ( v42 < 15 )
              {
                LOBYTE(v41) = 15;
                v39 = 1;
                KiSetPriorityBoost(0LL, v38, v41, v89);
              }
              *((_QWORD *)v38 + 8) = 0LL;
              if ( v39 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v38, (unsigned int)v42);
              KiDeferredReadyThread(CurrentPrcb, v38);
              CoreProcessorSet = (unsigned __int64)v79;
            }
            while ( v79 );
          }
          if ( v29 && v77 )
          {
            v25 = 1;
            v21 = 1;
          }
          else
          {
            v25 = v76 + 1;
            v21 = 1;
            if ( v76 + 1 > 0xE )
              v25 = 1;
          }
          v22 = v73;
          v4 = 0LL;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
          v25 = 1;
        }
        SharedReadyQueue->QueueIndex = v25;
      }
    }
  }
  v75 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v95, &v75);
  }
  else
  {
    v83 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v83);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( v21 )
  {
    v43 = v22 + 75;
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v43;
    if ( (ReadySummary & 0x7FFE) != 0 )
    {
      DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      v96 = CurrentPrcb->QueueIndex;
      v46 = ReadySummary & 0x7FFE;
      if ( v46 )
      {
        v48 = CurrentPrcb->QueueIndex;
        v49 = __ROR4__(v46, v96);
        v50 = MEMORY[0xFFFFF78000000320] - 300;
        do
        {
          _BitScanForward(&v51, v49);
          v93 = v51;
          v74 = v49 ^ (1 << v51);
          v52 = v99;
          v53 = v51 + v48;
          v54 = v98;
          v55 = v53 & 0x1F;
          v56 = &DispatcherReadyListHead[v55];
          v57 = v56->Flink;
          do
          {
            v58 = &v57[-14].Blink;
            v59 = v50 - HIDWORD(v57[13].Blink);
            v57 = v57->Flink;
            if ( v59 > 0 )
            {
              KiRemoveThreadFromReadyQueue(CurrentPrcb, v58 + 27, v55);
              *(_BYTE *)(v60 + 388) = 7;
              --v52;
              *v61 = v4;
              v4 = v61;
            }
            --v54;
          }
          while ( v57 != v56 && v52 && v54 );
          v99 = v52;
          v49 = v74;
          v98 = v54;
          v48 = v96;
          if ( !v74 )
            break;
          if ( !v99 )
            break;
          DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
        }
        while ( v98 );
        CurrentThread = v90;
        if ( v4 )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          do
          {
            v62 = (volatile signed __int32 *)(v4 - 27);
            v63 = 0;
            v64 = *(v4 - 18);
            v4 = (_QWORD *)*v4;
            v97 = v64;
            v87 = 0;
            while ( _interlockedbittestandset64(v62 + 16, 0LL) )
            {
              do
                KeYieldProcessorEx(&v87);
              while ( *((_QWORD *)v62 + 8) );
            }
            v65 = *((char *)v62 + 195);
            if ( v65 < 15 )
            {
              LOBYTE(CoreProcessorSet) = 15;
              v63 = 1;
              KiSetPriorityBoost(0LL, v62, CoreProcessorSet, v97);
            }
            *((_QWORD *)v62 + 8) = 0LL;
            if ( v63 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v62, (unsigned int)v65);
            KiDeferredReadyThread(CurrentPrcb, v62);
          }
          while ( v4 );
          v80 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v80);
            while ( CurrentPrcb->PrcbLock );
          }
        }
        if ( v98 && v99 )
        {
          v47 = 1;
        }
        else
        {
          v47 = v55 + 1;
          if ( v47 > 0xE )
            v47 = 1;
        }
      }
      else
      {
        v47 = 1;
      }
      CurrentPrcb->QueueIndex = v47;
    }
  }
  while ( 1 )
  {
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v95 )
        *(_BYTE *)(CurrentThread + 565) = 0;
    }
    else
    {
      if ( v95 )
      {
        NextThread = (_KTHREAD *)KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb);
        if ( NextThread )
          goto LABEL_144;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x800) == 0 )
        goto LABEL_152;
      KiSelectNextThread((__int64)CurrentPrcb, &v75);
      NextThread = CurrentPrcb->NextThread;
    }
    if ( !NextThread )
      goto LABEL_152;
LABEL_144:
    if ( NextThread == CurrentPrcb->IdleThread || KiCheckThreadAffinity((__int64)NextThread) )
    {
LABEL_152:
      result = v75;
      goto LABEL_153;
    }
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
      v67 = KiQueryEffectivePriorityThread(CurrentThread, (__int64)CurrentPrcb);
    else
      v67 = *(_BYTE *)(CurrentThread + 195);
    *CurrentPrcb->PriorityState = v67;
    if ( CurrentPrcb->NextThread == NextThread )
      KiSelectNextThread((__int64)CurrentPrcb, &v75);
    p_WaitListEntry = &v75->WaitListEntry;
    result = &NextThread->216;
    NextThread->WaitBlockFill6[68] = 7;
    NextThread = 0LL;
    result->WaitListEntry.Flink = p_WaitListEntry;
    v75 = result;
LABEL_153:
    if ( !result )
      break;
    if ( NextThread && NextThread != CurrentPrcb->IdleThread && CurrentPrcb->NextThread != NextThread )
      KiUpdateThreadState((__int64)CurrentPrcb, NextThread, 3, 1);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiReadyDeferredReadyList(CurrentPrcb, &v75);
    v75 = 0LL;
    v81 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v81);
      while ( CurrentPrcb->PrcbLock );
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
    if ( (NextThread->Header.Size & 4) != 0 )
      Priority = KiQueryEffectivePriorityThread((__int64)NextThread, (__int64)CurrentPrcb);
    else
      Priority = NextThread->Priority;
    PriorityState = CurrentPrcb->PriorityState;
    *PriorityState = Priority;
    CurrentPrcb->CurrentThread = NextThread;
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread, (__int64)PriorityState);
    KiAbProcessContextSwitch(CurrentThread, 1LL);
    LOBYTE(v72) = 1;
    return ($AFA89EB939CB06A89731FB47CA7CEC74 *)KiSwapContext(CurrentThread, NextThread, v72);
  }
  return result;
}
