/*
 * XREFs of memmove @ 0x180098200
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x1800025A0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpAddWinRtProviderToSession @ 0x1800028B8 (EtwpAddWinRtProviderToSession.c)
 *     EtwpAddBinaryInfoEvents @ 0x180002C38 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x180002D8C (EtwpAddEventToBuffer.c)
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180006084 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800062DC (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x1800079FC (RtlpExtendFrontEndUsageArray.c)
 *     CsrpClientConnectToServer @ 0x180007B28 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageBuffer @ 0x180007D90 (CsrCaptureMessageBuffer.c)
 *     CsrCaptureMessageString @ 0x180007F10 (CsrCaptureMessageString.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCallQueryRegistryRoutine @ 0x18000DB50 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x18000DF28 (RtlpQueryRegistryDirect.c)
 *     _ResQueryValueKey @ 0x18000F500 (_ResQueryValueKey.c)
 *     RtlIpv6AddressToStringExW @ 0x18000F9F0 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180010048 (vDbgPrintExWithPrefixInternal.c)
 *     RtlFormatMessageEx @ 0x180010330 (RtlFormatMessageEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x180010AEC (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmMessage @ 0x1800111DC (EtwpTraceUmMessage.c)
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     RtlpMuiRegDupLanguageList @ 0x18001CDB8 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18001E0B8 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18001F2D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001F554 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x18001FCD0 (RtlCopyUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18001FF50 (RtlIntegerToUnicode.c)
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180021564 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800215E4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlIntegerToChar @ 0x180021680 (RtlIntegerToChar.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpQueryEnvironmentCache @ 0x180035688 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x180035B00 (RtlpScanEnvironment.c)
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     TppPrepareDirectParams @ 0x18003B540 (TppPrepareDirectParams.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocatePlaceHolder @ 0x180040198 (LdrpAllocatePlaceHolder.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     LdrpRecordUnloadEvent @ 0x18004386C (LdrpRecordUnloadEvent.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180045850 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlCreateProcessParametersEx @ 0x1800461E0 (RtlCreateProcessParametersEx.c)
 *     RtlpCopyProcString @ 0x180046648 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x180046728 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x180046800 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180046B90 (RtlSetEnvironmentVar.c)
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     LdrpQueryValueKey @ 0x1800499D4 (LdrpQueryValueKey.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18004C810 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x18004CDE4 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x18004D298 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x18004DAD4 (RtlpCopyAces.c)
 *     RtlpCombineAcls @ 0x18004DF20 (RtlpCombineAcls.c)
 *     RtlCopySid @ 0x18004E900 (RtlCopySid.c)
 *     PsspCaptureVaSpaceInformation @ 0x18004EB0C (PsspCaptureVaSpaceInformation.c)
 *     A_SHAUpdate @ 0x18004F4E0 (A_SHAUpdate.c)
 *     SHA256Update @ 0x180051240 (SHA256Update.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005203C (RtlAddAtomToAtomTableEx.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlQueryAtomInAtomTable @ 0x180052A30 (RtlQueryAtomInAtomTable.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18005329C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180053C60 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180054028 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180054C04 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x180055F30 (LdrpAcquireTlsIndex.c)
 *     RtlDosSearchPath_U @ 0x180057930 (RtlDosSearchPath_U.c)
 *     RtlpHpExtrasMove @ 0x180058A90 (RtlpHpExtrasMove.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     RtlDecompressBufferLZNT1 @ 0x18005B330 (RtlDecompressBufferLZNT1.c)
 *     LZNT1CompressChunk @ 0x18005C514 (LZNT1CompressChunk.c)
 *     RtlIpv6StringToAddressW @ 0x18005DD40 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiWorker @ 0x18005E190 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18005E8F0 (RtlIdnToUnicode.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180060980 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFull @ 0x180061280 (RtlInsertElementGenericTableFull.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180061F10 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     MD5Update @ 0x180062830 (MD5Update.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180063F00 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlCopySecurityDescriptor @ 0x180064060 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180064110 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x1800642F0 (RtlMakeSelfRelativeSD.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180064638 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180066EA0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpCopyXStateChunk @ 0x180067734 (RtlpCopyXStateChunk.c)
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     RtlIpv6StringToAddressA @ 0x1800684B0 (RtlIpv6StringToAddressA.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180068860 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x180068970 (RtlpEnsureBufferSize.c)
 *     LdrpProtectedCopyMemory @ 0x180069460 (LdrpProtectedCopyMemory.c)
 *     LdrpGetDataModulePath @ 0x180069C68 (LdrpGetDataModulePath.c)
 *     LdrAddLoadAsDataTable @ 0x18006B290 (LdrAddLoadAsDataTable.c)
 *     RtlDuplicateUnicodeString @ 0x18006BC20 (RtlDuplicateUnicodeString.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18006EDD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18006F030 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlGetCurrentDirectory_U @ 0x18006FA50 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18006FDF8 (RtlpCreateNewDirectoryReference.c)
 *     RtlpInitParameterBlock @ 0x180070FE4 (RtlpInitParameterBlock.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x180071620 (RtlpNtQueryValueKey.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180071930 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlIpv4AddressToStringExW @ 0x180072060 (RtlIpv4AddressToStringExW.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180073784 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpNtEnumerateSubKey @ 0x1800737F0 (RtlpNtEnumerateSubKey.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800739D8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetEnvironmentStrings @ 0x180075230 (RtlSetEnvironmentStrings.c)
 *     RtlAddAttributeActionToRXact @ 0x180075FE0 (RtlAddAttributeActionToRXact.c)
 *     RtlCreateBoundaryDescriptor @ 0x180076E50 (RtlCreateBoundaryDescriptor.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800773A0 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x180077A60 (RtlCopyString.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18007F690 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlConnectToSm @ 0x180080910 (RtlConnectToSm.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180080CB0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     PsspHandleDumper @ 0x180082A10 (PsspHandleDumper.c)
 *     LdrpCorFixupImage @ 0x180083A50 (LdrpCorFixupImage.c)
 *     RaiseException @ 0x18008C4A0 (RaiseException.c)
 *     memcpy_s @ 0x18008F130 (memcpy_s.c)
 *     memmove_s @ 0x18008F1E0 (memmove_s.c)
 *     ReadString_1 @ 0x180092044 (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800BAB28 (CsrpLocalSetupForSecureProcess.c)
 *     RtlNtPathNameToDosPathName @ 0x1800BBB40 (RtlNtPathNameToDosPathName.c)
 *     RtlpCheckDeviceName @ 0x1800BBDBC (RtlpCheckDeviceName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800BD4E4 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800BD728 (LdrpLogNewDllLoadInternal.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800C10D0 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800C3230 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800C3520 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800C36B0 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800C3D20 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800C3ECC (RtlpCopyRemoteDebugInformation.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800C9814 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800C99DC (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800C9E9C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800CA12C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800CA470 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800CBB74 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800CEA20 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800CF858 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800CFDE8 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800D0088 (RtlpFilterSacl.c)
 *     RtlAddResourceAttributeAce @ 0x1800D05F0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800D0C10 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800D0F70 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800D24E0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800D2550 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800D2630 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800D2830 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800D35D4 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToChar @ 0x1800D3D60 (RtlLargeIntegerToChar.c)
 *     RtlLargeIntegerToUnicode @ 0x1800D3EA0 (RtlLargeIntegerToUnicode.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800D4090 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800D5014 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800D5BC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800D8AA0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800D8DE0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpPushPageDescriptor @ 0x1800DEEF4 (RtlpPushPageDescriptor.c)
 *     RtlIpv4AddressToStringExA @ 0x1800DF680 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800DF740 (RtlIpv6AddressToStringExA.c)
 *     RtlGenerate8dot3Name @ 0x1800DFD70 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800E08D4 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800E1BD8 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800E206C (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800E4FA8 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetProtectedPolicy @ 0x1800E5290 (RtlSetProtectedPolicy.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800E5E78 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800E7DE0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800E848C (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpVirtQueryHeapsRemote @ 0x1800EB900 (RtlpHpVirtQueryHeapsRemote.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 *     RtlpRegisterStackTrace @ 0x1800F0120 (RtlpRegisterStackTrace.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1800F19D0 (RtlDecompressFragmentLZNT1.c)
 *     MD4Update @ 0x1800F3990 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x1800F3EA0 (EtwTraceEventInstance.c)
 *     EtwpRelogEvent @ 0x1800F447C (EtwpRelogEvent.c)
 *     EtwpTraceUmEvent @ 0x1800F4590 (EtwpTraceUmEvent.c)
 *     EtwpAddProviderToSession @ 0x1800F4EA0 (EtwpAddProviderToSession.c)
 *     EtwpQueryRegString @ 0x1800F5048 (EtwpQueryRegString.c)
 *     EtwpWriteBufferCompressed @ 0x1800F52A0 (EtwpWriteBufferCompressed.c)
 *     _ResCDupString @ 0x1800F9568 (_ResCDupString.c)
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x1800FA460 (_ResFindNextFileW.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800FBE2C (--$StackPush@I@@YAHIPEAX@Z.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
