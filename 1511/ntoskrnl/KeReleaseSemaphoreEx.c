/*
 * XREFs of KeReleaseSemaphoreEx @ 0x14007A6F0
 * Callers:
 *     MiContractPagingFiles @ 0x14001BDC8 (MiContractPagingFiles.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140099508 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     MiCheckForControlAreaDeletion @ 0x1400B54F4 (MiCheckForControlAreaDeletion.c)
 *     PopIrpWorker @ 0x1401212D0 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x1401219F8 (PopDispatchQuerySetIrp.c)
 *     MiQueuePageFileExtension @ 0x1401DD024 (MiQueuePageFileExtension.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401E13D8 (MiContractWsSwapPageFileWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDoPortCleanup @ 0x14047EB1C (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14047F6F8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404832E0 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // ebx
  int v6; // r15d
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // r13d
  unsigned int v12; // r14d
  int v13; // eax
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  __int64 v19; // r14
  char v20; // bp
  __int64 v21; // rbx
  bool v22; // zf
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  struct _KPRCB *v28; // r15
  _KTHREAD *CurrentThread; // rbp
  unsigned __int8 IsThreadRunning; // al
  __int64 *v31; // rcx
  __int64 v33; // [rsp+30h] [rbp-58h]
  unsigned __int8 v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+90h] [rbp+8h] BYREF
  int v36; // [rsp+98h] [rbp+10h]
  unsigned int v37; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h] BYREF
  int v39; // [rsp+ACh] [rbp+24h]

  v39 = HIDWORD(a4);
  v36 = a2;
  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  v9 = 2LL;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v38 = 0;
  v33 = (__int64)CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v38);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    CurrentPrcb = (struct _KPRCB *)v33;
    v9 = 2LL;
  }
  v12 = *(_DWORD *)(a1 + 4);
  v37 = v12;
  v13 = v12 + v5;
  if ( (signed int)(v12 + v5) > *(_DWORD *)(a1 + 24) || v13 < (int)v12 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v13;
  if ( !v12 )
  {
    v14 = *(_QWORD **)(a1 + 8);
    if ( v14 != (_QWORD *)(a1 + 8) )
    {
      while ( 1 )
      {
        v15 = (__int64)v14;
        v14 = (_QWORD *)*v14;
        v16 = *(_QWORD *)v15;
        v17 = *(_QWORD **)(v15 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *(_BYTE *)(v15 + 16);
        if ( v18 == 1 )
        {
          v19 = *(unsigned __int16 *)(v15 + 18);
          v20 = 0;
          v21 = *(_QWORD *)(v15 + 24);
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v35);
            while ( *(_QWORD *)(v21 + 64) );
          }
          if ( *(_BYTE *)(v21 + 388) == 5 )
            v20 = KiSignalThread(v33, v21, v19, v15);
          *(_QWORD *)(v21 + 64) = 0LL;
          ++*(_BYTE *)(v15 + 17);
          if ( v20 )
          {
            v22 = (*(_DWORD *)(a1 + 4))-- == 1;
            if ( v22 )
              goto LABEL_20;
          }
        }
        else if ( v18 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v27 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          __writecr8(2uLL);
          v28 = KeGetCurrentPrcb();
          CurrentThread = v28->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v28->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v27, v9, a3);
          if ( *(_QWORD *)(v27 + 16) == v27 + 8
            || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v27 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v28, v27, v15) )
          {
            ++*(_DWORD *)(v27 + 4);
            v31 = *(__int64 **)(v27 + 32);
            *(_QWORD *)v15 = v27 + 24;
            *(_QWORD *)(v15 + 8) = v31;
            if ( *v31 != v27 + 24 )
              __fastfail(3u);
            *v31 = v15;
            *(_QWORD *)(v27 + 32) = v15;
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          v22 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v22 )
          {
LABEL_20:
            v12 = v37;
            CurrentIrql = v34;
            v6 = v36;
            break;
          }
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
        }
        if ( v14 == (_QWORD *)(a1 + 8) )
          goto LABEL_20;
        CurrentPrcb = (struct _KPRCB *)v33;
        v9 = 2LL;
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v11 = 1;
    if ( (a5 & 4) == 0 )
      v11 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    v23 = *(_QWORD *)(v33 + 8);
    if ( (*(_DWORD *)(v23 + 120) & 0x10) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v23 + 120), 4u);
      _disable();
      v24 = KiEndThreadCycleAccumulation(v33, v23, 0LL);
      KiStartThreadCycleAccumulation(v33, v23, 0LL);
      _enable();
      v25 = *(_QWORD *)(v33 + 11400);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v23 + 32);
        if ( v26 > v24 )
          *(_QWORD *)(v25 - 184) += v26 - v24;
      }
      KiRemoveBoostThread(v33, v23);
      *(_QWORD *)(v23 + 32) = v24;
    }
  }
  KiExitDispatcher(v33, v11, 1, v6, CurrentIrql);
  return v12;
}
