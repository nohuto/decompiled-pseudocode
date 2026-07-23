/*
 * XREFs of KeRemovePriQueue @ 0x1400E5870
 * Callers:
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiAttemptFastRemovePriQueue @ 0x14007E880 (KiAttemptFastRemovePriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14007F058 (KiSetBasePriorityAndClearDecrement.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiSwitchPriQueue @ 0x1400B0A14 (KiSwitchPriQueue.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeRemovePriQueue(_DWORD *BugCheckParameter2, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r12
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // r9
  unsigned int v11; // r15d
  unsigned __int8 WaitIrql; // bp
  $C41897776C0457C78394BDAEF5CBAAD1 *v13; // r14
  __int64 v14; // r9
  int v15; // edi
  __int64 result; // rax
  unsigned __int64 Queue; // r8
  unsigned int v18; // edi
  __int64 QueuePriority; // rcx
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rbp
  int v24; // edi
  __int64 v25; // rax
  struct _KPRCB *v26; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v29; // rcx
  char v30; // r8
  int v31; // edx
  _DISPATCHER_HEADER *volatile v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // al
  unsigned __int64 v35; // rdx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v37; // r11
  unsigned __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-48h] BYREF
  __int64 v40; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+78h] [rbp+10h] BYREF
  int v42; // [rsp+80h] [rbp+18h] BYREF
  int v43; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v10 = 0LL;
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      v11 = 2;
      v33 = UnbiasedInterruptTime - (*v37 + CurrentThread->RelativeTimerBias);
      v10 = 0LL;
    }
    else
    {
      v33 = *(_QWORD *)a4;
      v11 = 1;
    }
    v40 = v33;
  }
  else
  {
    v11 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a2;
      if ( v6 )
        CurrentThread->MiscFlags |= 0x10u;
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
      v10 = 0LL;
    }
    v13 = &CurrentThread->320;
    if ( !v6 )
    {
      if ( ((unsigned __int8)a2 & CurrentThread->ApcState.UserApcPending) == 0 )
        goto LABEL_13;
      goto LABEL_70;
    }
    if ( CurrentThread->Alerted[a2] )
    {
      CurrentThread->Alerted[a2] = 0;
      v15 = 257;
    }
    else
    {
      if ( a2 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_70:
        v15 = 192;
        goto LABEL_71;
      }
      if ( !CurrentThread->Alerted[0] )
      {
LABEL_13:
        CurrentThread->WaitBlockFill6[68] = 5;
        v14 = 0LL;
        CurrentThread->WaitReason = 15;
        v15 = 0;
        CurrentThread->ThreadLock = 0LL;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        goto LABEL_14;
      }
      CurrentThread->Alerted[0] = 0;
      v15 = 257;
    }
LABEL_71:
    CurrentThread->ThreadLock = 0LL;
    KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql, a3, v10);
    v14 = 0LL;
LABEL_14:
    result = v15;
    if ( v15 )
      return result;
    Queue = (unsigned __int64)CurrentThread->Queue;
    if ( BugCheckParameter2 != (_DWORD *)Queue )
    {
      KiSwitchPriQueue((__int64)CurrentThread, (__int64)BugCheckParameter2, Queue);
      v14 = 0LL;
    }
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    v18 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = BugCheckParameter2;
    if ( _interlockedbittestandset(BugCheckParameter2, 7u) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
      while ( (*BugCheckParameter2 & 0x80u) != 0 || _interlockedbittestandset(BugCheckParameter2, 7u) );
      v14 = 0LL;
    }
    if ( BugCheckParameter2[1] )
      break;
LABEL_19:
    if ( v11 == 2 )
    {
      v38 = KiQueryUnbiasedInterruptTime(0LL) - CurrentThread->RelativeTimerBias;
      v35 = v40;
      v14 = 0LL;
    }
    else
    {
      if ( !v11 )
        goto LABEL_21;
      v35 = v40;
      if ( !v40 )
        goto LABEL_54;
      v38 = MEMORY[0xFFFFF78000000014];
    }
    if ( v38 > v35 )
    {
LABEL_54:
      v23 = 258LL;
      goto LABEL_32;
    }
LABEL_21:
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( CurrentThread->ThreadLock );
    }
    QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    v20 = (struct _LIST_ENTRY *)(BugCheckParameter2 + 2);
    _InterlockedDecrement(&BugCheckParameter2[QueuePriority + 134]);
    CurrentThread->ThreadLock = 0LL;
    v21 = *((_QWORD *)BugCheckParameter2 + 1);
    if ( *(_DWORD **)(v21 + 8) != BugCheckParameter2 + 2 )
      __fastfail(3u);
    v13->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)v21;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v20;
    *(_QWORD *)(v21 + 8) = v13;
    v20->Flink = (struct _LIST_ENTRY *)v13;
    _InterlockedAnd(BugCheckParameter2, 0xFFFFFF7F);
    v22 = v40;
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v11, v22);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v34;
    v10 = 0LL;
  }
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v43);
    while ( CurrentThread->ThreadLock );
  }
  v23 = (__int64)KiAttemptFastRemovePriQueue(
                   (ULONG_PTR)BugCheckParameter2,
                   &v41,
                   (unsigned __int8)CurrentThread->QueuePriority);
  if ( !v23 )
  {
    v14 = 0LL;
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_19;
  }
  v24 = v41;
  v25 = (unsigned __int8)CurrentThread->QueuePriority;
  if ( (_DWORD)v25 != v41 )
  {
    v31 = CurrentThread->QueuePriority & 0x100;
    if ( !v31 )
    {
      v32 = CurrentThread->Queue;
      _InterlockedDecrement((volatile signed __int32 *)&v32[22].WaitListHead + v25);
      _InterlockedIncrement((volatile signed __int32 *)&v32[22].WaitListHead + v41);
      v24 = v41;
    }
    CurrentThread->QueuePriority = v31 | (unsigned __int8)v24;
  }
  CurrentThread->Saturation = 0;
  KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, &v41, 0);
  if ( v24 != CurrentThread->Priority )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->NestingLevel )
    {
      CycleTime = CurrentThread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
      _enable();
    }
    v29 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
    v30 = v41;
    CurrentThread->QuantumTarget = v29;
    KiSetPriorityThread((__int64)CurrentThread, 0LL, v30);
  }
  CurrentThread->ThreadLock = 0LL;
LABEL_32:
  _InterlockedAnd(BugCheckParameter2, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v26 = KeGetCurrentPrcb();
  if ( v26->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)v26, 1u, 0LL, 2LL);
  LOBYTE(Queue) = 1;
  KiFastExitThreadWait(v26, CurrentThread, Queue, v14);
  return v23;
}
