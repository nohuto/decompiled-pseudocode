/*
 * XREFs of KeRemoveQueueEx @ 0x1400807E0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x1400F4D38 (KeRemoveQueue.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiTestForAlertPending @ 0x14002A034 (KiTestForAlertPending.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     KiAttemptFastRemoveQueue @ 0x1400E6DC4 (KiAttemptFastRemoveQueue.c)
 *     KiSwitchQueue @ 0x1400E7B20 (KiSwitchQueue.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     EtwTraceDequeueWork @ 0x14020DC5C (EtwTraceDequeueWork.c)
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
  BOOLEAN v8; // di
  ULONG_PTR v10; // rdx
  unsigned __int8 CurrentIrql; // al
  ULONG v12; // r12d
  PLIST_ENTRY *v13; // r13
  ULONG v14; // r9d
  __int64 v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // rcx
  struct _KPRCB *v18; // rsi
  unsigned __int8 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  _KTHREAD *v23; // rdi
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int8 WaitIrql; // bp
  PLIST_ENTRY *v28; // r14
  __int64 v29; // rcx
  struct _KPRCB *v30; // rsi
  unsigned __int8 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // r8
  _KTHREAD *NextThread; // rdi
  __int64 v36; // r8
  bool v37; // zf
  PLIST_ENTRY *v38; // rdx
  PLIST_ENTRY *v39; // r13
  int v40; // edi
  struct _KQUEUE *v41; // r8
  struct _LIST_ENTRY *v42; // rbp
  unsigned int v43; // edi
  ULONG v44; // edi
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  struct _LIST_ENTRY *v47; // rcx
  __int64 v48; // rax
  unsigned __int8 v49; // al
  ULONG v50; // ebp
  unsigned __int8 v51; // di
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  int v55; // [rsp+30h] [rbp-58h] BYREF
  int v56; // [rsp+34h] [rbp-54h] BYREF
  int v57; // [rsp+38h] [rbp-50h] BYREF
  int v58; // [rsp+3Ch] [rbp-4Ch] BYREF
  unsigned __int64 QuadPart; // [rsp+40h] [rbp-48h]
  unsigned int v60; // [rsp+90h] [rbp+8h]
  BOOLEAN v61; // [rsp+A0h] [rbp+18h]
  int v62; // [rsp+A8h] [rbp+20h] BYREF

  v61 = Alertable;
  CurrentThread = KeGetCurrentThread();
  v8 = Alertable;
  v10 = 2LL;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v60 = 1;
    }
    else
    {
      v60 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v60 = 0;
  }
  v13 = EntryArray;
  if ( (PKQUEUE)CurrentThread->Queue != Queue )
  {
    while ( 1 )
    {
LABEL_42:
      WaitIrql = CurrentThread->WaitIrql;
      while ( 1 )
      {
        CurrentThread->MiscFlags &= ~0x10u;
        CurrentThread->WaitRegister.Flags = 0;
        CurrentThread->WaitMode = WaitMode;
        if ( v61 )
          CurrentThread->MiscFlags |= 0x10u;
        v58 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v58, v10, Alertable);
          while ( CurrentThread->ThreadLock );
        }
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        v10 = 2LL;
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      v39 = EntryArray;
      if ( v61 )
      {
        if ( CurrentThread->Alerted[WaitMode] )
        {
          CurrentThread->Alerted[WaitMode] = 0;
          v40 = 257;
          goto LABEL_92;
        }
        if ( WaitMode
          && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPending = 1;
LABEL_91:
          v40 = 192;
LABEL_92:
          CurrentThread->ThreadLock = 0LL;
          KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
          goto LABEL_94;
        }
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v40 = 257;
          goto LABEL_92;
        }
      }
      else if ( ((unsigned __int8)WaitMode & CurrentThread->ApcState.UserApcPending) != 0 )
      {
        goto LABEL_91;
      }
      CurrentThread->WaitBlockFill6[68] = 5;
      v40 = 0;
      CurrentThread->WaitReason = 15;
      CurrentThread->ThreadLock = 0LL;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_94:
      if ( v40 )
      {
        *v39 = (PLIST_ENTRY)v40;
        goto LABEL_141;
      }
      v41 = (struct _KQUEUE *)CurrentThread->Queue;
      if ( Queue != v41 )
        KiSwitchQueue(CurrentThread, Queue);
      v42 = (struct _LIST_ENTRY *)&CurrentThread->320;
      v43 = 0;
      CurrentThread->WaitBlock[0].WaitType = 1;
      CurrentThread->WaitBlockFill4[17] = 4;
      CurrentThread->WaitBlock[0].WaitKey = 128;
      CurrentThread->WaitBlock[0].Object = Queue;
      if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
        {
          if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v43, v10, v41);
        }
        while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      }
      if ( Queue->Header.SignalState )
      {
        if ( Queue->CurrentCount <= Queue->MaximumCount )
        {
          v44 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
          if ( v44 )
          {
            _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
LABEL_134:
            CurrentThread->WaitReason = 0;
            CurrentPrcb = KeGetCurrentPrcb();
            if ( CurrentPrcb->DeferredReadyListHead.Next )
              KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, 1LL);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              EtwTraceDequeueWork(CurrentThread, v39, v44);
            return v44;
          }
        }
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
        *v39 = (PLIST_ENTRY)128;
        goto LABEL_133;
      }
      v45 = QuadPart;
      if ( v60 == 2 )
      {
        v46 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        if ( !v60 )
          goto LABEL_114;
        if ( !QuadPart )
          goto LABEL_118;
        v46 = MEMORY[0xFFFFF78000000014];
      }
      if ( v46 > QuadPart )
      {
LABEL_118:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        *v39 = (PLIST_ENTRY)258;
LABEL_133:
        v44 = 1;
        goto LABEL_134;
      }
LABEL_114:
      _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
      v47 = Queue->Header.WaitListHead.Blink;
      v42->Flink = &Queue->Header.WaitListHead;
      CurrentThread->WaitBlock[0].WaitListEntry.Blink = v47;
      if ( v47->Flink != &Queue->Header.WaitListHead )
        __fastfail(3u);
      v47->Flink = v42;
      Queue->Header.WaitListHead.Blink = v42;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      CurrentThread->WaitBlockCount = 1;
      v48 = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v60, v45);
      CurrentThread->WaitReason = 0;
      if ( v48 != 256 )
      {
        v50 = Count;
        *v39 = (PLIST_ENTRY)v48;
        if ( v50 > 1 && v48 != 128 && (unsigned __int64)(v48 - 257) > 1 && v48 != 192 && Queue->Header.SignalState )
        {
          v51 = KeGetCurrentIrql();
          __writecr8(2uLL);
          KiAcquireKobjectLockSafe(&Queue->Header.Lock, v10, Alertable);
          if ( Queue->Header.SignalState )
            v12 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          __writecr8(v51);
        }
LABEL_141:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
          return v12;
        v38 = v39;
LABEL_143:
        EtwTraceDequeueWork(CurrentThread, v38, v12);
        return v12;
      }
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v49;
    }
  }
  if ( !Queue->Header.SignalState || Queue->CurrentCount > Queue->MaximumCount )
  {
    if ( !Timeout || Timeout->QuadPart )
      goto LABEL_42;
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      v28 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
    }
    else
    {
      if ( Alertable )
      {
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v56, v10, Alertable);
          while ( CurrentThread->ThreadLock );
        }
      }
      v29 = (int)KiTestForAlertPending((__int64)CurrentThread, v8, WaitMode, 1);
      v28 = v13;
      if ( !v29 )
        v29 = 258LL;
      *v13 = (PLIST_ENTRY)v29;
      if ( v8 )
        CurrentThread->ThreadLock = 0LL;
    }
    v30 = KeGetCurrentPrcb();
    v31 = CurrentThread->WaitIrql;
    if ( v31 >= 2u )
    {
      if ( v30->NextThread && !v30->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v30, 2u);
    }
    else
    {
      v32 = (__int64)v30->CurrentThread;
      if ( v30->NextThread )
      {
        KiAbProcessContextSwitch(v30->CurrentThread, 0LL);
        v57 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v30->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v57, v33, v34);
          while ( v30->PrcbLock );
        }
        NextThread = v30->NextThread;
        v30->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread((__int64)v30, v32);
        KiUpdateThreadState((__int64)v30, NextThread, 2, 0);
        *(_BYTE *)(v32 + 643) = 32;
        *(_BYTE *)(v32 + 390) = v31;
        KiQueueReadyThread(v30, v32, v36);
        v37 = (unsigned __int8)KiSwapContext(v32, NextThread, v31) == 0;
      }
      else
      {
        v37 = (*(_DWORD *)(v32 + 116) & 0x40) == 0;
      }
      if ( !v37 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(v32 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      __writecr8(v31);
    }
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v38 = v28;
      goto LABEL_143;
    }
    return v12;
  }
  v62 = 0;
  while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v62, v10, Alertable);
    while ( (Queue->Header.LockNV & 0x80u) != 0 );
  }
  if ( !Queue->Header.SignalState || Queue->CurrentCount > Queue->MaximumCount )
    goto LABEL_41;
  v10 = (ULONG_PTR)Queue->EntryListHead.Flink;
  *(_QWORD *)&Alertable = &Queue->EntryListHead;
  v14 = Count;
  v15 = 0LL;
  do
  {
    --Queue->Header.SignalState;
    v16 = *(_QWORD *)v10;
    if ( !*(_QWORD *)v10 )
      KeBugCheckEx(0x96u, v10, (ULONG_PTR)Queue, ExWorkerQueue, *(_QWORD *)(v10 + 16));
    v17 = *(_QWORD **)(v10 + 8);
    if ( *(_QWORD *)(v16 + 8) != v10 || *v17 != v10 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *(_QWORD *)v10 = 0LL;
    v13[v15] = (PLIST_ENTRY)v10;
    v15 = (unsigned int)(v15 + 1);
    v10 = *(_QWORD *)Alertable;
  }
  while ( *(_QWORD *)Alertable != Alertable && (unsigned int)v15 < v14 );
  if ( !(_DWORD)v15 )
  {
LABEL_41:
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    goto LABEL_42;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  v18 = KeGetCurrentPrcb();
  v19 = CurrentThread->WaitIrql;
  if ( v19 >= 2u )
  {
    if ( v18->NextThread && !v18->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v18, 2u);
  }
  else
  {
    v20 = (__int64)v18->CurrentThread;
    if ( v18->NextThread )
    {
      KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v55, v21, v22);
        while ( v18->PrcbLock );
      }
      v23 = v18->NextThread;
      v18->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread((__int64)v18, v20);
      KiUpdateThreadState((__int64)v18, v23, 2, 0);
      *(_BYTE *)(v20 + 643) = 32;
      *(_BYTE *)(v20 + 390) = v19;
      KiQueueReadyThread(v18, v20, v24);
      v25 = (unsigned __int8)KiSwapContext(v20, v23, v19) == 0;
    }
    else
    {
      v25 = (*(_DWORD *)(v20 + 116) & 0x40) == 0;
    }
    if ( !v25 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(v20 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    __writecr8(v19);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTraceDequeueWork(CurrentThread, v13, (unsigned int)v15);
  return v15;
}
