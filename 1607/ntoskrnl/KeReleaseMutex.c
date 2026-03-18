/*
 * XREFs of KeReleaseMutex @ 0x140055FE0
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14009D2C4 (WmipBuildTraceDeviceList.c)
 *     WmipReceiveNotifications @ 0x1400AF3D4 (WmipReceiveNotifications.c)
 *     WmipFindRegEntryByProviderId @ 0x1400C4838 (WmipFindRegEntryByProviderId.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400F12A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400FA57C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400FAC9C (LdrpGetFromMUIMemCache.c)
 *     WmipDeregisterRegEntry @ 0x140125060 (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012DDFC (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14012DE98 (WmipAllocRegEntry.c)
 *     WmiQueryTraceProviderCount @ 0x1401300C8 (WmiQueryTraceProviderCount.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 *     PopWdiTimerWorkerThread @ 0x14020A258 (PopWdiTimerWorkerThread.c)
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 *     EtwpDisableTraceProviders @ 0x14040B4EC (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x1404744DC (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1404746D0 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1404747B0 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x140474FA0 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x14047508C (WmipIsQuerySetGuid.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14049501C (EtwpFreeSystemLoggerIndex.c)
 *     EtwpUpdateKernelGroupMasks @ 0x140495D10 (EtwpUpdateKernelGroupMasks.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404C0C34 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipDeleteMethod @ 0x1404CC380 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x1404CC470 (WmipDisableCollectOrEvent.c)
 *     WmipEnumerateMofResources @ 0x1404E738C (WmipEnumerateMofResources.c)
 *     EtwpStartTrace @ 0x1404EEEF0 (EtwpStartTrace.c)
 *     WmipUnreferenceEntry @ 0x140505084 (WmipUnreferenceEntry.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052D4FC (EtwpUpdateDisallowedGuids.c)
 *     WmipDSCleanup @ 0x1405321F0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeregisterDevice @ 0x140532D54 (WmipDeregisterDevice.c)
 *     WmipAddDataSource @ 0x140537074 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537690 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405378E8 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140537B40 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x140537FAC (WmipFindISinGEbyName.c)
 *     IoWMIRegistrationControl @ 0x14053A454 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14053A690 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14053A760 (WmipUpdateDeviceStackSize.c)
 *     WmipRegistrationWorker @ 0x140543088 (WmipRegistrationWorker.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405465B0 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054AE98 (EtwpCrimsonProvEnableCallback.c)
 *     WmipAddMofResource @ 0x140550C40 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140550E78 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140574E44 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140574F70 (WmipProcessLegacyEtwRegister.c)
 *     WmipLegacyEtwCallback @ 0x140575CF8 (WmipLegacyEtwCallback.c)
 *     WmipSetTraceNotify @ 0x14057A164 (WmipSetTraceNotify.c)
 *     IoWMISetNotificationCallback @ 0x14057CEA4 (IoWMISetNotificationCallback.c)
 *     PopDiagNextCsSleepStudySession @ 0x140670804 (PopDiagNextCsSleepStudySession.c)
 *     IoWMIAllocateInstanceIds @ 0x14069C8A8 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14069D690 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14069E028 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x14069E748 (WmipQueryGuidInfo.c)
 *     WmipUpdateDataSource @ 0x14069F36C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x14069F8D0 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x14069FD28 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FEB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2A78 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406A5578 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406A55C8 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1406A7EFC (EtwpSampledProfileRunDown.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B8494 (NtStopProfile.c)
 *     sub_1406BC200 @ 0x1406BC200 (sub_1406BC200.c)
 *     MmIsDriverSuspectForVerifier @ 0x1406FE3A8 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140704AC8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C44 (VfDriverEnableVerifierForAll.c)
 *     VfDriverUnlock @ 0x140704D5C (VfDriverUnlock.c)
 *     ViDriverReApplyVerifierForAll @ 0x140704E64 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x14070F150 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x14070F1D0 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140715ED8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140716490 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140716514 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140721158 (VfSetVerifierInformationEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057DA0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EE800 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F9DBC (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2C78 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225C20 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutex(PRKMUTEX Mutex, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // r14
  int v3; // edi
  int ApcDisable; // r12d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  int SignalState; // ebp
  _KTHREAD *OwnerThread; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _LIST_ENTRY *v17; // rdx
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  char v20; // al
  bool v21; // zf
  NTSTATUS v22; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v24; // rdx
  __int64 v25; // r9
  struct _LIST_ENTRY **v26; // rdx
  struct _LIST_ENTRY *v27; // rcx
  char v28; // al
  int Flink_high; // r10d
  struct _LIST_ENTRY *v30; // r9
  struct _LIST_ENTRY *v31; // [rsp+30h] [rbp-88h]
  struct _KPRCB *v32; // [rsp+38h] [rbp-80h]
  _KTHREAD *v33; // [rsp+40h] [rbp-78h]
  unsigned __int8 v34; // [rsp+48h] [rbp-70h]
  char v35[8]; // [rsp+50h] [rbp-68h] BYREF
  LONG LockNV; // [rsp+58h] [rbp-60h]
  int v37; // [rsp+C0h] [rbp+8h] BYREF
  BOOLEAN v38; // [rsp+C8h] [rbp+10h]
  struct _LIST_ENTRY *v39; // [rsp+D0h] [rbp+18h]
  struct _LIST_ENTRY **p_Blink; // [rsp+D8h] [rbp+20h]

  v38 = Wait;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  ApcDisable = 0;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Mutex);
  SignalState = Mutex->Header.SignalState;
  if ( Mutex->OwnerThread != CurrentThread || Mutex->Header.Size != CurrentPrcb->DpcRoutineActive )
  {
    _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    v22 = -1073741754;
    if ( Mutex->Abandoned )
      v22 = 128;
    RtlRaiseStatus(v22);
  }
  if ( ++Mutex->Header.SignalState == 1 && SignalState <= 0 )
  {
    LockNV = Mutex->Header.LockNV;
    BYTE2(LockNV) = 0;
    Mutex->Header.LockNV = LockNV;
    ApcDisable = Mutex->ApcDisable;
    OwnerThread = Mutex->OwnerThread;
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v37);
      while ( OwnerThread->ThreadLock );
    }
    Flink = Mutex->MutantListEntry.Flink;
    Blink = Mutex->MutantListEntry.Blink;
    if ( Flink->Blink != &Mutex->MutantListEntry || Blink->Flink != &Mutex->MutantListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    OwnerThread->ThreadLock = 0LL;
    v12 = Mutex->Header.WaitListHead.Flink;
    Mutex->OwnerThread = 0LL;
    if ( v12 == &Mutex->Header.WaitListHead )
    {
LABEL_10:
      CurrentIrql = v34;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v17 = v12;
      v12 = v12->Flink;
      v31 = v17;
      v18 = v17->Flink;
      v19 = v17->Blink;
      if ( v17->Flink->Blink != v17 || v19->Flink != v17 )
        __fastfail(3u);
      v19->Flink = v18;
      v18->Blink = v19;
      v20 = (char)v17[1].Flink;
      if ( v20 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v17, WORD1(v17[1].Flink), v35) )
        {
          v21 = Mutex->Header.SignalState-- == 1;
          if ( v21 )
            goto LABEL_10;
        }
      }
      else
      {
        if ( v20 == 2 )
        {
          BYTE1(v17[1].Flink) = 5;
          v39 = v17[1].Blink;
          p_Blink = &v39->Blink;
          v17->Flink = 0LL;
          __writecr8(2uLL);
          v32 = KeGetCurrentPrcb();
          v33 = v32->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v32->CurrentThread);
            EtwTraceEnqueueWork(v25, v24, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v39);
          v26 = p_Blink;
          v27 = v39;
          if ( *v26 == (struct _LIST_ENTRY *)v26
            || LODWORD(v39[2].Blink) >= HIDWORD(v39[2].Blink)
            || (struct _LIST_ENTRY *)v33->Queue == v39 && v33->WaitReason == 15 )
          {
LABEL_36:
            Flink_high = HIDWORD(v27->Flink);
            HIDWORD(v27->Flink) = Flink_high + 1;
            v30 = v27[2].Flink;
            if ( v30->Flink != (struct _LIST_ENTRY *)&v27[1].Blink )
              __fastfail(3u);
            v31->Flink = (struct _LIST_ENTRY *)((char *)v27 + 24);
            v31->Blink = v30;
            v30->Flink = v31;
            v27[2].Flink = v31;
            if ( !Flink_high && *v26 != (struct _LIST_ENTRY *)v26 )
            {
              KiWakeOtherQueueWaiters(v32, v27);
              v27 = v39;
            }
          }
          else
          {
            v28 = KiWakeQueueWaiter(v32, v39, v31);
            v27 = v39;
            if ( !v28 )
            {
              v26 = p_Blink;
              goto LABEL_36;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          v21 = Mutex->Header.SignalState-- == 1;
          if ( v21 )
            goto LABEL_10;
          goto LABEL_43;
        }
        KiTryUnwaitThread(CurrentPrcb, v17, 256LL, 0LL);
      }
LABEL_43:
      if ( v12 == &Mutex->Header.WaitListHead )
        goto LABEL_10;
    }
  }
LABEL_11:
  _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
  if ( v38 )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, 1, CurrentIrql);
  if ( ApcDisable )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v13, v14, v15);
  return SignalState;
}
