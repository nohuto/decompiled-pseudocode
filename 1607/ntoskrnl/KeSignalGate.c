/*
 * XREFs of KeSignalGate @ 0x1400A889C
 * Callers:
 *     MiReleaseControlAreaWaiters @ 0x140026CE8 (MiReleaseControlAreaWaiters.c)
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     KiRetireDpcList @ 0x140058280 (KiRetireDpcList.c)
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 *     MiReturnWsToExpansionList @ 0x14007BEAC (MiReturnWsToExpansionList.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 *     MiDereferencePageRuns @ 0x140107058 (MiDereferencePageRuns.c)
 *     MiZeroInParallelWorker @ 0x140109B40 (MiZeroInParallelWorker.c)
 *     MiAttachThreadDone @ 0x14010B0AC (MiAttachThreadDone.c)
 *     MiZeroInParallel @ 0x14010C2DC (MiZeroInParallel.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14013A830 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x14013AE70 (MiInitializePageZeroing.c)
 *     MiDeleteZeroThreadContext @ 0x14013F1EC (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x140166C60 (PspGetSetContextSpecialApc.c)
 *     MiSubsectionProtosCreated @ 0x1401EDCB4 (MiSubsectionProtosCreated.c)
 *     PsWatchWorkingSet @ 0x14020F20C (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x140664DB8 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14068269C (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057DA0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EE800 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F9DBC (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2C78 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225C20 (EtwTraceEnqueueWork.c)
 */

void __fastcall KeSignalGate(__int64 a1, unsigned int a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  char v8; // al
  bool v9; // zf
  __int64 v10; // rsi
  _QWORD *v11; // rbp
  struct _KPRCB *v12; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v14; // r8
  int v15; // r8d
  __int64 *v16; // rdx
  __int64 v17; // [rsp+70h] [rbp+8h]
  unsigned __int8 CurrentIrql; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v4 = *(_QWORD **)(a1 + 8);
    while ( v4 != (_QWORD *)(a1 + 8) )
    {
      v5 = (__int64)v4;
      v4 = (_QWORD *)*v4;
      v6 = *(_QWORD *)v5;
      v7 = *(_QWORD **)(v5 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v8 = *(_BYTE *)(v5 + 16);
      if ( v8 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v5, *(unsigned __int16 *)(v5 + 18), 0LL) )
        {
          v9 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v9 )
            break;
        }
      }
      else if ( v8 == 2 )
      {
        *(_BYTE *)(v5 + 17) = 5;
        v10 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v5 = 0LL;
        v11 = (_QWORD *)(v10 + 8);
        __writecr8(2uLL);
        v12 = KeGetCurrentPrcb();
        CurrentThread = v12->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v14) = KeIsThreadRunning(v12->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v5, v14);
        }
        KiAcquireKobjectLockSafe(v10);
        if ( (_QWORD *)*v11 == v11
          || *(_DWORD *)(v10 + 40) >= *(_DWORD *)(v10 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v10 && CurrentThread->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v12, v10, v5) )
        {
          v15 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 4) = v15 + 1;
          v16 = *(__int64 **)(v10 + 32);
          if ( *v16 != v10 + 24 )
            __fastfail(3u);
          *(_QWORD *)v5 = v10 + 24;
          *(_QWORD *)(v5 + 8) = v16;
          *v16 = v5;
          *(_QWORD *)(v10 + 32) = v5;
          if ( !v15 && (_QWORD *)*v11 != v11 )
            KiWakeOtherQueueWaiters(v12, v10);
        }
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
        v9 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v9 )
          break;
        CurrentPrcb = (struct _KPRCB *)v17;
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v5, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher(v17, 0LL, 1LL, a2, CurrentIrql);
}
