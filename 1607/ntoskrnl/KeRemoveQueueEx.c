/*
 * XREFs of KeRemoveQueueEx @ 0x140069F30
 * Callers:
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x1400A6C30 (KeRemoveQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiAttemptFastRemoveQueue @ 0x1400A563C (KiAttemptFastRemoveQueue.c)
 *     KiSwitchQueue @ 0x1400A65EC (KiSwitchQueue.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     EtwTraceDequeueWork @ 0x140225940 (EtwTraceDequeueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOLEAN v8; // si
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v11; // rdx
  ULONG v12; // r14d
  unsigned __int64 QuadPart; // r13
  unsigned int v14; // r12d
  int v15; // ebp
  __int64 v16; // rax
  PLIST_ENTRY *v17; // r12
  struct _KPRCB *v18; // rbp
  unsigned __int8 v19; // si
  _KTHREAD *v20; // r15
  __int64 v22; // rdx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // r9
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v27; // rdx
  _LIST_ENTRY *v28; // rax
  PLIST_ENTRY *v29; // r15
  ULONG v30; // ebp
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rbp
  PLIST_ENTRY *v33; // r10
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 WaitIrql; // r15
  _KTHREAD *v38; // r13
  unsigned __int64 v39; // rdx
  unsigned int v40; // ebp
  unsigned __int8 v41; // al
  ULONG v42; // eax
  PLIST_ENTRY *v43; // r15
  ULONG v44; // esi
  struct _KPRCB *v45; // rdi
  PLIST_ENTRY *v46; // rcx
  _KTHREAD *NextThread; // rdi
  unsigned __int8 v48; // si
  _KTHREAD *v49; // rdi
  PLIST_ENTRY *v50; // rdx
  struct _LIST_ENTRY *v51; // rdx
  struct _LIST_ENTRY *v52; // rcx
  int v53; // [rsp+30h] [rbp-48h] BYREF
  int v54; // [rsp+34h] [rbp-44h] BYREF
  int v55; // [rsp+38h] [rbp-40h] BYREF
  int v56; // [rsp+3Ch] [rbp-3Ch] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp+8h]
  unsigned __int8 i; // [rsp+80h] [rbp+8h]
  int v59; // [rsp+80h] [rbp+8h]
  int v60; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = Alertable;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v11 = 0xFFFFF78000000008uLL;
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v14 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v14 = 1;
    }
  }
  else
  {
    QuadPart = v57;
    v14 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v60 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v60);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( !Queue->Header.SignalState || Queue->CurrentCount > Queue->MaximumCount )
        goto LABEL_25;
      Flink = Queue->EntryListHead.Flink;
      *(_QWORD *)&Alertable = &Queue->EntryListHead;
      Timeout = (PLARGE_INTEGER)Count;
      v32 = 0LL;
      v33 = EntryArray;
      do
      {
        --Queue->Header.SignalState;
        v34 = Flink->Flink;
        if ( !Flink->Flink )
          KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
        Blink = Flink->Blink;
        if ( v34->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v34;
        v34->Blink = Blink;
        Flink->Flink = 0LL;
        v33[v32] = Flink;
        v32 = (unsigned int)(v32 + 1);
        Flink = *(struct _LIST_ENTRY **)Alertable;
      }
      while ( (unsigned int)v32 < (unsigned int)Timeout && Flink != (struct _LIST_ENTRY *)Alertable );
      if ( !(_DWORD)v32 )
      {
LABEL_25:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_26;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      CurrentPrcb = KeGetCurrentPrcb();
      WaitIrql = CurrentThread->WaitIrql;
      if ( WaitIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          LOBYTE(Flink) = 2;
          KiRequestSoftwareInterrupt(CurrentPrcb, Flink, Alertable, Timeout);
          v33 = EntryArray;
        }
        goto LABEL_71;
      }
      v38 = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, Alertable, (__int64)Timeout);
        v53 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v53);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread(CurrentPrcb, v38);
        KiUpdateThreadState(CurrentPrcb, NextThread, 2LL, 0LL);
        v38->WaitReason = 32;
        v38->WaitIrql = WaitIrql;
        KiQueueReadyThread(CurrentPrcb, v38);
        if ( !(unsigned __int8)KiSwapContext(v38, NextThread, WaitIrql) )
          goto LABEL_103;
      }
      else if ( (v38->MiscFlags & 0x40) == 0 )
      {
LABEL_70:
        __writecr8(WaitIrql);
LABEL_71:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          EtwTraceDequeueWork(CurrentThread, v33, (unsigned int)v32);
        return v32;
      }
      __writecr8(1uLL);
      v38->MiscFlags &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
LABEL_103:
      v33 = EntryArray;
      goto LABEL_70;
    }
    if ( !Timeout || Timeout->QuadPart )
      goto LABEL_26;
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      v17 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
      goto LABEL_18;
    }
    if ( Alertable )
    {
      v54 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v54);
        while ( CurrentThread->ThreadLock );
      }
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v15 = 257;
        goto LABEL_14;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
        v15 = 192;
        goto LABEL_14;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v15 = 257;
        goto LABEL_14;
      }
    }
    else if ( ((unsigned __int8)WaitMode & CurrentThread->ApcState.UserApcPending) != 0 )
    {
      v15 = 192;
      goto LABEL_14;
    }
    v15 = 0;
LABEL_14:
    v16 = v15;
    if ( !v15 )
      v16 = 258LL;
    v17 = EntryArray;
    *EntryArray = (PLIST_ENTRY)v16;
    if ( v8 )
      CurrentThread->ThreadLock = 0LL;
LABEL_18:
    v18 = KeGetCurrentPrcb();
    v19 = CurrentThread->WaitIrql;
    if ( v19 >= 2u )
    {
      if ( v18->NextThread && !v18->DpcRoutineActive )
      {
        LOBYTE(v11) = 2;
        KiRequestSoftwareInterrupt(v18, v11, Alertable, Timeout);
      }
      goto LABEL_22;
    }
    v20 = v18->CurrentThread;
    if ( v18->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v18->CurrentThread, 0, Alertable, (__int64)Timeout);
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( v18->PrcbLock );
      }
      v49 = v18->NextThread;
      v18->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(v18, v20);
      KiUpdateThreadState(v18, v49, 2LL, 0LL);
      v20->WaitReason = 32;
      v20->WaitIrql = v19;
      KiQueueReadyThread(v18, v20);
      if ( !(unsigned __int8)KiSwapContext(v20, v49, v19) )
        goto LABEL_21;
    }
    else if ( (v20->MiscFlags & 0x40) == 0 )
    {
LABEL_21:
      __writecr8(v19);
LABEL_22:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v12;
      v50 = v17;
      goto LABEL_163;
    }
    __writecr8(1uLL);
    v20->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_21;
  }
  while ( 1 )
  {
LABEL_26:
    for ( i = CurrentThread->WaitIrql; ; CurrentThread->WaitIrql = i )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( v8 )
        CurrentThread->MiscFlags |= 0x10u;
      v56 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( CurrentThread->ThreadLock );
      }
      v22 = i;
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || i )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
    }
    if ( !v8 )
    {
      if ( ((unsigned __int8)WaitMode & CurrentThread->ApcState.UserApcPending) == 0 )
      {
LABEL_37:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        CurrentThread->ThreadLock = 0LL;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        v23 = 0;
        goto LABEL_38;
      }
      goto LABEL_98;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v59 = 257;
      goto LABEL_99;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPending = 1;
LABEL_98:
      v59 = 192;
      goto LABEL_99;
    }
    if ( !CurrentThread->Alerted[0] )
      goto LABEL_37;
    CurrentThread->Alerted[0] = 0;
    v59 = 257;
LABEL_99:
    CurrentThread->ThreadLock = 0LL;
    KiCheckForThreadDispatch(KeGetCurrentPrcb(), v22, Alertable, Timeout);
    v23 = v59;
LABEL_38:
    if ( v23 )
    {
      v46 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v23;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v12;
      v50 = v46;
LABEL_163:
      EtwTraceDequeueWork(CurrentThread, v50, v12);
      return v12;
    }
    if ( Queue != (PKQUEUE)CurrentThread->Queue )
      KiSwitchQueue(CurrentThread, Queue);
    v24 = (__int64 *)&CurrentThread->320;
    CurrentThread->WaitBlock[0].WaitType = 3;
    v25 = 128LL;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      v40 = 0;
      do
      {
        if ( (++v40 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v40);
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      v24 = (__int64 *)&CurrentThread->320;
      v25 = 128LL;
    }
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v42 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
      if ( v42 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v43 = EntryArray;
        v44 = v42;
LABEL_90:
        CurrentThread->WaitReason = 0;
        v45 = KeGetCurrentPrcb();
        if ( v45->DeferredReadyListHead.Next )
          KiProcessThreadWaitList(v45, 1LL, 0LL, 2LL);
        KiFastExitThreadWait(v45, CurrentThread, 1LL, v25);
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          EtwTraceDequeueWork(CurrentThread, v43, v44);
        return v44;
      }
      v24 = (__int64 *)&CurrentThread->320;
      v25 = 128LL;
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( CurrentThread->Queue )
      {
        v51 = CurrentThread->QueueListEntry.Flink;
        v52 = CurrentThread->QueueListEntry.Blink;
        if ( v51->Blink != &CurrentThread->QueueListEntry || v52->Flink != &CurrentThread->QueueListEntry )
          __fastfail(3u);
        v52->Flink = v51;
        v51->Blink = v52;
        CurrentThread->Queue = 0LL;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      v43 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
      goto LABEL_121;
    }
    if ( v14 == 2 )
    {
      v39 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v14 )
        goto LABEL_46;
      if ( !QuadPart )
      {
LABEL_120:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v43 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
LABEL_121:
        v44 = 1;
        goto LABEL_90;
      }
      v39 = MEMORY[0xFFFFF78000000014];
    }
    if ( v39 > QuadPart )
      goto LABEL_120;
LABEL_46:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v27 = Queue->Header.WaitListHead.Flink;
    if ( v27->Blink != &Queue->Header.WaitListHead )
      __fastfail(3u);
    *v24 = (__int64)v27;
    v24[1] = (__int64)p_WaitListHead;
    v27->Blink = (struct _LIST_ENTRY *)v24;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v24;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v28 = (_LIST_ENTRY *)KiCommitThreadWait((__int64)CurrentThread, v24, v14, QuadPart);
    CurrentThread->WaitReason = 0;
    if ( v28 != (_LIST_ENTRY *)256 )
      break;
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v41;
  }
  v29 = EntryArray;
  v30 = Count;
  *EntryArray = v28;
  if ( v30 > 1
    && (unsigned __int64)&v28[-17].Blink + 7 > 1
    && v28 != (_LIST_ENTRY *)128
    && v28 != (_LIST_ENTRY *)192
    && Queue->Header.SignalState )
  {
    v48 = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(Queue);
    if ( Queue->Header.SignalState )
      v12 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    __writecr8(v48);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v50 = v29;
    goto LABEL_163;
  }
  return v12;
}
