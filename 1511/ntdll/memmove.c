/*
 * XREFs of memmove @ 0x1800AB5C0
 * Callers:
 *     RtlLargeIntegerToChar @ 0x1800013C0 (RtlLargeIntegerToChar.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800014A0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpAddWinRtProviderToSession @ 0x1800035B8 (EtwpAddWinRtProviderToSession.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800038CC (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x180003A20 (EtwpAddEventToBuffer.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800046DC (RtlpMuiRegDupLanguageList.c)
 *     LdrpRecordUnloadEvent @ 0x180005690 (LdrpRecordUnloadEvent.c)
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpAllocatePlaceHolder @ 0x18000FCC4 (LdrpAllocatePlaceHolder.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180010FB4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlIntegerToChar @ 0x180011610 (RtlIntegerToChar.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180015A2C (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x1800193F0 (RtlIntegerToUnicode.c)
 *     RtlpAddKnownAce @ 0x180019524 (RtlpAddKnownAce.c)
 *     RtlCopyUnicodeString @ 0x180019A70 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180019B9C (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpHpReallocMove @ 0x18001AAB0 (RtlpHpReallocMove.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001CBC4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18001CEF4 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     TppPrepareDirectParams @ 0x18002CF40 (TppPrepareDirectParams.c)
 *     RtlpQueryEnvironmentCache @ 0x18002EE74 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x18002F490 (RtlpScanEnvironment.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrpGetDataModulePath @ 0x18003D1CC (LdrpGetDataModulePath.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003DD44 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003FC68 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x180041140 (LdrpAcquireTlsIndex.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800426C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800428F8 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlQueryAtomInAtomTable @ 0x1800436F0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180043B0C (RtlAddAtomToAtomTableEx.c)
 *     RtlDosSearchPath_U @ 0x1800443C0 (RtlDosSearchPath_U.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180046A98 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180046E70 (RtlpQueryRegistryDirect.c)
 *     EtwpTraceUmMessage @ 0x1800480B8 (EtwpTraceUmMessage.c)
 *     _ResQueryValueKey @ 0x1800491D8 (_ResQueryValueKey.c)
 *     RtlIpv6AddressToStringExW @ 0x180049330 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 *     EtwpWriteToPrivateBuffers @ 0x180049FD4 (EtwpWriteToPrivateBuffers.c)
 *     RtlFormatMessageEx @ 0x18004A8C0 (RtlFormatMessageEx.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18004C1F0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     EtwpTraceUmEvent @ 0x18004CC90 (EtwpTraceUmEvent.c)
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
 *     RtlpCopyProcString @ 0x18004D6F8 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004D7D8 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18004D8B0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004DC40 (RtlSetEnvironmentVar.c)
 *     CsrpClientConnectToServer @ 0x180051680 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageBuffer @ 0x1800518F0 (CsrCaptureMessageBuffer.c)
 *     CsrCaptureMessageString @ 0x180051A70 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x1800520A4 (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180052F38 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180056084 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800562F4 (RtlpAddHeapToProtectedList.c)
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18005FFB4 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x180060584 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180060A18 (RtlpCopyEffectiveAce.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlpCopyAces @ 0x18006192C (RtlpCopyAces.c)
 *     RtlCopySid @ 0x180062220 (RtlCopySid.c)
 *     PsspCaptureVaSpaceInformation @ 0x18006233C (PsspCaptureVaSpaceInformation.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180062C6C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     A_SHAUpdate @ 0x180063190 (A_SHAUpdate.c)
 *     SHA256Update @ 0x180064444 (SHA256Update.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800687A0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlIpv6StringToAddressW @ 0x1800696C0 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiWorker @ 0x180069B44 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18006A2A0 (RtlIdnToUnicode.c)
 *     LdrpProtectedCopyMemory @ 0x18006CCD0 (LdrpProtectedCopyMemory.c)
 *     RtlInsertElementGenericTableFull @ 0x18006D530 (RtlInsertElementGenericTableFull.c)
 *     MD5Update @ 0x18006DD20 (MD5Update.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006F1E0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlpCopyXStateChunk @ 0x180070A88 (RtlpCopyXStateChunk.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180071620 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlCopySecurityDescriptor @ 0x180071780 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180071830 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x180071A10 (RtlMakeSelfRelativeSD.c)
 *     RtlpComputePath @ 0x180072FAC (RtlpComputePath.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800738A0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpHpExtrasMove @ 0x180074AB0 (RtlpHpExtrasMove.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075340 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x180075450 (RtlpEnsureBufferSize.c)
 *     LdrAddLoadAsDataTable @ 0x180076850 (LdrAddLoadAsDataTable.c)
 *     RtlDuplicateUnicodeString @ 0x1800774F0 (RtlDuplicateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180077E00 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007881C (RtlRemoveInvertedFunctionTable.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079F74 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007A1D4 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv6StringToAddressA @ 0x18007A530 (RtlIpv6StringToAddressA.c)
 *     RtlCreateBoundaryDescriptor @ 0x18007B160 (RtlCreateBoundaryDescriptor.c)
 *     RtlpInitParameterBlock @ 0x18007CB74 (RtlpInitParameterBlock.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D330 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpNtQueryValueKey @ 0x18007D7A0 (RtlpNtQueryValueKey.c)
 *     RtlIpv4AddressToStringExW @ 0x18007E180 (RtlIpv4AddressToStringExW.c)
 *     RtlpNtEnumerateSubKey @ 0x18007E640 (RtlpNtEnumerateSubKey.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800807D8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlSetEnvironmentStrings @ 0x180081BC0 (RtlSetEnvironmentStrings.c)
 *     RtlAddAttributeActionToRXact @ 0x1800826D0 (RtlAddAttributeActionToRXact.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800831D0 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x180084040 (RtlCopyString.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpHeapTrkTrackStack @ 0x18008505C (RtlpHeapTrkTrackStack.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087F00 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlConnectToSm @ 0x180088C80 (RtlConnectToSm.c)
 *     RtlDecompressBufferLZNT1 @ 0x180089CC0 (RtlDecompressBufferLZNT1.c)
 *     LZNT1CompressChunk @ 0x180089EF4 (LZNT1CompressChunk.c)
 *     PsspHandleDumper @ 0x18008AA90 (PsspHandleDumper.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     LdrpCorFixupImage @ 0x18008DE80 (LdrpCorFixupImage.c)
 *     RtlQueryProcessHeapInformation @ 0x180094380 (RtlQueryProcessHeapInformation.c)
 *     EtwpRelogEvent @ 0x180094D8C (EtwpRelogEvent.c)
 *     RaiseException @ 0x18009DC40 (RaiseException.c)
 *     memcpy_s @ 0x1800A08D0 (memcpy_s.c)
 *     memmove_s @ 0x1800A0980 (memmove_s.c)
 *     ReadString_1 @ 0x1800A37E4 (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800C7844 (CsrpLocalSetupForSecureProcess.c)
 *     RtlNtPathNameToDosPathName @ 0x1800C8860 (RtlNtPathNameToDosPathName.c)
 *     RtlpCheckDeviceName @ 0x1800C8ADC (RtlpCheckDeviceName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CA204 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CA448 (LdrpLogNewDllLoadInternal.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800CB790 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800CCC60 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800CCF50 (RtlQueryProcessBackTraceInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800CD370 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800CD51C (RtlpCopyRemoteDebugInformation.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800D22F4 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800D24BC (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800D297C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800D2C08 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800D2F4C (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800D43B0 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800D7020 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800D7E34 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800D83C4 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800D8600 (RtlpFilterSacl.c)
 *     RtlAddResourceAttributeAce @ 0x1800D8B20 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800D9130 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800D9490 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800DA9A0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800DAA10 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800DAAF0 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800DACF0 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800DB8C4 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800DC050 (RtlLargeIntegerToUnicode.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800DC240 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800DCF34 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800DDA30 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800E0A90 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800E0DD0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpPushPageDescriptor @ 0x1800E4644 (RtlpPushPageDescriptor.c)
 *     RtlIpv4AddressToStringExA @ 0x1800E4DD0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800E4E90 (RtlIpv6AddressToStringExA.c)
 *     RtlGenerate8dot3Name @ 0x1800E54C0 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800E6028 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800E7018 (RtlpHeapTrkReportResult.c)
 *     RtlRemoteCall @ 0x1800E74C0 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800E9B08 (RtlpStdLogCapturedStackTrace.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800EA958 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EC274 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800EC920 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800EEAB0 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpRegisterStackTrace @ 0x1800F2078 (RtlpRegisterStackTrace.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1800F2B90 (RtlDecompressFragmentLZNT1.c)
 *     MD4Update @ 0x1800F3830 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x1800F3D40 (EtwTraceEventInstance.c)
 *     EtwpAddProviderToSession @ 0x1800F48A0 (EtwpAddProviderToSession.c)
 *     EtwpQueryRegString @ 0x1800F4A44 (EtwpQueryRegString.c)
 *     EtwpWriteBufferCompressed @ 0x1800F4C9C (EtwpWriteBufferCompressed.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800F7A50 (--$StackPush@I@@YAHIPEAX@Z.c)
 *     _ResCDupString @ 0x1800F8E80 (_ResCDupString.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x1800F9D78 (_ResFindNextFileW.c)
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
