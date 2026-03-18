/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140068160
 * Callers:
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1400680D0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     SepDesktopAppxSubProcessToken @ 0x14007BF38 (SepDesktopAppxSubProcessToken.c)
 *     MiAcquireResourceExclusiveLite @ 0x140084C38 (MiAcquireResourceExclusiveLite.c)
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     RtlpFreeHeap @ 0x1400936CC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009F9F8 (FsRtlAcquireFileForModWriteEx.c)
 *     SepQueueWorkItem @ 0x1400AFFCC (SepQueueWorkItem.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400B12EC (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepRmCallLsa @ 0x1400B1930 (SepRmCallLsa.c)
 *     CcAcquireByteRangeForWrite @ 0x1400CBDC0 (CcAcquireByteRangeForWrite.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111A40 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x140142EA0 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1E6C (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C6548 (IoUpdateDumpPhysicalRanges.c)
 *     RtlpSetupExtendedBlock @ 0x14021391C (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14021973C (SepInternalSetSecurityAttributesToken.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x14021A6C0 (SeTokenSetRedirectionTrustPolicy.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14022D96C (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     PfSnCheckActionsNeeded @ 0x1403E7994 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1403E9BAC (PfSnPrefetchCacheEntryUpdate.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EA8B0 (ExAcquireTimeRefreshLock.c)
 *     PnpNotifyTargetDeviceChange @ 0x1403F0314 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1403F0DB0 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     IoSetDeviceInterfaceState @ 0x1403F1060 (IoSetDeviceInterfaceState.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1403F1F94 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042BC1C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042E010 (FsRtlAcquireFileExclusiveCommon.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PspGetNextJobProcess @ 0x14045816C (PspGetNextJobProcess.c)
 *     NtAdjustPrivilegesToken @ 0x14045FAF4 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140466F30 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1404688C0 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x140468F58 (PspCallJobHierarchyCallbacks.c)
 *     PspLockJobConditionally @ 0x140469940 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x140469EEC (PspLockJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140469F64 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14046A558 (PspApplyWorkingSetLimitsToProcess.c)
 *     NtAdjustGroupsToken @ 0x1404771C4 (NtAdjustGroupsToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1404796D4 (SepReferenceLogonSessionSilo.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x14047AA4C (SeSetSessionIdToken.c)
 *     SeSetMandatoryPolicyToken @ 0x14047AB5C (SeSetMandatoryPolicyToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     HvpFinishPrimaryWrite @ 0x140483C48 (HvpFinishPrimaryWrite.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x14048AB04 (PspLockRootJobExclusive.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PpCheckInDriverDatabase @ 0x14049D7A4 (PpCheckInDriverDatabase.c)
 *     IopGetRootDevices @ 0x14049DC40 (IopGetRootDevices.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     LockRMLog @ 0x1404A1D3C (LockRMLog.c)
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PnpChainDereferenceComplete @ 0x1404C3C20 (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x1404C3D40 (PnpDelayedRemoveWorker.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1404C5028 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1404C5220 (PnpUnlinkDeviceRemovalRelations.c)
 *     PpDeviceRegistration @ 0x1404C7C74 (PpDeviceRegistration.c)
 *     NtGetMUIRegistryInfo @ 0x1404CFDC8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404D3ADC (_CmGetDeviceSoftwareKey.c)
 *     IoOpenDeviceRegistryKey @ 0x1404D4314 (IoOpenDeviceRegistryKey.c)
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404DAA3C (CmpTransMgrSyncHive.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 *     PspJobClose @ 0x1404E2DE8 (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x1404E3A8C (PspJobNotificationWorker.c)
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 *     SepUpdateLogonSessionTrack @ 0x1404E61E4 (SepUpdateLogonSessionTrack.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404E67CC (IopSetDeviceSecurityDescriptor.c)
 *     SepCreateLogonSessionTrack @ 0x1404E69EC (SepCreateLogonSessionTrack.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404E7110 (IopDoDeferredSetInterfaceState.c)
 *     SeSetVirtualizationToken @ 0x1404E8CD4 (SeSetVirtualizationToken.c)
 *     PspSetBackgroundJobTree @ 0x1404E96C0 (PspSetBackgroundJobTree.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1404EDCFC (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PopAcquireAdaptiveLock @ 0x1404EF160 (PopAcquireAdaptiveLock.c)
 *     IopBootLog @ 0x1404EFE0C (IopBootLog.c)
 *     PspLockJobsAndProcessExclusive @ 0x1404F2A94 (PspLockJobsAndProcessExclusive.c)
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiDrvDbUnloadNode @ 0x1404FA260 (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x1404FA308 (PiDrvDbLoadNode.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404FBDA0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1404FC0BC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x140501E18 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140506370 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PspNotificationPacketCallback @ 0x14051BC8C (PspNotificationPacketCallback.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     SepDeleteLogonSessionTrack @ 0x140533094 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x140533AB8 (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14053488C (WmiAcquireSmbiosLockExclusive.c)
 *     PnpSetDevicePropertyData @ 0x14054D39C (PnpSetDevicePropertyData.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14054DCC4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14054E014 (CmpBecomeActiveFlusherAndReconciler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405506D0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x1405508C4 (IoRegisterFileSystem.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     IoInitializeCrashDump @ 0x14056916C (IoInitializeCrashDump.c)
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056B668 (SepRmGlobalSaclSetWrkr.c)
 *     PpReleaseBootDDB @ 0x14056E7B4 (PpReleaseBootDDB.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405702EC (PnpSetDeviceInterfacePropertyData.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140576614 (IoOpenDeviceInterfaceRegistryKey.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057AADC (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14057CF00 (IoEnumerateRegisteredFiltersList.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EB50 (DrvDbOpenDriverDatabaseRegKey.c)
 *     NtFlushInstallUILanguage @ 0x14057F524 (NtFlushInstallUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     NtCompressKey @ 0x1405F964C (NtCompressKey.c)
 *     CmReplaceKey @ 0x1405FE0FC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 *     HvFoldBackUnreconciledData @ 0x140605EFC (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x14060C0B8 (CmDumpKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 *     FsRtlCopyWrite @ 0x14061D638 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E018 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F89C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14061FA48 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140620E48 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x14062188C (IopInitializeBootLogging.c)
 *     IoUnregisterFileSystem @ 0x140623B90 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140623C48 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B908 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14062F6CC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648A14 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675074 (PopAcquireDripsWatchdogLock.c)
 *     TtmpAcquireSessionLock @ 0x140678E60 (TtmpAcquireSessionLock.c)
 *     TtmpAcquireQueueLock @ 0x14067A280 (TtmpAcquireQueueLock.c)
 *     PspCreateSilo @ 0x14067E65C (PspCreateSilo.c)
 *     RtlZeroHeap @ 0x14068889C (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14068D0F4 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14068D340 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x140692774 (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x14069364C (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693740 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140693860 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140693A14 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1406AC168 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x1406D1680 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1406D6EA4 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E24D4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1406E5AF4 (PnpGetDeviceInstanceRegistryValue.c)
 *     IopInitCrashDumpRegCallback @ 0x1407B24BC (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 *     ExpLockResource @ 0x14005DB60 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x140066CF0 (ExpUnlockResource.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x1400ACCF0 (KiAbThreadInsertList.c)
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140228044 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140228500 (PerfLogExecutiveResourceWait.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D8A4 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D918 (EXP_UNLOCK_RESOURCE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v3; // r13
  ULONG v4; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v7; // esi
  ULONG ContentionCount; // r12d
  __int64 v9; // rcx
  char *i; // rcx
  BOOLEAN v11; // di
  ULONG v12; // eax
  USHORT Flag; // r8
  OWNER_ENTRY *p_OwnerEntry; // rdi
  int v16; // esi
  unsigned __int64 v17; // rcx
  POWNER_ENTRY OwnerTable; // r10
  unsigned __int64 v19; // r9
  OWNER_ENTRY *v20; // rdx
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  __int64 ExtensionTable; // rax
  _BYTE v24[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v25[24]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v4 = 0;
  __incgsdword(0x63B8u);
  CurrentThread = KeGetCurrentThread();
  v7 = 65537;
  ContentionCount = 0;
  EXP_LOCK_RESOURCE(Resource, v24);
  if ( Resource->ActiveEntries )
  {
    while ( (Resource->ReservedLowFlags & 0x80u) == 0
         || (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread != CurrentThread )
    {
      if ( !Wait )
      {
        v11 = 0;
        __incgsdword(0x63C8u);
        goto LABEL_14;
      }
      if ( Resource->ExclusiveWaiters )
      {
        ++Resource->NumberOfExclusiveWaiters;
        ExpUnlockResource(v9, (__int64)v24);
        __incgsdword(0x63C4u);
        if ( v3 )
          PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
        ExpWaitForResource((__int64)Resource, (_DWORD *)Resource->ExclusiveWaiters);
        Flag = Resource->Flag;
        p_OwnerEntry = &Resource->OwnerEntry;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        if ( (Flag & 8) == 0 )
        {
          v16 = 0;
          if ( (Flag & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7u) < 2) )
          {
            v16 = 4;
          }
          if ( (Flag & 2) != 0 )
            v16 |= 2u;
          if ( v16 )
          {
            ExpLockResource((__int64)Resource, (__int64)v25);
            if ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
            {
              OwnerTable = Resource->OwnerTable;
              v17 = p_OwnerEntry->OwnerThread != 0;
              v19 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
              v20 = 0LL;
              if ( OwnerTable && (p_OwnerEntry = OwnerTable + 1, v17 < v19) )
              {
                while ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
                {
                  if ( p_OwnerEntry->OwnerThread )
                  {
                    if ( ++v17 == v19 )
                      goto LABEL_38;
                  }
                  else if ( !v20 )
                  {
                    v20 = p_OwnerEntry;
                  }
                  if ( ++p_OwnerEntry == &OwnerTable[OwnerTable->TableSize] )
                    goto LABEL_38;
                }
                v17 = (unsigned __int64)KeGetCurrentThread();
                *(_BYTE *)(v17 + 649) = p_OwnerEntry - OwnerTable;
              }
              else
              {
LABEL_38:
                p_OwnerEntry = 0LL;
              }
            }
            if ( (v16 & 4) != 0 )
            {
              if ( (p_OwnerEntry->TableSize & 1) != 0 )
              {
                v16 &= ~4u;
              }
              else
              {
                PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
                p_OwnerEntry->TableSize |= 1u;
              }
            }
            if ( (v16 & 2) != 0 )
            {
              if ( (p_OwnerEntry->TableSize & 4) != 0 )
              {
                v16 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart) == 1
                  && CurrentThread->AbWaitEntryCount )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  CurrentPrcb = KeGetCurrentPrcb();
                  if ( (unsigned int)KiAbThreadInsertList(
                                       CurrentThread,
                                       &CurrentPrcb->AbPropagateBoostsList,
                                       &CurrentThread->PropagateBoostsEntry) )
                    KiAbQueueAutoBoostDpc(CurrentPrcb);
                  __writecr8(CurrentIrql);
                }
                p_OwnerEntry->TableSize |= 4u;
              }
            }
            ExpUnlockResource(v17, (__int64)v25);
            if ( v16 )
            {
              if ( (v16 & 4) != 0 )
                IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
              if ( (v16 & 2) != 0 )
              {
                if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(struct _KTHREAD *))(ExtensionTable + 16))(CurrentThread);
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
              }
            }
          }
        }
        __incgsdword(0x63BCu);
        __incgsdword(0x63A4u);
        if ( v3 )
          PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
        return 1;
      }
      ExpUnlockResource(v9, (__int64)v24);
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
      ExpLockResource((__int64)Resource, (__int64)v24);
      if ( !Resource->ActiveEntries )
        goto LABEL_11;
    }
    v11 = 1;
    v9 = Resource->OwnerEntry.TableSize & 7 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
    Resource->OwnerEntry.TableSize = v9;
    __incgsdword(0x63C0u);
    __incgsdword(0x63A4u);
    if ( !v3 )
      goto LABEL_14;
    v7 = 65585;
    v4 = Resource->OwnerEntry.TableSize >> 3;
    goto LABEL_13;
  }
LABEL_11:
  Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
  Resource->ActiveEntries = 1;
  Resource->Flag |= 0x80u;
  v11 = 1;
  v12 = Resource->OwnerEntry.TableSize & 7;
  Resource->ActiveCount = 1;
  Resource->OwnerEntry.TableSize = v12 | 8;
  __incgsdword(0x63BCu);
  __incgsdword(0x63A4u);
  if ( v3 )
  {
    v7 = 65569;
    v4 = 1;
LABEL_13:
    ContentionCount = Resource->ContentionCount;
  }
LABEL_14:
  EXP_UNLOCK_RESOURCE(v9, v24);
  if ( v3 )
    PerfLogExecutiveResourceAcquire(v7, Resource, v4, ContentionCount);
  return v11;
}
