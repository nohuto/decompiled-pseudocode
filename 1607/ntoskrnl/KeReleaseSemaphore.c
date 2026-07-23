/*
 * XREFs of KeReleaseSemaphore @ 0x140052530
 * Callers:
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1401CE42C (PnpProcessRebalance.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FE888 (NtSignalAndWaitForSingleObject.c)
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 *     AlpcpDoPortCleanup @ 0x140409A64 (AlpcpDoPortCleanup.c)
 *     IopUncacheInterfaceInformation @ 0x140484758 (IopUncacheInterfaceInformation.c)
 *     NtReleaseSemaphore @ 0x1404A7800 (NtReleaseSemaphore.c)
 *     NtReleaseKeyedEvent @ 0x1404C86E4 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1404C8890 (NtWaitForKeyedEvent.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140556678 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140578274 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x140578790 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x14061E4A0 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406423B0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140642430 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406424D0 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x14064E648 (IopQueryConflictList.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1400CD1D4 (KiCompleteDirectSwitchThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  int v4; // ebp
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // edi
  LONG v11; // eax
  struct _KSEMAPHORE *Flink; // rax
  struct _KSEMAPHORE *v14; // r14
  __int64 v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  char Blink; // al
  bool v18; // zf
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  bool v22; // si
  int v23; // r9d
  struct _KSEMAPHORE **v24; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v26; // r9
  struct _KPRCB *v27; // [rsp+38h] [rbp-40h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  struct _KSEMAPHORE *v29; // [rsp+48h] [rbp-30h]
  __int64 v30; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v22 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Semaphore);
  SignalState = Semaphore->Header.SignalState;
  v11 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v11 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v11;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    if ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      do
      {
        v14 = Flink;
        v29 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
        v15 = *(_QWORD *)&Flink->Header.Lock;
        v16 = Flink->Header.WaitListHead.Flink;
        if ( *(struct _KSEMAPHORE **)(v15 + 8) != v14 || (struct _KSEMAPHORE *)v16->Flink != v14 )
          __fastfail(3u);
        v16->Flink = (struct _LIST_ENTRY *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        Blink = (char)v14->Header.WaitListHead.Blink;
        if ( Blink == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, WORD1(v14->Header.WaitListHead.Blink), 0LL) )
          {
            v18 = Semaphore->Header.SignalState-- == 1;
            if ( v18 )
              break;
          }
        }
        else
        {
          if ( Blink == 2 )
          {
            BYTE1(v14->Header.WaitListHead.Blink) = 5;
            v30 = *(_QWORD *)&v14->Limit;
            *(_QWORD *)&v14->Header.Lock = 0LL;
            __writecr8(2uLL);
            v27 = KeGetCurrentPrcb();
            CurrentThread = v27->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
              EtwTraceEnqueueWork(v26, v14, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v30);
            v19 = (_QWORD *)(v30 + 8);
            v20 = v30;
            if ( (_QWORD *)*v19 != v19
              && *(_DWORD *)(v30 + 40) < *(_DWORD *)(v30 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v30 || CurrentThread->WaitReason != 15) )
            {
              v21 = KiWakeQueueWaiter(v27, v30, v14);
              v20 = v30;
              if ( v21 )
                goto LABEL_21;
              v19 = (_QWORD *)(v30 + 8);
            }
            v23 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = v23 + 1;
            v24 = *(struct _KSEMAPHORE ***)(v20 + 32);
            if ( *v24 != (struct _KSEMAPHORE *)(v20 + 24) )
              __fastfail(3u);
            *(_QWORD *)&v14->Header.Lock = v20 + 24;
            v14->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v24;
            *v24 = v14;
            *(_QWORD *)(v20 + 32) = v14;
            if ( !v23 && (_QWORD *)*v19 != v19 )
            {
              KiWakeOtherQueueWaiters(v27, v20);
              v20 = v30;
            }
LABEL_21:
            _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
            v18 = Semaphore->Header.SignalState-- == 1;
            if ( v18 )
              break;
            goto LABEL_25;
          }
          KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
        }
LABEL_25:
        Flink = v29;
      }
      while ( v29 != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead );
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  if ( v22 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, Increment, CurrentIrql);
  return SignalState;
}
