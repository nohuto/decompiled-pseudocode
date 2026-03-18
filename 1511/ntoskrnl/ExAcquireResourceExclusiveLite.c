/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14003F890
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14003F800 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     RtlpFreeHeap @ 0x1400D34B0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     SepQueueWorkItem @ 0x1400D52DC (SepQueueWorkItem.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400EFA60 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1401071B4 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x14013A5A8 (IoConfigureCrashDump.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401B875C (IoUpdateDumpPhysicalRanges.c)
 *     RtlpSetupExtendedBlock @ 0x1401F95F0 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140200254 (SepInternalSetSecurityAttributesToken.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     PpCheckInDriverDatabase @ 0x1403B8FE0 (PpCheckInDriverDatabase.c)
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1403B9DD4 (IopGetRootDevices.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1403C24A4 (SepReferenceLogonSessionSilo.c)
 *     NtAdjustPrivilegesToken @ 0x1403C28D4 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     SeSetMandatoryPolicyToken @ 0x1403C52F8 (SeSetMandatoryPolicyToken.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     LockRMLog @ 0x1403D6618 (LockRMLog.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmpBlockHiveWrites @ 0x1403DC244 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1403E9200 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1403E9410 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockJobChain @ 0x1403E951C (PspLockJobChain.c)
 *     PspLockRootJobFromProcess @ 0x1403E95DC (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1403EB8F8 (PspCallJobHierarchyCallbacks.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1403ECDA8 (PspLockRootJobExclusive.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1403F9340 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x140440EBC (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140444448 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404444DC (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PiDrvDbLoadNode @ 0x140444A94 (PiDrvDbLoadNode.c)
 *     PiDrvDbUnloadNode @ 0x140444BF0 (PiDrvDbUnloadNode.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     SeSetVirtualizationToken @ 0x140452458 (SeSetVirtualizationToken.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     IoSetDeviceInterfaceState @ 0x140454BA4 (IoSetDeviceInterfaceState.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     PspJobClose @ 0x140485508 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspSetBackgroundJobTree @ 0x1404867B0 (PspSetBackgroundJobTree.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     PspLockJobsAndProcessExclusive @ 0x140487158 (PspLockJobsAndProcessExclusive.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     CmpDestroyHive @ 0x140499400 (CmpDestroyHive.c)
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     PnpChainDereferenceComplete @ 0x14049F4C8 (PnpChainDereferenceComplete.c)
 *     PnpDelayedRemoveWorker @ 0x14049F5E8 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     NtGetMUIRegistryInfo @ 0x1404AAE1C (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     NtAdjustGroupsToken @ 0x1404AD974 (NtAdjustGroupsToken.c)
 *     IoOpenDeviceRegistryKey @ 0x1404AE9F0 (IoOpenDeviceRegistryKey.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404B08D4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404BAE04 (IopSetDeviceSecurityDescriptor.c)
 *     PspJobNotificationWorker @ 0x1404BC1D8 (PspJobNotificationWorker.c)
 *     SepUpdateLogonSessionTrack @ 0x1404BCEDC (SepUpdateLogonSessionTrack.c)
 *     SepCreateLogonSessionTrack @ 0x1404BDA90 (SepCreateLogonSessionTrack.c)
 *     HvpFinishPrimaryWrite @ 0x1404C16EC (HvpFinishPrimaryWrite.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1404C1E18 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1404C25EC (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PspNotificationPacketCallback @ 0x1404C2BD8 (PspNotificationPacketCallback.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     PopAcquireAdaptiveLock @ 0x1404C4150 (PopAcquireAdaptiveLock.c)
 *     CmpTransMgrSyncHive @ 0x1404C4668 (CmpTransMgrSyncHive.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1404D585C (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x1404D78A0 (PfSnCheckActionsNeeded.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404E0E88 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404E1E04 (PnpNotifyDeviceClassChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404F16E8 (IopDoDeferredSetInterfaceState.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x1404F4B94 (SepBlockAccessForLogonSession.c)
 *     IoUnregisterFileSystem @ 0x14051AB94 (IoUnregisterFileSystem.c)
 *     PnpSetDevicePropertyData @ 0x14051C830 (PnpSetDevicePropertyData.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405216F4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140521A0C (CmpBecomeActiveFlusherAndReconciler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140522AA0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x140522C74 (IoRegisterFileSystem.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     IoInitializeCrashDump @ 0x1405388F4 (IoInitializeCrashDump.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14053C468 (SepRmGlobalSaclSetWrkr.c)
 *     PpReleaseBootDDB @ 0x14053D598 (PpReleaseBootDDB.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14053EC08 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140545070 (IoOpenDeviceInterfaceRegistryKey.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405460C0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14054892C (IoEnumerateRegisteredFiltersList.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140549920 (DrvDbOpenDriverDatabaseRegKey.c)
 *     NtFlushInstallUILanguage @ 0x14054A1B0 (NtFlushInstallUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     NtCompressKey @ 0x1405DB93C (NtCompressKey.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     HvFoldBackUnreconciledData @ 0x1405E69A4 (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x1405E943C (CmDumpKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x1405F54F4 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1405F56A0 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x1405F7140 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x1405FA218 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x140600514 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406018BC (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x140601AB8 (PnpNotifyHwProfileChange.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMUnregisterDeviceInterface @ 0x14061426C (PiCMUnregisterDeviceInterface.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     PopAcquireDripsWatchdogLock @ 0x14063C910 (PopAcquireDripsWatchdogLock.c)
 *     PsInsertSiloObjectByPointer @ 0x14063F8F0 (PsInsertSiloObjectByPointer.c)
 *     PsRemoveSiloObjectByPointer @ 0x14063FA94 (PsRemoveSiloObjectByPointer.c)
 *     PspBeginServerSiloShutdown @ 0x14063FDC0 (PspBeginServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14063FEE0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 *     PspDeleteSilo @ 0x140640348 (PspDeleteSilo.c)
 *     PspInitializeServerSiloDeferred @ 0x140640594 (PspInitializeServerSiloDeferred.c)
 *     RtlZeroHeap @ 0x1406492D8 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14064D970 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14064DBBC (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406542BC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1406543DC (SepMakeLogonSessionsSiblings.c)
 *     ExpQuerySingleModuleInformation @ 0x14066B8F0 (ExpQuerySingleModuleInformation.c)
 *     AdtpBuildAccessesString @ 0x14068CE4C (AdtpBuildAccessesString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14069EB98 (PnpGetDeviceInstanceRegistryValue.c)
 *     VerifierExAcquireResourceExclusiveLite @ 0x1406C9100 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x1406C9178 (VerifierExAcquireResourceExclusiveLiteNoReboot.c)
 *     IopInitCrashDumpRegCallback @ 0x140767D60 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     ExpWaitForResource @ 0x14007F400 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140210238 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402106F4 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  __int64 v3; // r9
  bool v6; // di
  ULONG v7; // esi
  struct _KTHREAD *CurrentThread; // rbp
  KSPIN_LOCK *p_SpinLock; // rcx
  unsigned int v10; // r15d
  ULONG ContentionCount; // r12d
  char v12; // al
  __int64 v13; // rdx
  BOOLEAN v14; // bp
  ULONG v15; // eax
  char v17; // al
  char v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  char *i; // rcx
  _QWORD v24[3]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v25[24]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v26; // [rsp+90h] [rbp+8h] BYREF

  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6338u);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &Resource->SpinLock;
  v24[1] = p_SpinLock;
  v10 = 65537;
  ContentionCount = 0;
  v26 = 2;
  v24[0] = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v12 = KiFastAcquireQueuedSpinLockInstrumented(v24, p_SpinLock, &v26);
  }
  else
  {
    v12 = 0;
    v13 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v24);
    if ( v13 )
    {
      KxWaitForLockOwnerShipWithIrql(v24, v13, &v26);
      v12 = 1;
    }
  }
  if ( v12 )
  {
    _disable();
    __writecr8(v26);
  }
  if ( Resource->ActiveEntries )
  {
    while ( (Resource->ReservedLowFlags & 0x80u) == 0
         || (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread != CurrentThread )
    {
      if ( !Wait )
      {
        v14 = 0;
        __incgsdword(0x6348u);
        goto LABEL_8;
      }
      if ( Resource->ExclusiveWaiters )
      {
        ++Resource->NumberOfExclusiveWaiters;
        ExpUnlockResource((__int64)p_SpinLock, (__int64)v24, v2, v3);
        __incgsdword(0x6344u);
        if ( v6 )
          PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
        ExpWaitForResource(Resource, Resource->ExclusiveWaiters);
        v17 = Resource->ReservedLowFlags & 0xC;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        if ( v17 == 4
          && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
           || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) < 2) )
        {
          v18 = 0;
          ExpLockResource(Resource, v25);
          v19 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v25, 0, 1);
          v22 = *(unsigned int *)(v19 + 8);
          if ( (v22 & 1) == 0 )
          {
            PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
            *(_DWORD *)(v19 + 8) |= 1u;
            v18 = 1;
          }
          ExpUnlockResource(v22, (__int64)v25, v20, v21);
          if ( v18 )
            IoBoostThreadIoPriority(CurrentThread, 2LL);
        }
        __incgsdword(0x633Cu);
        __incgsdword(0x6324u);
        if ( v6 )
          PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
        return 1;
      }
      ExpUnlockResource((__int64)p_SpinLock, (__int64)v24, v2, v3);
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
      ExpLockResource(Resource, v24);
      if ( !Resource->ActiveEntries )
        goto LABEL_7;
    }
    v14 = 1;
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                         + 4);
    __incgsdword(0x6340u);
    __incgsdword(0x6324u);
    if ( !v6 )
      goto LABEL_8;
    v10 = 65585;
    v7 = Resource->OwnerEntry.TableSize >> 2;
    goto LABEL_39;
  }
LABEL_7:
  Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
  Resource->ActiveEntries = 1;
  Resource->Flag |= 0x80u;
  v14 = 1;
  v15 = Resource->OwnerEntry.TableSize & 3;
  Resource->ActiveCount = 1;
  Resource->OwnerEntry.TableSize = v15 | 4;
  __incgsdword(0x633Cu);
  __incgsdword(0x6324u);
  if ( v6 )
  {
    v10 = 65569;
    v7 = 1;
LABEL_39:
    ContentionCount = Resource->ContentionCount;
  }
LABEL_8:
  KxReleaseQueuedSpinLock(v24);
  _enable();
  if ( v6 )
    PerfLogExecutiveResourceAcquire(v10, Resource, v7, ContentionCount);
  return v14;
}
