/*
 * XREFs of KeSignalGate @ 0x140127FF0
 * Callers:
 *     MiReturnWsToExpansionList @ 0x14002B690 (MiReturnWsToExpansionList.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     MiAttachThreadDone @ 0x1400FB904 (MiAttachThreadDone.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     PspGetSetContextSpecialApc @ 0x14018B2A0 (PspGetSetContextSpecialApc.c)
 *     PsWatchWorkingSet @ 0x140243858 (PsWatchWorkingSet.c)
 *     MiReleaseFileExtentWaiters @ 0x1406AA4D8 (MiReleaseFileExtentWaiters.c)
 *     MiScrubMemoryWorker @ 0x1406AA94C (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x1406C6938 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v5; // edi
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  char v10; // al
  __int64 v11; // rsi
  _KTHREAD *CurrentThread; // r14
  bool v13; // al
  unsigned int v14; // ebp
  __int64 *v15; // rcx
  signed __int64 v18; // [rsp+80h] [rbp+8h]
  struct _KPRCB *v20; // [rsp+90h] [rbp+18h]
  unsigned __int8 CurrentIrql; // [rsp+98h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v18 = (signed __int64)CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    CurrentPrcb = (struct _KPRCB *)v18;
  }
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v6 = *(_QWORD **)(a1 + 8);
    if ( v6 != (_QWORD *)(a1 + 8) )
    {
      while ( 1 )
      {
        v7 = (__int64)v6;
        v6 = (_QWORD *)*v6;
        v8 = *(_QWORD *)v7;
        v9 = *(_QWORD **)(v7 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = *(_BYTE *)(v7 + 16);
        if ( v10 == 1 )
        {
          if ( !(unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v7, *(unsigned __int16 *)(v7 + 18), 0LL) )
            goto LABEL_41;
        }
        else
        {
          if ( v10 != 2 )
          {
            KiTryUnwaitThread((__int64)CurrentPrcb, v7, 256LL, 0LL);
            goto LABEL_41;
          }
          *(_BYTE *)(v7 + 17) = 5;
          v11 = *(_QWORD *)(v7 + 24);
          *(_QWORD *)v7 = 0LL;
          __writecr8(2uLL);
          v20 = KeGetCurrentPrcb();
          CurrentThread = v20->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v13 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            LOBYTE(a3) = v13;
            EtwTraceEnqueueWork(CurrentThread, v7, a3);
          }
          v14 = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
          {
            do
            {
              if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v14);
            }
            while ( (*(_DWORD *)v11 & 0x80u) != 0 );
          }
          if ( *(_QWORD *)(v11 + 16) == v11 + 8
            || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v20, v11, v7) )
          {
            ++*(_DWORD *)(v11 + 4);
            v15 = *(__int64 **)(v11 + 32);
            *(_QWORD *)v7 = v11 + 24;
            *(_QWORD *)(v7 + 8) = v15;
            if ( *v15 != v11 + 24 )
              __fastfail(3u);
            *v15 = v7;
            *(_QWORD *)(v11 + 32) = v7;
          }
          _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
        }
        if ( (*(_DWORD *)(a1 + 4))-- == 1 )
          break;
LABEL_41:
        if ( v6 == (_QWORD *)(a1 + 8) )
          break;
        CurrentPrcb = (struct _KPRCB *)v18;
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher(v18, 0, 1u, a2, CurrentIrql);
}
