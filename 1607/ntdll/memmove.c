/*
 * XREFs of memmove @ 0x1800AC980
 * Callers:
 *     RtlLargeIntegerToChar @ 0x180001260 (RtlLargeIntegerToChar.c)
 *     EtwpAddProviderToSession @ 0x180002188 (EtwpAddProviderToSession.c)
 *     EtwpWriteBufferCompressed @ 0x180002558 (EtwpWriteBufferCompressed.c)
 *     EtwpAddEventToBuffer @ 0x180002ACC (EtwpAddEventToBuffer.c)
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     sxsisol_RespectDotLocal @ 0x1800033F8 (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x180003540 (RtlComputePrivatizedDllName_U.c)
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     PsspHandleDumper @ 0x180005A00 (PsspHandleDumper.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CA4 (PsspCaptureVaSpaceInformation.c)
 *     RtlpCombineAcls @ 0x1800061A8 (RtlpCombineAcls.c)
 *     SHA256Update @ 0x180009644 (SHA256Update.c)
 *     A_SHAUpdate @ 0x18000A4C0 (A_SHAUpdate.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B774 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpRecordUnloadEvent @ 0x18000BD30 (LdrpRecordUnloadEvent.c)
 *     RtlpComputePath @ 0x18000CD74 (RtlpComputePath.c)
 *     LdrpAllocatePlaceHolder @ 0x18000F5E4 (LdrpAllocatePlaceHolder.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlIntegerToChar @ 0x180011D20 (RtlIntegerToChar.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800132AC (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlpMuiRegDupLanguageList @ 0x180013BE4 (RtlpMuiRegDupLanguageList.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180014880 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlIntegerToUnicode @ 0x180014BA0 (RtlIntegerToUnicode.c)
 *     RtlpAddKnownAce @ 0x180014CD4 (RtlpAddKnownAce.c)
 *     RtlCopyUnicodeString @ 0x180015210 (RtlCopyUnicodeString.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C68 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlpQueryEnvironmentCache @ 0x180019408 (RtlpQueryEnvironmentCache.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A954 (sxsisol_SearchActCtxForDllName.c)
 *     TppPrepareDirectParams @ 0x180020170 (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18002994C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpAddHeapToProtectedList @ 0x18002C8B8 (RtlpAddHeapToProtectedList.c)
 *     LdrpGetDataModulePath @ 0x18002C930 (LdrpGetDataModulePath.c)
 *     LdrAddLoadAsDataTable @ 0x18002D150 (LdrAddLoadAsDataTable.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002D59C (RtlpAddHeapToUnprotectedList.c)
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 *     RtlpCopyAces @ 0x18003D350 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x18003FB94 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180040048 (RtlpCopyEffectiveAce.c)
 *     RtlpInheritAcl2 @ 0x180040628 (RtlpInheritAcl2.c)
 *     RtlDosSearchPath_Ustr @ 0x180042800 (RtlDosSearchPath_Ustr.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180042FD4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpHpReallocMove @ 0x1800430A0 (RtlpHpReallocMove.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180043E6C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     LdrpAcquireTlsIndex @ 0x1800500B0 (LdrpAcquireTlsIndex.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 *     RtlpHpExtrasMove @ 0x180051B78 (RtlpHpExtrasMove.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     RtlIpv6StringToAddressW @ 0x180055A10 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiWorker @ 0x180055E74 (RtlpNameprepAsciiWorker.c)
 *     RtlCreateUnicodeString @ 0x1800565F0 (RtlCreateUnicodeString.c)
 *     RtlIdnToUnicode @ 0x180056680 (RtlIdnToUnicode.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180057DD8 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800581A4 (RtlpQueryRegistryDirect.c)
 *     _ResQueryValueKey @ 0x18005AA98 (_ResQueryValueKey.c)
 *     EtwpTraceUmMessage @ 0x18005ABA4 (EtwpTraceUmMessage.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005B244 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18005B8C8 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18005BC10 (EtwpRelogEvent.c)
 *     RtlIpv6AddressToStringExW @ 0x18005BFF0 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18005C418 (vDbgPrintExWithPrefixInternal.c)
 *     RtlFormatMessageEx @ 0x18005C720 (RtlFormatMessageEx.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18005DBF0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlCreateProcessParametersEx @ 0x18005E8F0 (RtlCreateProcessParametersEx.c)
 *     RtlpCopyProcString @ 0x18005ED58 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18005EE38 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF10 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2A0 (RtlSetEnvironmentVar.c)
 *     RtlpScanEnvironment @ 0x18005FCF0 (RtlpScanEnvironment.c)
 *     RtlInsertElementGenericTableFull @ 0x180063370 (RtlInsertElementGenericTableFull.c)
 *     RtlDosSearchPath_U @ 0x1800675B0 (RtlDosSearchPath_U.c)
 *     RtlQueryAtomInAtomTable @ 0x1800678A0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067CFC (RtlAddAtomToAtomTableEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006892C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180069688 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetFileMUIPath @ 0x180069A90 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4A4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlCopySid @ 0x18006B620 (RtlCopySid.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B860 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     MD5Update @ 0x18006BA20 (MD5Update.c)
 *     LdrpProtectedCopyMemory @ 0x18006DDE0 (LdrpProtectedCopyMemory.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x18006E010 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18006FCD0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlCopySecurityDescriptor @ 0x18006FE30 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006FEE0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x1800700C0 (RtlMakeSelfRelativeSD.c)
 *     LdrpQueryValueKey @ 0x1800716C4 (LdrpQueryValueKey.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180074180 (RtlInsertElementGenericTableFullAvl.c)
 *     CsrpConnectToServer @ 0x180075354 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x18007571C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageBuffer @ 0x180075990 (CsrCaptureMessageBuffer.c)
 *     CsrCaptureMessageString @ 0x180075B10 (CsrCaptureMessageString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180076690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x1800767A0 (RtlpEnsureBufferSize.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AE4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlDuplicateUnicodeString @ 0x180078C90 (RtlDuplicateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180079270 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079458 (RtlpCreateNewDirectoryReference.c)
 *     EtwpAddWinRtProviderToSession @ 0x180079944 (EtwpAddWinRtProviderToSession.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007A660 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA74 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007BB7C (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007BDDC (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv6StringToAddressA @ 0x18007CF80 (RtlIpv6StringToAddressA.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A40 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpInitParameterBlock @ 0x180080F88 (RtlpInitParameterBlock.c)
 *     RtlpNtQueryValueKey @ 0x180081400 (RtlpNtQueryValueKey.c)
 *     RtlIpv4AddressToStringExW @ 0x180081810 (RtlIpv4AddressToStringExW.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800825E0 (RtlCreateBoundaryDescriptor.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826B0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x180083120 (RtlSetProtectedPolicy.c)
 *     RtlpNtEnumerateSubKey @ 0x180083CF0 (RtlpNtEnumerateSubKey.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180085038 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlSetEnvironmentStrings @ 0x180085F30 (RtlSetEnvironmentStrings.c)
 *     RtlAddAttributeActionToRXact @ 0x180086A10 (RtlAddAttributeActionToRXact.c)
 *     RtlpCopyMappedMemoryEx @ 0x180087420 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x1800880A0 (RtlCopyString.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180088700 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896A8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpCopyXStateChunk @ 0x18008BB34 (RtlpCopyXStateChunk.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C140 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C534 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlConnectToSm @ 0x18008D4E0 (RtlConnectToSm.c)
 *     RtlDecompressBufferLZNT1 @ 0x18008E3B0 (RtlDecompressBufferLZNT1.c)
 *     LZNT1CompressChunk @ 0x18008E5E0 (LZNT1CompressChunk.c)
 *     RtlpHeapTrkTrackStack @ 0x18008ED9C (RtlpHeapTrkTrackStack.c)
 *     LdrAddDllDirectory @ 0x180090680 (LdrAddDllDirectory.c)
 *     LdrpCorFixupImage @ 0x1800908A0 (LdrpCorFixupImage.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B40 (RtlQueryProcessHeapInformation.c)
 *     RaiseException @ 0x18009F060 (RaiseException.c)
 *     memcpy_s @ 0x1800A1CF0 (memcpy_s.c)
 *     memmove_s @ 0x1800A1DA0 (memmove_s.c)
 *     ReadString_1 @ 0x1800A4BA8 (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CFD00 (RtlNtPathNameToDosPathName.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1768 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D19B0 (LdrpLogNewDllLoadInternal.c)
 *     RtlQuerySecurityObject @ 0x1800D4C80 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D4F70 (RtlQueryProcessBackTraceInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D53B0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D555C (RtlpCopyRemoteDebugInformation.c)
 *     RtlpAddForwarderPath @ 0x1800DA238 (RtlpAddForwarderPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DA778 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DAC8C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DAF1C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB260 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800DC830 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800DFA10 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E0030 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E083C (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E0DCC (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E106C (RtlpFilterSacl.c)
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E1BD0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E1F30 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800E3670 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E36E0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E37C0 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800E39C0 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800E4BE4 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800E5120 (RtlLargeIntegerToUnicode.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800E5540 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6224 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6D20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800E9CB0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800E9FF0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800EA600 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800ED874 (RtlpPushPageDescriptor.c)
 *     RtlIpv4AddressToStringExA @ 0x1800EDFF0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800EE0B0 (RtlIpv6AddressToStringExA.c)
 *     RtlGenerate8dot3Name @ 0x1800EE700 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800EF2E8 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800F01F8 (RtlpHeapTrkReportResult.c)
 *     RtlRemoteCall @ 0x1800F06A0 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800F2E18 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800F36C8 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800F4FE8 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800F5694 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpRegisterStackTrace @ 0x1800F9B54 (RtlpRegisterStackTrace.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1800FC300 (RtlDecompressFragmentLZNT1.c)
 *     MD4Update @ 0x1800FCEF0 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x1800FD4F0 (EtwTraceEventInstance.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800FDCBC (EtwpAddBinaryInfoEvents.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x1801005C0 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x180100DD4 (RtlpSparseBitmapCtxFindRunsFromRange.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801022B4 (RtlpStackDbSegmentFindOrCreate.c)
 *     _ResCDupString @ 0x180103754 (_ResCDupString.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104664 (_ResFindNextFileW.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x180105B54 (--$StackPush@I@@YAHIPEAX@Z.c)
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
