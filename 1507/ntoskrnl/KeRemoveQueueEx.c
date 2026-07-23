/*
 * XREFs of KeRemoveQueueEx @ 0x14009E640
 * Callers:
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x140125DFC (KeRemoveQueue.c)
 *     ExpWorkerFactoryManagerThread @ 0x1401654EC (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x14016FDC4 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x14016FE2C (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x14017045C (PopFxEmergencyWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x14020B618 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x140558144 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     KiAttemptFastRemoveQueue @ 0x140117994 (KiAttemptFastRemoveQueue.c)
 *     KiSwitchQueue @ 0x1401229BC (KiSwitchQueue.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceDequeueWork @ 0x14025CEC8 (EtwTraceDequeueWork.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // al
  unsigned int v11; // r12d
  LONGLONG v12; // rcx
  unsigned int v13; // ebx
  PLIST_ENTRY *v14; // rbx
  __int64 v15; // rcx
  ULONG v16; // r15d
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 WaitIrql; // r14
  _KTHREAD *v19; // rsi
  unsigned int v20; // ebx
  _KTHREAD *NextThread; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v27; // r11
  __int64 v28; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *i; // rcx
  unsigned __int8 v32; // di
  unsigned int v33; // ebx
  PLIST_ENTRY *v34; // r14
  unsigned int v35; // ebx
  int v36; // r14d
  bool v37; // zf
  __int64 v38; // rax
  struct _KPRCB *v39; // rdi
  unsigned __int8 v40; // r15
  _KTHREAD *v41; // rsi
  unsigned int v42; // ebx
  _KTHREAD *v43; // rbx
  unsigned __int64 v44; // rax
  __int64 v45; // r10
  unsigned __int64 v46; // rcx
  UCHAR v47; // r9
  unsigned int v48; // eax
  __int64 v49; // r11
  __int64 v50; // rcx
  _KSCHEDULING_GROUP *volatile v51; // rcx
  _QWORD *j; // rcx
  ULONG v53; // r13d
  PLIST_ENTRY *v54; // rdx
  int v55; // ebx
  PKQUEUE v56; // r8
  struct _LIST_ENTRY *v57; // rdi
  unsigned int v58; // ebx
  PLIST_ENTRY *v59; // rbx
  ULONG v60; // edi
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  struct _LIST_ENTRY *v63; // rcx
  _LIST_ENTRY *v64; // rax
  unsigned __int8 v65; // al
  unsigned __int8 v66; // bl
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v69; // rsi
  unsigned int v70; // ebx
  signed __int32 v71[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 QuadPart; // [rsp+20h] [rbp-48h]
  unsigned int v75; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v11 = 0;
  v12 = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v75 = 1;
    }
    else
    {
      v75 = 2;
      v12 = MEMORY[0xFFFFF78000000008]
          - MEMORY[0xFFFFF780000003B0]
          - (Timeout->QuadPart
           + CurrentThread->RelativeTimerBias);
      QuadPart = v12;
    }
  }
  else
  {
    v75 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v13 = 0;
      if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
        while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      }
      if ( !Queue->Header.SignalState
        || Queue->CurrentCount > Queue->MaximumCount
        || (v14 = EntryArray, (v16 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue)) == 0) )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_67;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      CurrentPrcb = KeGetCurrentPrcb();
      WaitIrql = CurrentThread->WaitIrql;
      if ( WaitIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          if ( CurrentPrcb->NestingLevel )
          {
            CurrentPrcb->InterruptRequest = 1;
          }
          else
          {
            LOBYTE(v15) = 2;
            HalRequestSoftwareInterrupt(v15);
          }
        }
        goto LABEL_63;
      }
      v19 = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v20);
          }
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v22 = __rdtsc();
        v23 = v22 - CurrentPrcb->StartCycles;
        v24 = v23 + v19->CurrentRunTime;
        v19->CycleTime += v23;
        CurrentPrcb->StartCycles = v22;
        Size = v19->Header.Size;
        if ( v24 > 0xFFFFFFFF )
          LODWORD(v24) = -1;
        v19->CurrentRunTime = v24;
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[v19->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
            Size &= ~0x10u;
            CurrentPrcb->TaggedCyclesStart = 0LL;
          }
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x20) != 0 )
            {
              if ( v19[1].WaitBlock[2].SparePtr )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
                v28 = 3LL;
                if ( CurrentFrequency / 0x19 < 3 )
                  v28 = CurrentFrequency / 0x19;
                *(_QWORD *)(v27 + 8 * (CurrentPrcb->PowerState.Class + 2 * v28)) += v23;
              }
              Size &= ~0x20u;
            }
            if ( (Size & 0x3E) != 0 )
            {
              SchedulingGroup = v19->SchedulingGroup;
              if ( SchedulingGroup )
              {
                for ( i = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[49] )
                  *i += v23;
              }
              if ( (v19->Header.Size & 8) != 0
                && (v19->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
              {
                CurrentPrcb->AffinitizedCycles += v23;
              }
              if ( v19->WaitBlock[0].SparePtr )
                KiEndCounterAccumulation(v19);
            }
          }
        }
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        v19->WaitReason = 32;
        v19->WaitIrql = WaitIrql;
        KiQueueReadyThread(CurrentPrcb, v19);
        if ( (unsigned __int8)KiSwapContext(v19, NextThread, WaitIrql) )
        {
          __writecr8(1uLL);
          v19->MiscFlags &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        v14 = EntryArray;
      }
      else if ( (v19->MiscFlags & 0x40) != 0 )
      {
        __writecr8(1uLL);
        v19->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
        __writecr8(WaitIrql);
        goto LABEL_63;
      }
      __writecr8(WaitIrql);
LABEL_63:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v14, v16);
      return v16;
    }
    if ( !Timeout || Timeout->QuadPart )
      goto LABEL_67;
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      v34 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
    }
    else
    {
      if ( Alertable )
      {
        v35 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v35);
          }
          while ( CurrentThread->ThreadLock );
        }
        if ( CurrentThread->Alerted[WaitMode] )
        {
          CurrentThread->Alerted[WaitMode] = 0;
          v36 = 257;
        }
        else if ( !WaitMode
               || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
        {
          if ( CurrentThread->Alerted[0] )
          {
            CurrentThread->Alerted[0] = 0;
            v36 = 257;
          }
          else
          {
            v36 = 0;
          }
        }
        else
        {
          CurrentThread->ApcState.UserApcPending = 1;
          v36 = 192;
        }
      }
      else
      {
        v36 = ((unsigned __int8)WaitMode & CurrentThread->ApcState.UserApcPending) != 0 ? 0xC0 : 0;
      }
      v37 = v36 == 0;
      v38 = v36;
      v34 = EntryArray;
      v12 = 258LL;
      if ( v37 )
        v38 = 258LL;
      *EntryArray = (PLIST_ENTRY)v38;
      if ( Alertable )
        CurrentThread->ThreadLock = 0LL;
    }
    v39 = KeGetCurrentPrcb();
    v40 = CurrentThread->WaitIrql;
    if ( v40 >= 2u )
    {
      if ( v39->NextThread && !v39->DpcRoutineActive )
      {
        if ( v39->NestingLevel )
        {
          v39->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v12) = 2;
          HalRequestSoftwareInterrupt(v12);
        }
      }
      v53 = 1;
      goto LABEL_144;
    }
    v41 = v39->CurrentThread;
    if ( v39->NextThread )
    {
      KiAbProcessContextSwitch(v39->CurrentThread, 0LL);
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v39->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v42);
        }
        while ( v39->PrcbLock );
      }
      v43 = v39->NextThread;
      v39->NextThread = 0LL;
      _disable();
      v39->NestingLevel = 1;
      v44 = __rdtsc();
      v45 = v44 - v39->StartCycles;
      v46 = v45 + v41->CurrentRunTime;
      v41->CycleTime += v45;
      v39->StartCycles = v44;
      v47 = v41->Header.Size;
      if ( v46 > 0xFFFFFFFF )
        LODWORD(v46) = -1;
      v41->CurrentRunTime = v46;
      if ( (v47 & 0x3E) != 0 )
      {
        if ( (v47 & 0x10) != 0 )
        {
          v39->TaggedCycles[v41->Tag] += v39->StartCycles - v39->TaggedCyclesStart;
          v47 &= ~0x10u;
          v39->TaggedCyclesStart = 0LL;
        }
        if ( (v47 & 0x3E) != 0 )
        {
          if ( (v47 & 0x20) != 0 )
          {
            if ( v41[1].WaitBlock[2].SparePtr )
            {
              v48 = PpmPerfGetCurrentFrequency(v39);
              v50 = 3LL;
              if ( v48 / 0x19 < 3 )
                v50 = v48 / 0x19;
              *(_QWORD *)(v49 + 8 * (v39->PowerState.Class + 2 * v50)) += v45;
            }
            v47 &= ~0x20u;
          }
          if ( (v47 & 0x3E) != 0 )
          {
            v51 = v41->SchedulingGroup;
            if ( v51 )
            {
              for ( j = (_QWORD *)((char *)&v51->Policy + v39->ScbOffset); j; j = (_QWORD *)j[49] )
                *j += v45;
            }
            if ( (v41->Header.Size & 8) != 0
              && (v39->ParentNode->Affinity.Mask & v41->Affinity.Mask) != v39->ParentNode->Affinity.Mask )
            {
              v39->AffinitizedCycles += v45;
            }
            if ( v41->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(v41);
          }
        }
      }
      _enable();
      v39->CurrentThread = v43;
      v43->WaitBlockFill6[68] = 2;
      v41->WaitReason = 32;
      v41->WaitIrql = v40;
      KiQueueReadyThread(v39, v41);
      v53 = 1;
      if ( (unsigned __int8)KiSwapContext(v41, v43, v40) )
      {
        __writecr8(1uLL);
        v41->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
        __writecr8(v40);
LABEL_144:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
          return v53;
        v54 = v34;
        goto LABEL_235;
      }
    }
    else
    {
      if ( (v41->MiscFlags & 0x40) != 0 )
      {
        __writecr8(1uLL);
        v41->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      v53 = 1;
    }
    __writecr8(v40);
    goto LABEL_144;
  }
  while ( 1 )
  {
LABEL_67:
    v32 = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v33);
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v32 )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v55 = 257;
        goto LABEL_163;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_162:
        v55 = 192;
LABEL_163:
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v32);
        goto LABEL_165;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v55 = 257;
        goto LABEL_163;
      }
    }
    else if ( ((unsigned __int8)WaitMode & CurrentThread->ApcState.UserApcPending) != 0 )
    {
      goto LABEL_162;
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    v55 = 0;
    CurrentThread->WaitReason = 15;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_165:
    if ( v55 )
    {
      v53 = 1;
      *EntryArray = (PLIST_ENTRY)v55;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v53;
      v54 = EntryArray;
LABEL_235:
      EtwTraceDequeueWork(CurrentThread, v54, v53);
      return v53;
    }
    v56 = (PKQUEUE)CurrentThread->Queue;
    if ( Queue != v56 )
      KiSwitchQueue(CurrentThread, Queue);
    v57 = (struct _LIST_ENTRY *)&CurrentThread->320;
    v58 = 0;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v58 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v58);
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    v59 = EntryArray;
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v60 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
      if ( v60 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_217;
      }
      v57 = (struct _LIST_ENTRY *)&CurrentThread->320;
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( CurrentThread->Queue )
      {
        Flink = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        CurrentThread->Queue = 0LL;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)128;
LABEL_216:
      v60 = 1;
LABEL_217:
      CurrentThread->WaitReason = 0;
      v69 = KeGetCurrentPrcb();
      if ( v69->DeferredReadyListHead.Next )
        KiProcessThreadWaitList(v69, 1LL, 0LL, 2LL);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v71, 0);
      if ( CurrentThread->ThreadLock )
      {
        v70 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v70 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v70);
          }
          while ( CurrentThread->ThreadLock );
        }
        v59 = EntryArray;
        CurrentThread->ThreadLock = 0LL;
      }
      LOBYTE(v56) = 1;
      KiExitThreadWait(v69, CurrentThread, v56, Timeout);
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v59, v60);
      return v60;
    }
    v56 = (PKQUEUE)v75;
    v61 = QuadPart;
    if ( v75 == 2 )
    {
      v62 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v75 )
        goto LABEL_186;
      if ( !QuadPart )
        goto LABEL_190;
      v62 = MEMORY[0xFFFFF78000000014];
    }
    if ( v62 > QuadPart )
    {
LABEL_190:
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)258;
      goto LABEL_216;
    }
LABEL_186:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    v63 = Queue->Header.WaitListHead.Blink;
    v57->Flink = &Queue->Header.WaitListHead;
    v57->Blink = v63;
    if ( v63->Flink != &Queue->Header.WaitListHead )
      __fastfail(3u);
    v63->Flink = v57;
    Queue->Header.WaitListHead.Blink = v57;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v64 = (_LIST_ENTRY *)KiCommitThreadWait(CurrentThread, v57, v75, v61);
    CurrentThread->WaitReason = 0;
    if ( v64 != (_LIST_ENTRY *)256 )
      break;
    v65 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v65;
  }
  *EntryArray = v64;
  if ( Count <= 1
    || v64 == (_LIST_ENTRY *)128
    || (unsigned __int64)&v64[-17].Blink + 7 <= 1
    || v64 == (_LIST_ENTRY *)192
    || !Queue->Header.SignalState )
  {
    v53 = 1;
  }
  else
  {
    v66 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    if ( Queue->Header.SignalState )
      v53 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
    else
      v53 = 1;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    __writecr8(v66);
    v59 = EntryArray;
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v54 = v59;
    goto LABEL_235;
  }
  return v53;
}
