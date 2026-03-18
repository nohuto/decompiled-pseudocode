/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x14020BC24
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x140194EC0 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x140195080 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x140699E8C (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiSwitchQueue @ 0x1401229BC (KiSwitchQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

void KiSwapToUmsThreadContinue()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID Object; // rsi
  int v2; // eax
  __int64 v3; // rbx
  unsigned __int64 Queue; // r8
  _QWORD *v5; // rsi
  unsigned __int8 v6; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *v8; // rbp
  char v9; // al
  unsigned int v10; // r14d
  _QWORD *v11; // rcx
  __int16 v12; // ax
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v2 = *((_DWORD *)Object + 20);
  if ( (v2 & 2) == 0 )
  {
    *((_DWORD *)Object + 20) = v2 | 2;
    CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (((*((_BYTE *)CurrentThread->WaitBlock[3].SparePtr + 72) & 1) == 0) << 16)) & 0x10000;
    v3 = *((_QWORD *)Object + 4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    Queue = (unsigned __int64)CurrentThread->Queue;
    if ( v3 != Queue )
      KiSwitchQueue((__int64)CurrentThread, v3, Queue);
    v5 = (_QWORD *)*((_QWORD *)Object + 5);
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      if ( v8->WaitBlockFill6[68] != 2 || (v9 = 1, v8->NextProcessor != KeGetPcr()->Prcb.Number) )
        v9 = 0;
      LOBYTE(Queue) = v9;
      EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v5, Queue);
    }
    v10 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v3, 7u) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( (*(_DWORD *)v3 & 0x80u) != 0 );
    }
    if ( *(_QWORD *)(v3 + 16) == v3 + 8
      || *(_DWORD *)(v3 + 40) >= *(_DWORD *)(v3 + 44)
      || v8->Queue == (_DISPATCHER_HEADER *volatile)v3 && v8->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v3, (__int64)v5) )
    {
      ++*(_DWORD *)(v3 + 4);
      v11 = *(_QWORD **)(v3 + 32);
      *v5 = v3 + 24;
      v5[1] = v11;
      if ( *v11 != v3 + 24 )
        __fastfail(3u);
      *v11 = v5;
      *(_QWORD *)(v3 + 32) = v5;
    }
    _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
    KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, v6);
    __writecr8(CurrentIrql);
  }
  v12 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v12;
  if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
