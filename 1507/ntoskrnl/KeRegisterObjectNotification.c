/*
 * XREFs of KeRegisterObjectNotification @ 0x14002E0E0
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x14002DED0 (NtAssociateWaitCompletionPacket.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14006D694 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1401654EC (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x1407E66C8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // edx
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v12; // al
  _QWORD *v13; // rcx
  _QWORD *v15; // rcx

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  v8 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 <= 0 )
  {
    v15 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)a3 = a1 + 8;
    *(_QWORD *)(a3 + 8) = v15;
    if ( *v15 != a1 + 8 )
      __fastfail(3u);
    *v15 = a3;
    *(_QWORD *)(a1 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    if ( (*(_BYTE *)a1 & 7) == 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
    }
    else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
    {
      *(_DWORD *)(a1 + 4) = v9 - 1;
    }
    *(_BYTE *)(a3 + 17) = 5;
    *(_QWORD *)a3 = 0LL;
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      if ( CurrentThread->WaitBlockFill6[68] != 2 || (v12 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
        v12 = 0;
      EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, a3, v12);
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( (*(_DWORD *)a2 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a2, 7u) );
    }
    if ( *(_QWORD *)(a2 + 16) == a2 + 8
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      ++*(_DWORD *)(a2 + 4);
      v13 = *(_QWORD **)(a2 + 32);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v13;
      if ( *v13 != a2 + 24 )
        __fastfail(3u);
      *v13 = a3;
      *(_QWORD *)(a2 + 32) = a3;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
    return 1;
  }
}
