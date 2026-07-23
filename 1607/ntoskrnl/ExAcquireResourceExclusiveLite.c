/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x140067CE0
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140067C50 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     SepDesktopAppxSubProcessToken @ 0x14007BFB8 (SepDesktopAppxSubProcessToken.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     SepQueueWorkItem @ 0x1400AE184 (SepQueueWorkItem.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400AF22C (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111FA4 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x140143410 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C63E8 (IoUpdateDumpPhysicalRanges.c)
 *     RtlpSetupExtendedBlock @ 0x140213748 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140219568 (SepInternalSetSecurityAttributesToken.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x14021A4EC (SeTokenSetRedirectionTrustPolicy.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14022D798 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     PfSnCheckActionsNeeded @ 0x1403E8FC4 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1403EB1DC (PfSnPrefetchCacheEntryUpdate.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     IoSetDeviceInterfaceState @ 0x1403EFF24 (IoSetDeviceInterfaceState.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1403F0E58 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0 (FsRtlAcquireFileExclusiveCommon.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     NtAdjustPrivilegesToken @ 0x14045E9C4 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140465E00 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x140467E28 (PspCallJobHierarchyCallbacks.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 *     PspLockJobChain @ 0x140468DBC (PspLockJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140468E34 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140469428 (PspApplyWorkingSetLimitsToProcess.c)
 *     NtAdjustGroupsToken @ 0x140476094 (NtAdjustGroupsToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1404785A4 (SepReferenceLogonSessionSilo.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x14047991C (SeSetSessionIdToken.c)
 *     SeSetMandatoryPolicyToken @ 0x140479A2C (SeSetMandatoryPolicyToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     HvpFinishPrimaryWrite @ 0x14048299C (HvpFinishPrimaryWrite.c)
 *     PnpDisableDeviceInterfaces @ 0x14048367C (PnpDisableDeviceInterfaces.c)
 *     PnpChainDereferenceComplete @ 0x140483FD4 (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x1404840F4 (PnpDelayedRemoveWorker.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpNotifyDeviceClassChange @ 0x1404891B8 (PnpNotifyDeviceClassChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140489514 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x14048A58C (PnpNotifyTargetDeviceChange.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 *     NtGetMUIRegistryInfo @ 0x1404B3868 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404B757C (_CmGetDeviceSoftwareKey.c)
 *     IoOpenDeviceRegistryKey @ 0x1404B7DB4 (IoOpenDeviceRegistryKey.c)
 *     CmpTransMgrPrepare @ 0x1404BDEEC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404BE040 (CmpTransMgrSyncHive.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     PspJobClose @ 0x1404C5D4C (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x1404C6744 (PspJobNotificationWorker.c)
 *     SepDeReferenceLogonSession @ 0x1404C7CF8 (SepDeReferenceLogonSession.c)
 *     SepUpdateLogonSessionTrack @ 0x1404C8C18 (SepUpdateLogonSessionTrack.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 *     SepCreateLogonSessionTrack @ 0x1404C935C (SepCreateLogonSessionTrack.c)
 *     SeSetVirtualizationToken @ 0x1404CB060 (SeSetVirtualizationToken.c)
 *     PspSetBackgroundJobTree @ 0x1404CB7B0 (PspSetBackgroundJobTree.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1404CFE20 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     IopBootLog @ 0x1404D1E28 (IopBootLog.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1404D4E7C (PspLockRootJobExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x1404D5A20 (PspLockJobsAndProcessExclusive.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     PiDrvDbUnloadNode @ 0x1404DD1EC (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x1404DD294 (PiDrvDbLoadNode.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1404DF04C (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1404E4DA8 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E9300 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PspNotificationPacketCallback @ 0x1404FF07C (PspNotificationPacketCallback.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     IopDoDeferredSetInterfaceState @ 0x14050D724 (IopDoDeferredSetInterfaceState.c)
 *     PpDeviceRegistration @ 0x14050F4A8 (PpDeviceRegistration.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     LockRMLog @ 0x14051A148 (LockRMLog.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x140533FF8 (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140534DCC (WmiAcquireSmbiosLockExclusive.c)
 *     PnpSetDevicePropertyData @ 0x14054D73C (PnpSetDevicePropertyData.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14054E064 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14054E3B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140550C10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x140550E04 (IoRegisterFileSystem.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     IoInitializeCrashDump @ 0x1405696AC (IoInitializeCrashDump.c)
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056BBA8 (SepRmGlobalSaclSetWrkr.c)
 *     PpReleaseBootDDB @ 0x14056ECF4 (PpReleaseBootDDB.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14057082C (PnpSetDeviceInterfacePropertyData.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140576B54 (IoOpenDeviceInterfaceRegistryKey.c)
 *     IoReportRootDevice @ 0x140578358 (IoReportRootDevice.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057B01C (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14057D3AC (IoEnumerateRegisteredFiltersList.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 *     NtFlushInstallUILanguage @ 0x14057F9D0 (NtFlushInstallUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     NtCompressKey @ 0x1405F9700 (NtCompressKey.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     HvFoldBackUnreconciledData @ 0x140605FB0 (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F950 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14061FAFC (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140620EFC (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     IoUnregisterFileSystem @ 0x140623C44 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140623CFC (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B9BC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14062BBB8 (PnpNotifyHwProfileChange.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14062F780 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648AF8 (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675158 (PopAcquireDripsWatchdogLock.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 *     TtmpAcquireQueueLock @ 0x14067A364 (TtmpAcquireQueueLock.c)
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 *     RtlZeroHeap @ 0x140688980 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14068D1D8 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14068D424 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x140693730 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693824 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140693944 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140693AF8 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x1406AC2A0 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x1406D6FDC (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1406E5C2C (PnpGetDeviceInstanceRegistryValue.c)
 *     IopInitCrashDumpRegCallback @ 0x1407B24BC (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExpLockResource @ 0x14005D6E0 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x1400AB258 (KiAbThreadInsertList.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140227E70 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14022832C (PerfLogExecutiveResourceWait.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
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
