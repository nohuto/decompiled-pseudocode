/*
 * XREFs of IoSetIoCompletionEx2 @ 0x140013590
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14009D7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011311C (AlpcpQueueIoCompletionPort.c)
 *     IoSetIoCompletionEx @ 0x14012CB98 (IoSetIoCompletionEx.c)
 *     IoSetIoCompletion @ 0x14042D0C8 (IoSetIoCompletion.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14042D3D0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  _QWORD *v8; // rsi
  __int64 v12; // rdi
  __int64 MiniCompletionPacket; // rax
  unsigned int v14; // ebx
  bool v15; // r14
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *v18; // rbp
  unsigned __int8 v19; // al
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v23; // r15
  _KTHREAD *CurrentThread; // rbp
  unsigned __int8 v25; // al
  unsigned int v26; // ebx

  v8 = (_QWORD *)a7;
  v12 = a1;
  if ( a7 )
  {
    v23 = a1 + 8;
    *(_QWORD *)(a7 + 24) = a2;
    v15 = a8 != 0;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
    *(_QWORD *)(a7 + 48) = a5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      if ( CurrentThread->WaitBlockFill6[68] != 2 || (v25 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
        v25 = 0;
      EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, a7, v25);
    }
    v26 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v26);
      }
      while ( (*(_DWORD *)v12 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v12, 7u) );
    }
    if ( *(_QWORD *)(v23 + 8) != v23
      && *(_DWORD *)(v12 + 40) < *(_DWORD *)(v12 + 44)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v12 || CurrentThread->WaitReason != 15)
      && (unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v12, a7) )
    {
      goto LABEL_43;
    }
    ++*(_DWORD *)(v12 + 4);
    v20 = v12 + 24;
    v21 = *(_QWORD **)(v12 + 32);
    *(_QWORD *)a7 = v12 + 24;
    *(_QWORD *)(a7 + 8) = v21;
    if ( *v21 != v12 + 24 )
      __fastfail(3u);
    goto LABEL_42;
  }
  LOBYTE(a1) = 1;
  MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
  v8 = (_QWORD *)MiniCompletionPacket;
  if ( !MiniCompletionPacket )
    return 3221225626LL;
  *(_QWORD *)(MiniCompletionPacket + 24) = a2;
  *(_DWORD *)(MiniCompletionPacket + 40) = a4;
  v14 = 0;
  *(_QWORD *)(MiniCompletionPacket + 32) = a3;
  v15 = a8 != 0;
  *(_QWORD *)(MiniCompletionPacket + 48) = a5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    if ( v18->WaitBlockFill6[68] != 2 || (v19 = 1, v18->NextProcessor != KeGetPcr()->Prcb.Number) )
      v19 = 0;
    EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v8, v19);
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    while ( (*(_DWORD *)v12 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v12, 7u) );
  }
  if ( *(_QWORD *)(v12 + 16) == v12 + 8
    || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v12 + 44)
    || v18->Queue == (_DISPATCHER_HEADER *volatile)v12 && v18->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v12, v8) )
  {
    ++*(_DWORD *)(v12 + 4);
    v20 = v12 + 24;
    v21 = *(_QWORD **)(v12 + 32);
    *v8 = v12 + 24;
    v8[1] = v21;
    if ( *v21 != v12 + 24 )
      __fastfail(3u);
LABEL_42:
    *v21 = v8;
    *(_QWORD *)(v20 + 8) = v8;
  }
LABEL_43:
  _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, v15, 1, 0, CurrentIrql);
  return 0LL;
}
