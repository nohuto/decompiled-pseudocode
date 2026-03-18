/*
 * XREFs of KeReleaseSemaphore @ 0x140084230
 * Callers:
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1401BFE4C (PnpProcessRebalance.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401E61A0 (NtSignalAndWaitForSingleObject.c)
 *     PopSystemIrpCompletion @ 0x14039D018 (PopSystemIrpCompletion.c)
 *     AlpcpDoPortCleanup @ 0x14047EB1C (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x14049E890 (NtReleaseSemaphore.c)
 *     IopUncacheInterfaceInformation @ 0x1404A0F04 (IopUncacheInterfaceInformation.c)
 *     NtReleaseKeyedEvent @ 0x1404BBDF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1404BBFA0 (NtWaitForKeyedEvent.c)
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     IopAllocateBootResources @ 0x140529F08 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14054214C (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x140544B70 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x1405F4094 (FsRtlDeregisterUncProvider.c)
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14060DEC0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14060DF40 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14060DFE0 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1406193B4 (IopQueryConflictList.c)
 *     VerifierKeReleaseSemaphore @ 0x1406C64A4 (VerifierKeReleaseSemaphore.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiCompleteDirectSwitchThread @ 0x1401C9674 (KiCompleteDirectSwitchThread.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  int v4; // ebp
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  __int64 *v10; // rdx
  __int64 v11; // r8
  LONG SignalState; // edi
  LONG v13; // eax
  struct _KSEMAPHORE *Flink; // rax
  __int64 v15; // r14
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  char v18; // al
  bool v19; // zf
  __int64 v21; // rcx
  char v22; // al
  bool v23; // si
  unsigned __int8 IsThreadRunning; // al
  __int64 v25; // r9
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]
  struct _KPRCB *v27; // [rsp+40h] [rbp-38h]
  struct _KSEMAPHORE *v28; // [rsp+48h] [rbp-30h]
  __int64 v29; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v23 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Semaphore->Header.Lock, *(__int64 *)&Increment, *(__int64 *)&Adjustment);
  SignalState = Semaphore->Header.SignalState;
  v13 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v13 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v13;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    if ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      do
      {
        v15 = (__int64)Flink;
        v28 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
        v16 = *(struct _LIST_ENTRY **)&Flink->Header.Lock;
        v17 = Flink->Header.WaitListHead.Flink;
        if ( v16->Blink != (struct _LIST_ENTRY *)v15 || v17->Flink != (struct _LIST_ENTRY *)v15 )
          __fastfail(3u);
        v17->Flink = v16;
        v16->Blink = v17;
        v18 = *(_BYTE *)(v15 + 16);
        if ( v18 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
          {
            v19 = Semaphore->Header.SignalState-- == 1;
            if ( v19 )
              break;
          }
        }
        else if ( v18 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v29 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          __writecr8(2uLL);
          v27 = KeGetCurrentPrcb();
          CurrentThread = v27->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
            EtwTraceEnqueueWork(v25, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v29, (__int64)v10, v11);
          v21 = v29;
          if ( *(_QWORD *)(v29 + 16) == v29 + 8
            || *(_DWORD *)(v29 + 40) >= *(_DWORD *)(v29 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v29 && CurrentThread->WaitReason == 15
            || (v22 = KiWakeQueueWaiter((__int64)v27, v29, v15), v21 = v29, !v22) )
          {
            ++*(_DWORD *)(v21 + 4);
            v10 = *(__int64 **)(v21 + 32);
            *(_QWORD *)v15 = v21 + 24;
            *(_QWORD *)(v15 + 8) = v10;
            if ( *v10 != v21 + 24 )
              __fastfail(3u);
            *v10 = v15;
            *(_QWORD *)(v21 + 32) = v15;
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v19 = Semaphore->Header.SignalState-- == 1;
          if ( v19 )
            break;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
        }
        Flink = v28;
      }
      while ( v28 != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead );
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  if ( v23 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, Increment, CurrentIrql);
  return SignalState;
}
