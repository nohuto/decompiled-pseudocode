/*
 * XREFs of KeRemovePriQueue @ 0x14006FC60
 * Callers:
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiAttemptFastRemovePriQueue @ 0x140094430 (KiAttemptFastRemovePriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400950A0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     KiSwitchPriQueue @ 0x1400F1A30 (KiSwitchPriQueue.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeRemovePriQueue(_DWORD *BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // bp
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v9; // r12
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v11; // r11
  unsigned __int8 WaitIrql; // si
  $7206FD56FFE06BF40DFFA5887EA6BE2A *v13; // r13
  int v14; // edi
  __int64 result; // rax
  __int64 Queue; // r8
  unsigned int v17; // edi
  __int64 v18; // rsi
  unsigned int v19; // edi
  unsigned __int64 v20; // rax
  __int64 QueuePriority; // rcx
  struct _LIST_ENTRY *v22; // rcx
  unsigned __int8 v23; // al
  int v24; // edi
  __int64 v25; // rax
  int v26; // edx
  _DISPATCHER_HEADER *volatile v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v30; // rcx
  struct _KPRCB *v31; // rdi
  int v32; // [rsp+20h] [rbp-48h] BYREF
  int v33[17]; // [rsp+24h] [rbp-44h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+80h] [rbp+18h]
  unsigned __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) >= 0 )
    {
      v9 = *(_QWORD *)a4;
      v35 = 1;
    }
    else
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v9 = UnbiasedInterruptTime - (*v11 + CurrentThread->RelativeTimerBias);
      v35 = 2;
    }
  }
  else
  {
    v9 = v36;
    v35 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v6;
      if ( a3 )
        CurrentThread->MiscFlags |= 0x10u;
      LODWORD(v36) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v36);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v13 = &CurrentThread->320;
    if ( a3 )
    {
      if ( CurrentThread->Alerted[v6] )
      {
        CurrentThread->Alerted[v6] = 0;
        v14 = 257;
        goto LABEL_29;
      }
      if ( v6 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_28:
        v14 = 192;
LABEL_29:
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        goto LABEL_31;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v14 = 257;
        goto LABEL_29;
      }
    }
    else if ( ((unsigned __int8)v6 & CurrentThread->ApcState.UserApcPending) != 0 )
    {
      goto LABEL_28;
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    v14 = 0;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_31:
    result = v14;
    if ( v14 )
      return result;
    Queue = (__int64)CurrentThread->Queue;
    if ( BugCheckParameter2 != (_DWORD *)Queue )
      KiSwitchPriQueue(CurrentThread, BugCheckParameter2);
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    v17 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = BugCheckParameter2;
    if ( _interlockedbittestandset(BugCheckParameter2, 7u) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17, a2, Queue);
      }
      while ( (*BugCheckParameter2 & 0x80u) != 0 || _interlockedbittestandset(BugCheckParameter2, 7u) );
    }
    if ( BugCheckParameter2[1] )
      break;
LABEL_48:
    v19 = v35;
    if ( v35 == 2 )
    {
      v20 = KiQueryUnbiasedInterruptTime() - CurrentThread->RelativeTimerBias;
    }
    else
    {
      if ( !v35 )
        goto LABEL_54;
      if ( !v9 )
        goto LABEL_73;
      v20 = MEMORY[0xFFFFF78000000014];
    }
    if ( v20 > v9 )
    {
LABEL_73:
      v18 = 258LL;
      goto LABEL_74;
    }
LABEL_54:
    v33[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(v33);
      while ( CurrentThread->ThreadLock );
    }
    QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement(&BugCheckParameter2[QueuePriority + 134]);
    CurrentThread->ThreadLock = 0LL;
    v22 = (struct _LIST_ENTRY *)*((_QWORD *)BugCheckParameter2 + 2);
    v13->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(BugCheckParameter2 + 2);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v22;
    if ( v22->Flink != (struct _LIST_ENTRY *)(BugCheckParameter2 + 2) )
      __fastfail(3u);
    v22->Flink = (struct _LIST_ENTRY *)v13;
    *((_QWORD *)BugCheckParameter2 + 2) = v13;
    _InterlockedAnd(BugCheckParameter2, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v19, v9);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v23 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v23;
  }
  v32 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( CurrentThread->ThreadLock );
  }
  v18 = KiAttemptFastRemovePriQueue((ULONG_PTR)BugCheckParameter2);
  if ( !v18 )
  {
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_48;
  }
  v24 = v34;
  v25 = (unsigned __int8)CurrentThread->QueuePriority;
  if ( (_DWORD)v25 != v34 )
  {
    v26 = CurrentThread->QueuePriority & 0x100;
    if ( !v26 )
    {
      v27 = CurrentThread->Queue;
      _InterlockedDecrement((volatile signed __int32 *)&v27[22].WaitListHead + v25);
      _InterlockedIncrement((volatile signed __int32 *)&v27[22].WaitListHead + v34);
      v24 = v34;
    }
    CurrentThread->QueuePriority = v26 | (unsigned __int8)v24;
  }
  CurrentThread->Saturation = 0;
  KiSetBasePriorityAndClearDecrement(CurrentThread, &v34, 0LL);
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
      CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread);
      _enable();
    }
    v30 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
    CurrentThread->QuantumTarget = v30;
    KiSetPriorityThread(CurrentThread, 0LL);
  }
  CurrentThread->ThreadLock = 0LL;
LABEL_74:
  _InterlockedAnd(BugCheckParameter2, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v31 = KeGetCurrentPrcb();
  if ( v31->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v31, 1LL, 0LL);
  LOBYTE(Queue) = 1;
  KiFastExitThreadWait((__int64)v31, (__int64)CurrentThread, Queue);
  return v18;
}
