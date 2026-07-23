/*
 * XREFs of IoSetIoCompletionEx2 @ 0x14007DF40
 * Callers:
 *     IoSetIoCompletionEx @ 0x14007E644 (IoSetIoCompletionEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A39E8 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F65E0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtSetIoCompletion @ 0x140470834 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1404BF508 (IoSetIoCompletion.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeInsertQueueEx @ 0x14007E13C (KeInsertQueueEx.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1404708D8 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v13; // rbx
  __int64 MiniCompletionPacket; // rax
  _QWORD *v15; // rsi
  bool v16; // zf
  _QWORD *v17; // rbp
  bool v18; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r13
  int v22; // edx
  _QWORD *v23; // rcx
  unsigned int v24; // ecx
  __int64 v26; // r9
  unsigned __int8 IsThreadRunning; // al

  v9 = 0;
  v10 = a7;
  v13 = a1;
  if ( a7 )
  {
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(v10 + 32) = a3;
    *(_DWORD *)(v10 + 40) = a4;
    v26 = a8;
    *(_QWORD *)(v10 + 24) = a2;
    KeInsertQueueEx(a1, v10, 0LL, v26);
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    v15 = (_QWORD *)MiniCompletionPacket;
    if ( MiniCompletionPacket )
    {
      v16 = a8 == 0;
      *(_QWORD *)(MiniCompletionPacket + 32) = a3;
      *(_DWORD *)(MiniCompletionPacket + 40) = a4;
      v17 = (_QWORD *)(v13 + 8);
      *(_QWORD *)(MiniCompletionPacket + 24) = a2;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      v18 = !v16;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v15, IsThreadRunning);
      }
      LODWORD(a7) = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
      {
        do
          KeYieldProcessorEx(&a7);
        while ( (*(_DWORD *)v13 & 0x80u) != 0 );
      }
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v13, v15) )
      {
        v22 = *(_DWORD *)(v13 + 4);
        *(_DWORD *)(v13 + 4) = v22 + 1;
        v23 = *(_QWORD **)(v13 + 32);
        if ( *v23 != v13 + 24 )
          __fastfail(3u);
        *v15 = v13 + 24;
        v15[1] = v23;
        *v23 = v15;
        *(_QWORD *)(v13 + 32) = v15;
        if ( !v22 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters(CurrentPrcb, v13);
      }
      _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
      if ( v18 )
        v24 = 3;
      else
        v24 = 0;
      KiExitDispatcher((__int64)CurrentPrcb, v24, 1LL, 0LL, CurrentIrql);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
