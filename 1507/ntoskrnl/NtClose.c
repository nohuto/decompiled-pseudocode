/*
 * XREFs of NtClose @ 0x14049BE90
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14015E290 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     CmLogMcUpdateStatus @ 0x1401E0138 (CmLogMcUpdateStatus.c)
 *     RtlQueryValidationRunlevel @ 0x14024A51C (RtlQueryValidationRunlevel.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     PfSnPrefetchMetadata @ 0x14042CB54 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x14042DB04 (PfpReadSupportCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1404571B4 (PfSnIsVolumeMounted.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x140472880 (AlpcpConnectPort.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x14054355C (AlpcpCreateConnectionPort.c)
 *     PfpPrefetchPrivatePages @ 0x14055C5B0 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x14055C83C (PfpSourceGetPrefetchSupport.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14055FFC8 (RtlCreateSystemVolumeInformationFolder.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     RtlpLoadLanguageConfigList @ 0x1405912A8 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405917F8 (_RtlpMuiRegLoadInstalled.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140592FEC (AdtpInitializeDriveLetters.c)
 *     CmpCreatePerfKeys @ 0x1405A4110 (CmpCreatePerfKeys.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405A5580 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 *     CmpInitializeLazyWriters @ 0x1405A74EC (CmpInitializeLazyWriters.c)
 *     IopConnectLinkTrackingPort @ 0x140671414 (IopConnectLinkTrackingPort.c)
 *     RtlpSysVolTakeOwnership @ 0x1406CC854 (RtlpSysVolTakeOwnership.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     sub_1407B535C @ 0x1407B535C (sub_1407B535C.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 *     SepAdtInitializeAuditingOptions @ 0x1407BC3AC (SepAdtInitializeAuditingOptions.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407D7AB8 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407D7B24 (CmpSetSystemValues.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407D7D8C (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x1407D7ECC (CmpSetupConfigurationTree.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     IopInitCrashDumpRegCallback @ 0x1407DC720 (IopInitCrashDumpRegCallback.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 *     FsRtlInitializeSmssEvent @ 0x1407E13D0 (FsRtlInitializeSmssEvent.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 *     ExpInitializeCallbacks @ 0x1407E3A04 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x1407E59E8 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x1407E7F0C (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1407F80B8 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407F8674 (CmpSetNetworkValue.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402008EC (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140263298 (ExQueryHandleExceptionsPermanency.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  __int64 v1; // r9
  ULONG_PTR v2; // rsi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  ULONG_PTR v6; // rbp
  PEPROCESS v7; // r12
  signed __int64 *v8; // rbx
  signed __int64 v9; // r8
  NTSTATUS v10; // ecx
  __int16 v12; // ax
  bool v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = (ULONG_PTR)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0
    && !PreviousMode
    && (((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
     || (unsigned __int64)Handle >= 0xFFFFFFFFFFFFFFFEuLL) )
  {
    VfCheckUserHandle((int)Handle);
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( PreviousMode || (v2 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v2 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v6 = Process[1].ActiveProcessors.Bitmap[5];
    v7 = CurrentThread->ApcState.Process;
    if ( v6 == ObpKernelHandleTable )
      return -1073741816;
  }
  else
  {
    v6 = ObpKernelHandleTable;
    v2 ^= 0xFFFFFFFF80000000uLL;
    v7 = PsInitialSystemProcess;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v2 & 0x3FC) == 0 || (v8 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v6, v2)) == 0LL )
  {
LABEL_14:
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v2 < 0xFFFFFFFFFFFFFFFAuLL && v2 != 0 )
    {
      ExQueryHandleExceptionsPermanency(v6, &v14, &v13, v1);
      if ( (*(_BYTE *)(v6 + 44) & 0x10) != 0 && v13 )
        ExHandleLogBadReference(v6, v2, PreviousMode);
      if ( PreviousMode )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || Process[1].ActiveProcessors.Bitmap[6] || *(_QWORD *)(v6 + 96) )
        {
          v10 = -1073741816;
          if ( KeGetCurrentThread()->ApcStateIndex != 1 )
            return KeRaiseUserException(0xC0000008);
          return v10;
        }
      }
      else if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) == 0
             && Process[1].ActiveProcessors.Bitmap[1]
             && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v2, 1uLL, 0LL, 0LL);
      }
    }
    v10 = -1073741816;
    if ( v2 + 6 <= 5 )
      return 0;
    return v10;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v8);
      v9 = *v8;
      if ( (*v8 & 1) != 0 )
        break;
      if ( !v9 )
        goto LABEL_14;
      ExpBlockOnLockedHandleEntry(v6, v8);
    }
  }
  while ( v9 != _InterlockedCompareExchange64(v8, v9 - 1, v9) );
  return ObCloseHandleTableEntry(v6, v8, (ULONG_PTR)v7, v2, PreviousMode, 0);
}
