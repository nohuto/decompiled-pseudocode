/*
 * XREFs of KeReleaseMutex @ 0x140055B60
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14009CAC4 (WmipBuildTraceDeviceList.c)
 *     WmipReceiveNotifications @ 0x1400AD93C (WmipReceiveNotifications.c)
 *     WmipFindRegEntryByProviderId @ 0x1400C26D8 (WmipFindRegEntryByProviderId.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F8308 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F8A28 (LdrpGetFromMUIMemCache.c)
 *     WmipDeregisterRegEntry @ 0x1401255D0 (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012E36C (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14012E408 (WmipAllocRegEntry.c)
 *     WmiQueryTraceProviderCount @ 0x140130638 (WmiQueryTraceProviderCount.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     PopWdiTimerWorkerThread @ 0x14020A084 (PopWdiTimerWorkerThread.c)
 *     EtwpDisableTraceProviders @ 0x14040A3AC (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x1404733AC (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x140473680 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x140473E70 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140473F5C (WmipIsQuerySetGuid.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSystemLoggerIndex @ 0x140495AAC (EtwpFreeSystemLoggerIndex.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404967A0 (EtwpUpdateKernelGroupMasks.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404AC964 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipDeleteMethod @ 0x1404B1DAC (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x1404B1E9C (WmipDisableCollectOrEvent.c)
 *     WmipEnumerateMofResources @ 0x1404C9900 (WmipEnumerateMofResources.c)
 *     EtwpStartTrace @ 0x1404D0FB8 (EtwpStartTrace.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 *     WmipDSCleanup @ 0x140532730 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532884 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeregisterDevice @ 0x140533294 (WmipDeregisterDevice.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537BD0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x140537E28 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x1405384EC (WmipFindISinGEbyName.c)
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14053ABD0 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14053ACA0 (WmipUpdateDeviceStackSize.c)
 *     WmipRegistrationWorker @ 0x1405435C8 (WmipRegistrationWorker.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140546AF0 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054B3D8 (EtwpCrimsonProvEnableCallback.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405513B8 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140575384 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405754B0 (WmipProcessLegacyEtwRegister.c)
 *     WmipLegacyEtwCallback @ 0x140576238 (WmipLegacyEtwCallback.c)
 *     WmipSetTraceNotify @ 0x14057A6A4 (WmipSetTraceNotify.c)
 *     IoWMISetNotificationCallback @ 0x14057D350 (IoWMISetNotificationCallback.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406708E8 (PopDiagNextCsSleepStudySession.c)
 *     IoWMIAllocateInstanceIds @ 0x14069C98C (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14069D774 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14069E10C (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x14069E848 (WmipQueryGuidInfo.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x14069FA08 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x14069FE60 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FFEC (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2BB0 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406A56B0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406A5700 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1406A8034 (EtwpSampledProfileRunDown.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B85CC (NtStopProfile.c)
 *     sub_1406BC338 @ 0x1406BC338 (sub_1406BC338.c)
 *     MmIsDriverSuspectForVerifier @ 0x1406FE3A8 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140704AF8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 *     VfDriverUnlock @ 0x140704D8C (VfDriverUnlock.c)
 *     ViDriverReApplyVerifierForAll @ 0x140704E94 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x14070F180 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x14070F200 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140715ED8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140716490 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140716514 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140721158 (VfSetVerifierInformationEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
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
