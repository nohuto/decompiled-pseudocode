/*
 * XREFs of NtClose @ 0x1404DAF00
 * Callers:
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14013A934 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14013AA88 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     RtlQueryValidationRunlevel @ 0x1401FB788 (RtlQueryValidationRunlevel.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404B1C70 (AlpcpCreateConnectionPort.c)
 *     PfpVolumeOpenAndVerify @ 0x1404BB8EC (PfpVolumeOpenAndVerify.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     PfSnPrefetchMetadata @ 0x1404D86B4 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x1404D9100 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x1404DA420 (PfpReadSupportCleanup.c)
 *     PfSnPopulateReadList @ 0x1404DA590 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1404DAABC (PfSnGetSectionObject.c)
 *     PfSnIsVolumeMounted @ 0x1404DBA84 (PfSnIsVolumeMounted.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1404EB13C (PfpSourceGetPrefetchSupport.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1404EB778 (RtlCreateSystemVolumeInformationFolder.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14051E0D8 (CmpInitializeRegistryNode.c)
 *     CmpCreatePerfKeys @ 0x14051F758 (CmpCreatePerfKeys.c)
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14052F430 (AdtpInitializeDriveLetters.c)
 *     CmpInitializeLazyWriters @ 0x1405308E4 (CmpInitializeLazyWriters.c)
 *     RtlpLoadLanguageConfigList @ 0x140538DB4 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140539304 (_RtlpMuiRegLoadInstalled.c)
 *     IopConnectLinkTrackingPort @ 0x1405F758C (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x1406497D0 (RtlpSysVolTakeOwnership.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     sub_1407424FC @ 0x1407424FC (sub_1407424FC.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407439F0 (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140743B30 (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140744BE0 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140744E48 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     CmGetSystemDriverList @ 0x140753C54 (CmGetSystemDriverList.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x14075B3F4 (ExpInitializeCallbacks.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     SepAdtInitializeAuditingOptions @ 0x140762BBC (SepAdtInitializeAuditingOptions.c)
 *     IopInitCrashDumpRegCallback @ 0x140767D60 (IopInitCrashDumpRegCallback.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 *     FsRtlInitializeSmssEvent @ 0x14076C1BC (FsRtlInitializeSmssEvent.c)
 *     ObpCreateDosDevicesDirectory @ 0x14076D380 (ObpCreateDosDevicesDirectory.c)
 *     CreateSystemRootLink @ 0x14076FAA8 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140771860 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140781CE4 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140781EB8 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407822A0 (CmpSetNetworkValue.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140038748 (ObpIsKernelHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     PsIsThreadTerminating @ 0x140091D80 (PsIsThreadTerminating.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401C4670 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140213938 (ExQueryHandleExceptionsPermanency.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14066C9CC (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rsi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  ULONG_PTR v5; // rbp
  PEPROCESS v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // r8
  NTSTATUS v9; // ecx
  int v11; // ecx
  bool IsAttachedProcess; // al
  bool v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v1 = (ULONG_PTR)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v11);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( PreviousMode || (v1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v1 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v5 = Process[1].ActiveProcessors.Bitmap[5];
    v6 = CurrentThread->ApcState.Process;
    if ( v5 == ObpKernelHandleTable )
      return -1073741816;
  }
  else
  {
    v5 = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) == 0 || (v7 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v5, v1)) == 0LL )
  {
LABEL_14:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v1 < 0xFFFFFFFFFFFFFFFAuLL && v1 != 0 )
    {
      ExQueryHandleExceptionsPermanency(v5, &v14, &v13);
      if ( (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v5) && v13 )
        ExHandleLogBadReference(v5, v1, PreviousMode);
      if ( PreviousMode )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || Process[1].ActiveProcessors.Bitmap[6] || *(_QWORD *)(v5 + 96) )
        {
          IsAttachedProcess = KeIsAttachedProcess();
          v9 = -1073741816;
          if ( !IsAttachedProcess )
            return KeRaiseUserException(0xC0000008);
          return v9;
        }
      }
      else if ( !PsIsThreadTerminating(CurrentThread)
             && Process[1].ActiveProcessors.Bitmap[1]
             && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
      }
    }
    v9 = -1073741816;
    if ( v1 + 6 <= 5 )
      return 0;
    return v9;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v7);
      v8 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
      if ( !v8 )
        goto LABEL_14;
      ExpBlockOnLockedHandleEntry(v5, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  return ObCloseHandleTableEntry(v5, v7, (ULONG_PTR)v6, v1, PreviousMode, 0);
}
