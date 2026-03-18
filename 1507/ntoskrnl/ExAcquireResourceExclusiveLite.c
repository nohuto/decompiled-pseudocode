/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1400C8A30
 * Callers:
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcAcquireByteRangeForWrite @ 0x140075D20 (CcAcquireByteRangeForWrite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1400C8890 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1400C88C0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     RtlpFreeHeap @ 0x140109914 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     SepQueueWorkItem @ 0x140117380 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1401308BC (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140138BC0 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F3AD8 (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x1401FD25C (PiSwIrpCancelStartCreate.c)
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     RtlpSetupExtendedBlock @ 0x140248644 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14024F150 (SepInternalSetSecurityAttributesToken.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x14024FB6C (SeTokenSetRedirectionTrustPolicy.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     CmpBlockHiveWrites @ 0x14040760C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140407890 (CmpBlockTwoHiveWrites.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspLockJobsAndProcessExclusive @ 0x14041A978 (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobChain @ 0x14041ACD8 (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC (PspApplyWorkingSetLimitsToProcess.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x14043BC90 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MiRememberUnloadedDriver @ 0x14045342C (MiRememberUnloadedDriver.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140454FB0 (PfSnPrefetchCacheEntryUpdate.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     IoSetDeviceInterfaceState @ 0x14045A0B4 (IoSetDeviceInterfaceState.c)
 *     PiSwIrpSetLifetime @ 0x14045A324 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14045D640 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x140460F64 (PnpNotifyDeviceClassChange.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x14046D548 (SeSetMandatoryPolicyToken.c)
 *     NtAdjustPrivilegesToken @ 0x14046D600 (NtAdjustPrivilegesToken.c)
 *     SepReferenceLogonSessionSilo @ 0x14046E22C (SepReferenceLogonSessionSilo.c)
 *     HvpFinishPrimaryWrite @ 0x1404AFDC0 (HvpFinishPrimaryWrite.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1404DDC38 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DDCF8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PiDrvDbLoadNode @ 0x1404DE2D8 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x1404DE470 (PiDrvDbUnloadNode.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E07D0 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1404E7140 (IopGetRootDevices.c)
 *     CmpDestroyHive @ 0x1404EE8E0 (CmpDestroyHive.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     LockRMLog @ 0x1404F2704 (LockRMLog.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 *     MiCancelPhase0Locking @ 0x1404F5498 (MiCancelPhase0Locking.c)
 *     PspGetNextJobProcess @ 0x1404F60B8 (PspGetNextJobProcess.c)
 *     PfSnCheckActionsNeeded @ 0x1404FDC54 (PfSnCheckActionsNeeded.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140505E20 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PspCallJobHierarchyCallbacks @ 0x140506AD8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405386E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwStopDestroy @ 0x1405388DC (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140538988 (PiSwProcessParentStartIrp.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     PnpChainDereferenceComplete @ 0x140538F00 (PnpChainDereferenceComplete.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 *     PnpDelayedRemoveWorker @ 0x1405394A0 (PnpDelayedRemoveWorker.c)
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     SepCreateLogonSessionTrack @ 0x14053C348 (SepCreateLogonSessionTrack.c)
 *     SepUpdateLogonSessionTrack @ 0x14053D66C (SepUpdateLogonSessionTrack.c)
 *     NtAdjustGroupsToken @ 0x14053F940 (NtAdjustGroupsToken.c)
 *     PspSendProcessNotificationToJobChain @ 0x140544944 (PspSendProcessNotificationToJobChain.c)
 *     IoOpenDeviceRegistryKey @ 0x140545AE8 (IoOpenDeviceRegistryKey.c)
 *     PspJobClose @ 0x14054DB88 (PspJobClose.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     IopDoDeferredSetInterfaceState @ 0x140550270 (IopDoDeferredSetInterfaceState.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 *     PspJobNotificationWorker @ 0x140554D90 (PspJobNotificationWorker.c)
 *     PspSetBackgroundJobTree @ 0x1405550AC (PspSetBackgroundJobTree.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1405562D0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     SeSetVirtualizationToken @ 0x140557234 (SeSetVirtualizationToken.c)
 *     PspNotificationPacketCallback @ 0x14055923C (PspNotificationPacketCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140559C84 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PopAcquireAdaptiveLock @ 0x14055DCE8 (PopAcquireAdaptiveLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x140568F80 (SepBlockAccessForLogonSession.c)
 *     PiSwIrpPropertySet @ 0x14056A754 (PiSwIrpPropertySet.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     PpCheckInDriverDatabase @ 0x140572AC8 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14058FA68 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x14058FC68 (IoRegisterFileSystem.c)
 *     MiWriteProtectSystemImages @ 0x140597344 (MiWriteProtectSystemImages.c)
 *     PnpSetDevicePropertyData @ 0x140597994 (PnpSetDevicePropertyData.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14059876C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140598A84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     MmFreeBootDriverInitializationCode @ 0x14059A128 (MmFreeBootDriverInitializationCode.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A774C (SepRmGlobalSaclSetWrkr.c)
 *     PpReleaseBootDDB @ 0x1405B2758 (PpReleaseBootDDB.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405B36D0 (PnpSetDeviceInterfacePropertyData.c)
 *     IoInitializeCrashDump @ 0x1405B51F4 (IoInitializeCrashDump.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1405BAD40 (DrvDbOpenDriverDatabaseRegKey.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405BCA4C (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1405BF854 (IoEnumerateRegisteredFiltersList.c)
 *     NtFlushInstallUILanguage @ 0x1405C1454 (NtFlushInstallUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405C2F68 (PiSwIrpInterfacePropertySet.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1405C43F4 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiSwIrpInterfaceSetState @ 0x1405C44E0 (PiSwIrpInterfaceSetState.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140660AB4 (CmDumpKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14066E590 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14066E73C (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140670F04 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     IoUnregisterFileSystem @ 0x1406744B8 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x1406745A4 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14067C4CC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14067C6F4 (PnpNotifyHwProfileChange.c)
 *     PiSwIrpGetLifetime @ 0x1406910C8 (PiSwIrpGetLifetime.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406937D4 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     PopAcquireDripsWatchdogLock @ 0x1406BCF40 (PopAcquireDripsWatchdogLock.c)
 *     PsInsertSiloObject @ 0x1406C0CC0 (PsInsertSiloObject.c)
 *     PsInsertSiloObjectByPointer @ 0x1406C0E40 (PsInsertSiloObjectByPointer.c)
 *     PsRemoveSiloObjectByPointer @ 0x1406C115C (PsRemoveSiloObjectByPointer.c)
 *     PspAddProcessToSilo @ 0x1406C17F8 (PspAddProcessToSilo.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     PspRemoveProcessFromSilo @ 0x1406C2778 (PspRemoveProcessFromSilo.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 *     RtlZeroHeap @ 0x1406CC35C (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x1406D0FA0 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x1406D1220 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406D62B4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     ExpQuerySingleModuleInformation @ 0x1406EEF38 (ExpQuerySingleModuleInformation.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14071F1E0 (PnpGetDeviceInstanceRegistryValue.c)
 *     VerifierExAcquireResourceExclusiveLite @ 0x14074BD00 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x14074BD78 (VerifierExAcquireResourceExclusiveLiteNoReboot.c)
 *     MiUnlockBootPageSections @ 0x1407C9590 (MiUnlockBootPageSections.c)
 *     IopInitCrashDumpRegCallback @ 0x1407DC720 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1400D6794 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14025F5A8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14025FA64 (PerfLogExecutiveResourceWait.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  struct _KTHREAD *CurrentThread; // rbp
  KSPIN_LOCK *p_SpinLock; // rcx
  unsigned int v7; // r14d
  ULONG v8; // r15d
  ULONG ContentionCount; // r12d
  char v10; // al
  __int64 v11; // rdx
  BOOLEAN v12; // bp
  ULONG v13; // eax
  volatile signed __int64 *v14; // rax
  char v16; // al
  __int64 v17; // r14
  __int64 v18; // rcx
  char *i; // rcx
  volatile signed __int64 *v20; // [rsp+30h] [rbp-58h] BYREF
  KSPIN_LOCK *v21; // [rsp+38h] [rbp-50h]
  volatile signed __int64 *v22[3]; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 v24; // [rsp+90h] [rbp+8h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6338u);
  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &Resource->SpinLock;
  v21 = p_SpinLock;
  v7 = 65537;
  v8 = 0;
  v24 = 2;
  ContentionCount = 0;
  v20 = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&v20, p_SpinLock, &v24);
  }
  else
  {
    v10 = 0;
    v11 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v20);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql(&v20, v11, &v24);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v24);
  }
  if ( Resource->ActiveEntries )
  {
    while ( (Resource->ReservedLowFlags & 0x80u) == 0
         || (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread != CurrentThread )
    {
      if ( !Wait )
      {
        v12 = 0;
        __incgsdword(0x6348u);
        goto LABEL_8;
      }
      if ( Resource->ExclusiveWaiters )
      {
        ++Resource->NumberOfExclusiveWaiters;
        ExpUnlockResource((__int64)p_SpinLock, &v20);
        __incgsdword(0x6344u);
        if ( v4 )
          PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
        ExpWaitForResource((__int64)Resource, (volatile signed __int32 *)Resource->ExclusiveWaiters);
        v16 = Resource->ReservedLowFlags & 0xC;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        if ( v16 == 4
          && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
           || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) < 2) )
        {
          ExpLockResource((__int64)Resource, v22);
          v17 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v22, 0, 1);
          v18 = *(unsigned int *)(v17 + 8);
          if ( (v18 & 1) == 0 )
          {
            PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
            *(_DWORD *)(v17 + 8) |= 1u;
            LOBYTE(v8) = 1;
          }
          ExpUnlockResource(v18, v22);
          if ( (_BYTE)v8 )
            IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
        }
        __incgsdword(0x633Cu);
        __incgsdword(0x6324u);
        if ( v4 )
          PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
        return 1;
      }
      ExpUnlockResource((__int64)p_SpinLock, &v20);
      for ( i = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456552u);
            !i;
            i = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456552u) )
      {
        KeDelayExecutionThread(0, 0, &ExShortTime);
      }
      *(_WORD *)i = 1;
      i[2] = 6;
      *((_DWORD *)i + 1) = 0;
      *((_QWORD *)i + 2) = i + 8;
      *((_QWORD *)i + 1) = i + 8;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Resource->ExclusiveWaiters, (signed __int64)i, 0LL) )
        ExFreePoolWithTag(i, 0);
      ExpLockResource((__int64)Resource, &v20);
      if ( !Resource->ActiveEntries )
        goto LABEL_7;
    }
    v12 = 1;
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                         + 4);
    __incgsdword(0x6340u);
    __incgsdword(0x6324u);
    if ( !v4 )
      goto LABEL_8;
    v7 = 65585;
    v8 = Resource->OwnerEntry.TableSize >> 2;
  }
  else
  {
LABEL_7:
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
    Resource->ActiveEntries = 1;
    Resource->Flag |= 0x80u;
    v12 = 1;
    v13 = Resource->OwnerEntry.TableSize & 3;
    Resource->ActiveCount = 1;
    Resource->OwnerEntry.TableSize = v13 | 4;
    __incgsdword(0x633Cu);
    __incgsdword(0x6324u);
    if ( !v4 )
      goto LABEL_8;
    v7 = 65569;
    v8 = 1;
  }
  ContentionCount = Resource->ContentionCount;
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v20, retaddr);
    goto LABEL_11;
  }
  _m_prefetchw(&v20);
  v14 = v20;
  if ( v20 )
    goto LABEL_29;
  if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)v21,
                                     0LL,
                                     (signed __int64)&v20) != &v20 )
  {
    v14 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v20);
LABEL_29:
    v20 = 0LL;
    _InterlockedXor64(v14 + 1, 1uLL);
  }
LABEL_11:
  _enable();
  if ( v4 )
    PerfLogExecutiveResourceAcquire(v7, Resource, v8, ContentionCount);
  return v12;
}
