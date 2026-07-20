/*
 * XREFs of __security_check_cookie @ 0x14000C1E0
 * Callers:
 *     SmpCreateSecurityDescriptors @ 0x140001250 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializePendingRename @ 0x140001D48 (SmpInitializePendingRename.c)
 *     SmpInit @ 0x140001F90 (SmpInit.c)
 *     SmpReadSafeBootOption @ 0x1400022E0 (SmpReadSafeBootOption.c)
 *     SmpEstablishClientSecurity @ 0x1400024DC (SmpEstablishClientSecurity.c)
 *     SmpInvokeAutoChk @ 0x140002888 (SmpInvokeAutoChk.c)
 *     SmpProcessFileRenames @ 0x140002964 (SmpProcessFileRenames.c)
 *     SmpCreateInitialSession @ 0x140002E30 (SmpCreateInitialSession.c)
 *     SmExecPgmEx @ 0x140003328 (SmExecPgmEx.c)
 *     SmpParseCommandLine @ 0x140003620 (SmpParseCommandLine.c)
 *     SmpEventWriteULONG @ 0x140003EA8 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140003EF8 (SmpEventWriteULONGString.c)
 *     SmpLoadPnPSerializeSettings @ 0x140004070 (SmpLoadPnPSerializeSettings.c)
 *     wmain @ 0x140004718 (wmain.c)
 *     SmpExecPgm @ 0x140004EF0 (SmpExecPgm.c)
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     SmpCreateVolumeDescriptors @ 0x140005F6C (SmpCreateVolumeDescriptors.c)
 *     SmpApiCallback @ 0x140006090 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x140006620 (SmpHandleConnectionRequest.c)
 *     SmpTranslateSystemPartitionInformation @ 0x140006E20 (SmpTranslateSystemPartitionInformation.c)
 *     SmpCreateVolumeDescriptor @ 0x140007160 (SmpCreateVolumeDescriptor.c)
 *     CreateMergeLink @ 0x140007450 (CreateMergeLink.c)
 *     SmpGetVolumeDiskNumber @ 0x140007708 (SmpGetVolumeDiskNumber.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x140007848 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     SmpDestroyControlBlock @ 0x140007C5C (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140007CEC (SmpReleaseControlBlock.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140007F6C (SmpAllocateInitialCommandBuffer.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140008070 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpPagefileInitialize @ 0x140008580 (SmpPagefileInitialize.c)
 *     SmpConfigureSharedSessionData @ 0x140008740 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008E30 (SmpInitializeKnownDllsInternal.c)
 *     SmpQueryDwordFromRegistry @ 0x140009748 (SmpQueryDwordFromRegistry.c)
 *     SmpQueryDedicatedDumpSetting @ 0x1400097DC (SmpQueryDedicatedDumpSetting.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000986C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCheckHybridPriority @ 0x140009B04 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x140009BA4 (SmpTrimPagingFileExtents.c)
 *     SmpProcessModuleImports @ 0x14000A0C0 (SmpProcessModuleImports.c)
 *     SmpCheckForCrashDump @ 0x14000A8EC (SmpCheckForCrashDump.c)
 *     SmpGetPagingFileSize @ 0x14000AD9C (SmpGetPagingFileSize.c)
 *     SmpCleanupStalePageFiles @ 0x14000B1A8 (SmpCleanupStalePageFiles.c)
 *     SmpSaveOldPageFiles @ 0x14000B21C (SmpSaveOldPageFiles.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B580 (SmpCreateProtectedPrefixes.c)
 *     __GSHandlerCheckCommon @ 0x14000C5A8 (__GSHandlerCheckCommon.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F69C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpIsRamdiskBoot @ 0x14000FE5C (SmpIsRamdiskBoot.c)
 *     SmpUpdatePagefileUsageCallback @ 0x140010170 (SmpUpdatePagefileUsageCallback.c)
 *     SmpCreateTempFile @ 0x1400106CC (SmpCreateTempFile.c)
 *     SmpEventWriteString @ 0x1400107AC (SmpEventWriteString.c)
 *     SmpGetCrashParameters @ 0x140010850 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x14001090C (SmpGetDumpDestination.c)
 *     SmpQueryFileSize @ 0x140010BA4 (SmpQueryFileSize.c)
 *     SmpQueryPagefileTooSmallForDump @ 0x140010C00 (SmpQueryPagefileTooSmallForDump.c)
 *     SmpQueryPathFromRegistry @ 0x140010C88 (SmpQueryPathFromRegistry.c)
 *     SmpQuerySameVolume @ 0x140010D9C (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x140010EEC (SmpQueryVolumeFreeSpace.c)
 *     SmpSavePageFile @ 0x1400111B4 (SmpSavePageFile.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x140011294 (SmpSetDumpSecurityAndAttributes.c)
 *     SmpClearTemporaryFiles @ 0x140011AEC (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140012010 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140012100 (SmpForceDeleteTargetFile.c)
 *     SmpLogPFROError @ 0x140012508 (SmpLogPFROError.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x1400127C8 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     SmpPlatformBinaryTableExists @ 0x140012928 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012AA8 (SmpSendPlatformBinaryStatus.c)
 *     SmpSetTargetAttributes @ 0x140012C88 (SmpSetTargetAttributes.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140012E78 (SmpTryOverwriteReadonlyFile.c)
 *     SmpUnhandledExceptionFilter @ 0x1400131B8 (SmpUnhandledExceptionFilter.c)
 *     GetFileAttributesW @ 0x140014208 (GetFileAttributesW.c)
 *     CreateFileInternal @ 0x140014314 (CreateFileInternal.c)
 *     GetLongPathNameW @ 0x140014B34 (GetLongPathNameW.c)
 *     FindFirstFileExW @ 0x1400152E0 (FindFirstFileExW.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
