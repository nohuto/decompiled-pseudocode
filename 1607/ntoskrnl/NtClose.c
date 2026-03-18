/*
 * XREFs of NtClose @ 0x14050B0E0
 * Callers:
 *     SepRmCallLsa @ 0x1400B1930 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1401401D0 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140324 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     CmLogMcUpdateStatus @ 0x1401B53F8 (CmLogMcUpdateStatus.c)
 *     RtlQueryValidationRunlevel @ 0x140215A30 (RtlQueryValidationRunlevel.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E524C (PfSnGetPrefetchInstructions.c)
 *     PfpVolumeOpenAndVerify @ 0x1403ED8D0 (PfpVolumeOpenAndVerify.c)
 *     AlpcpConnectPort @ 0x1404080D0 (AlpcpConnectPort.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404B36C8 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     NtCreateRegistryTransaction @ 0x1404E9C94 (NtCreateRegistryTransaction.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1404F55F0 (PfSnIsVolumeMounted.c)
 *     PfSnPrefetchMetadata @ 0x140508538 (PfSnPrefetchMetadata.c)
 *     PfpReadSupportCleanup @ 0x14050921C (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140509310 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x14050A770 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14050ACA0 (PfSnGetSectionObject.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140529CB8 (RtlCreateSystemVolumeInformationFolder.c)
 *     PfpPrefetchPrivatePages @ 0x1405333EC (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x140533638 (PfpSourceGetPrefetchSupport.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055C8D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14055CDF0 (CmpInitializeRegistryNode.c)
 *     CmpCreatePerfKeys @ 0x14055D7CC (CmpCreatePerfKeys.c)
 *     RtlpLoadLanguageConfigList @ 0x140560338 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140560888 (_RtlpMuiRegLoadInstalled.c)
 *     CmpInitializeLazyWriters @ 0x14056F44C (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x14056FBF0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405700B8 (AdtpInitializeDriveLetters.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     NtOpenRegistryTransaction @ 0x1405F97E8 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140621294 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x140688D98 (RtlpSysVolTakeOwnership.c)
 *     ExpWatchLicenseInfoWork @ 0x1406AC9EC (ExpWatchLicenseInfoWork.c)
 *     sub_14078D96C @ 0x14078D96C (sub_14078D96C.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x1407A20B8 (ExpInitializeCallbacks.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407AC64C (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407AE930 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407AE99C (CmpSetSystemValues.c)
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 *     IopInitCrashDumpRegCallback @ 0x1407B24BC (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407B2FB4 (SepAdtInitializeAuditingOptions.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     FsRtlInitializeSmssEvent @ 0x1407B6A08 (FsRtlInitializeSmssEvent.c)
 *     CreateSystemRootLink @ 0x1407BA050 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x1407BC468 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1407CD104 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1407CD4E0 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407CD8C8 (CmpSetNetworkValue.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x1400CFD28 (ObpIsKernelHandle.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401D3828 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x14022CA54 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14022CB34 (ExQueryHandleExceptionsPermanency.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140451390 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14049B4BC (ExpBlockOnLockedHandleEntry.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rbx
  char PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v5; // r14
  _KPROCESS *v6; // r12
  __int64 *v7; // rdi
  __int64 v8; // r8
  NTSTATUS result; // eax
  int v10; // ecx
  bool v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = (ULONG_PTR)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v10);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( PreviousMode || v1 >= 0xFFFFFFFFFFFFFFFEuLL || (v1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL )
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
LABEL_13:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
      goto LABEL_14;
    ExQueryHandleExceptionsPermanency(v5, &v12, &v11);
    if ( (*(_BYTE *)(v5 + 44) & 0x10) != 0 && v11 )
      ExHandleLogBadReference(v5, v1, PreviousMode);
    if ( !PreviousMode )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
        && Process[1].ActiveProcessors.Bitmap[1]
        && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
      }
      goto LABEL_14;
    }
    if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].ActiveProcessors.Bitmap[6] && !*(_QWORD *)(v5 + 96) )
    {
LABEL_14:
      result = -1073741816;
      if ( v1 + 6 <= 5 )
        return 0;
      return result;
    }
    if ( !KeIsAttachedProcess() )
      return KeRaiseUserException(0xC0000008);
    return -1073741816;
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
        goto LABEL_13;
      ExpBlockOnLockedHandleEntry(v5, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  return ObCloseHandleTableEntry(v5, (unsigned int *)v7, v6, v1, PreviousMode, 0);
}
