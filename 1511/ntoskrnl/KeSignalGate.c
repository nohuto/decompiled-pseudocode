/*
 * XREFs of KeSignalGate @ 0x1400E9410
 * Callers:
 *     MiAttachThreadDone @ 0x140009620 (MiAttachThreadDone.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MiReturnWsToExpansionList @ 0x14009B428 (MiReturnWsToExpansionList.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiZeroNodePages @ 0x140131668 (MiZeroNodePages.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x14015B7C0 (PspGetSetContextSpecialApc.c)
 *     MiSubsectionProtosCreated @ 0x1401E3B64 (MiSubsectionProtosCreated.c)
 *     PsWatchWorkingSet @ 0x1401F54A0 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x14062CEA4 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x140643C20 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

void __fastcall KeSignalGate(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  char v11; // al
  bool v12; // zf
  __int64 v13; // rsi
  struct _KPRCB *v14; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h]
  unsigned int v19; // [rsp+78h] [rbp+10h]
  unsigned __int8 CurrentIrql; // [rsp+80h] [rbp+18h]

  v19 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v7 = *(_QWORD **)(a1 + 8);
    while ( v7 != (_QWORD *)(a1 + 8) )
    {
      v8 = (__int64)v7;
      v7 = (_QWORD *)*v7;
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD **)(v8 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = *(_BYTE *)(v8 + 16);
      if ( v11 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v8, *(unsigned __int16 *)(v8 + 18), 0LL) )
        {
          v12 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v12 )
            break;
        }
      }
      else if ( v11 == 2 )
      {
        *(_BYTE *)(v8 + 17) = 5;
        v13 = *(_QWORD *)(v8 + 24);
        *(_QWORD *)v8 = 0LL;
        __writecr8(2uLL);
        v14 = KeGetCurrentPrcb();
        CurrentThread = v14->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v16) = KeIsThreadRunning(v14->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v8, v16);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v13, v5, v6);
        if ( *(_QWORD *)(v13 + 16) == v13 + 8
          || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v14, v13, v8) )
        {
          ++*(_DWORD *)(v13 + 4);
          v17 = *(__int64 **)(v13 + 32);
          *(_QWORD *)v8 = v13 + 24;
          *(_QWORD *)(v8 + 8) = v17;
          if ( *v17 != v13 + 24 )
            __fastfail(3u);
          *v17 = v8;
          *(_QWORD *)(v13 + 32) = v8;
        }
        _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
        v12 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v12 )
          break;
        CurrentPrcb = (struct _KPRCB *)v18;
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v8, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher(v18, 0LL, 1LL, v19, CurrentIrql);
}
