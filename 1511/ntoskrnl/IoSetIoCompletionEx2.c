/*
 * XREFs of IoSetIoCompletionEx2 @ 0x140093370
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140083BF0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400BC0D4 (AlpcpQueueIoCompletionPort.c)
 *     IoSetIoCompletionEx @ 0x1400C6954 (IoSetIoCompletionEx.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtSetIoCompletion @ 0x14044EF48 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1404F5440 (IoSetIoCompletion.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14044EFEC (IopAllocateMiniCompletionPacket.c)
 */

__int64 IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8,
        ...)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v13; // rbx
  __int64 MiniCompletionPacket; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rsi
  bool v18; // zf
  bool v19; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r13
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
    v17 = (_QWORD *)MiniCompletionPacket;
    if ( MiniCompletionPacket )
    {
      v18 = a8 == 0;
      *(_QWORD *)(MiniCompletionPacket + 32) = a3;
      *(_DWORD *)(MiniCompletionPacket + 40) = a4;
      *(_QWORD *)(MiniCompletionPacket + 24) = a2;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      v19 = !v18;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v17, IsThreadRunning);
      }
      LODWORD(a7) = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
      {
        do
          KeYieldProcessorEx(&a7, v15, v16);
        while ( (*(_DWORD *)v13 & 0x80u) != 0 );
      }
      if ( *(_QWORD *)(v13 + 16) == v13 + 8
        || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)CurrentPrcb, v13, (__int64)v17) )
      {
        ++*(_DWORD *)(v13 + 4);
        v23 = *(_QWORD **)(v13 + 32);
        *v17 = v13 + 24;
        v17[1] = v23;
        if ( *v23 != v13 + 24 )
          __fastfail(3u);
        *v23 = v17;
        *(_QWORD *)(v13 + 32) = v17;
      }
      _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
      if ( v19 )
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
