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
 *     PsspHandleDumper @ 0x180005A10 (PsspHandleDumper.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CB4 (PsspCaptureVaSpaceInformation.c)
 *     RtlpCombineAcls @ 0x1800061B8 (RtlpCombineAcls.c)
 *     SHA256Update @ 0x180009654 (SHA256Update.c)
 *     A_SHAUpdate @ 0x18000A4D0 (A_SHAUpdate.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B784 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpRecordUnloadEvent @ 0x18000BD40 (LdrpRecordUnloadEvent.c)
 *     RtlpComputePath @ 0x18000CD84 (RtlpComputePath.c)
 *     LdrpAllocatePlaceHolder @ 0x18000F5F4 (LdrpAllocatePlaceHolder.c)
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlIntegerToChar @ 0x180011D30 (RtlIntegerToChar.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800132BC (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlpMuiRegDupLanguageList @ 0x180013BF4 (RtlpMuiRegDupLanguageList.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180014890 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlIntegerToUnicode @ 0x180014BB0 (RtlIntegerToUnicode.c)
 *     RtlpAddKnownAce @ 0x180014CE4 (RtlpAddKnownAce.c)
 *     RtlCopyUnicodeString @ 0x180015220 (RtlCopyUnicodeString.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C78 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlpQueryEnvironmentCache @ 0x180019418 (RtlpQueryEnvironmentCache.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A964 (sxsisol_SearchActCtxForDllName.c)
 *     TppPrepareDirectParams @ 0x180020180 (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18002995C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpAddHeapToProtectedList @ 0x18002C8C8 (RtlpAddHeapToProtectedList.c)
 *     LdrpGetDataModulePath @ 0x18002C940 (LdrpGetDataModulePath.c)
 *     LdrAddLoadAsDataTable @ 0x18002D160 (LdrAddLoadAsDataTable.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002D5AC (RtlpAddHeapToUnprotectedList.c)
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4EC (LdrpSendPostSnapNotifications.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F770 (RtlInsertInvertedFunctionTable.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 *     RtlpCopyAces @ 0x18003D360 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x18003FBA4 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180040058 (RtlpCopyEffectiveAce.c)
 *     RtlpInheritAcl2 @ 0x180040638 (RtlpInheritAcl2.c)
 *     RtlDosSearchPath_Ustr @ 0x180042810 (RtlDosSearchPath_Ustr.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180042FE4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpHpReallocMove @ 0x1800430B0 (RtlpHpReallocMove.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180043E7C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     LdrpAcquireTlsIndex @ 0x1800500C0 (LdrpAcquireTlsIndex.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
 *     RtlpHpExtrasMove @ 0x180051B88 (RtlpHpExtrasMove.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     RtlIpv6StringToAddressW @ 0x180055A20 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiWorker @ 0x180055E84 (RtlpNameprepAsciiWorker.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     RtlIdnToUnicode @ 0x180056690 (RtlIdnToUnicode.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180057DE8 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800581B4 (RtlpQueryRegistryDirect.c)
 *     _ResQueryValueKey @ 0x18005AAA8 (_ResQueryValueKey.c)
 *     EtwpTraceUmMessage @ 0x18005ABB4 (EtwpTraceUmMessage.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005B254 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18005B8D8 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18005BC20 (EtwpRelogEvent.c)
 *     RtlIpv6AddressToStringExW @ 0x18005C000 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18005C428 (vDbgPrintExWithPrefixInternal.c)
 *     RtlFormatMessageEx @ 0x18005C730 (RtlFormatMessageEx.c)
 *     RtlpValidateHeapHeaders @ 0x18005D300 (RtlpValidateHeapHeaders.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18005DC00 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlCreateProcessParametersEx @ 0x18005E900 (RtlCreateProcessParametersEx.c)
 *     RtlpCopyProcString @ 0x18005ED68 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18005EE48 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF20 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2B0 (RtlSetEnvironmentVar.c)
 *     RtlpScanEnvironment @ 0x18005FD00 (RtlpScanEnvironment.c)
 *     RtlInsertElementGenericTableFull @ 0x180063380 (RtlInsertElementGenericTableFull.c)
 *     RtlDosSearchPath_U @ 0x1800675C0 (RtlDosSearchPath_U.c)
 *     RtlQueryAtomInAtomTable @ 0x1800678B0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067D0C (RtlAddAtomToAtomTableEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006893C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180069698 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4B4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlCopySid @ 0x18006B630 (RtlCopySid.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B870 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     MD5Update @ 0x18006BA30 (MD5Update.c)
 *     LdrpProtectedCopyMemory @ 0x18006DDF0 (LdrpProtectedCopyMemory.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x18006E020 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18006FCE0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlCopySecurityDescriptor @ 0x18006FE40 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006FEF0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x1800700D0 (RtlMakeSelfRelativeSD.c)
 *     LdrpQueryValueKey @ 0x1800716D4 (LdrpQueryValueKey.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180074190 (RtlInsertElementGenericTableFullAvl.c)
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x18007572C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageBuffer @ 0x1800759A0 (CsrCaptureMessageBuffer.c)
 *     CsrCaptureMessageString @ 0x180075B20 (CsrCaptureMessageString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800766A0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x1800767B0 (RtlpEnsureBufferSize.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AF4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlDuplicateUnicodeString @ 0x180078CA0 (RtlDuplicateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180079280 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079468 (RtlpCreateNewDirectoryReference.c)
 *     EtwpAddWinRtProviderToSession @ 0x180079954 (EtwpAddWinRtProviderToSession.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007A670 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA84 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007BB8C (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007BDEC (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv6StringToAddressA @ 0x18007CF90 (RtlIpv6StringToAddressA.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F330 (RtlQueryImageFileKeyOption.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A50 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpInitParameterBlock @ 0x180080F98 (RtlpInitParameterBlock.c)
 *     RtlpNtQueryValueKey @ 0x180081410 (RtlpNtQueryValueKey.c)
 *     RtlIpv4AddressToStringExW @ 0x180081820 (RtlIpv4AddressToStringExW.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800825F0 (RtlCreateBoundaryDescriptor.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826C0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x180083130 (RtlSetProtectedPolicy.c)
 *     RtlpNtEnumerateSubKey @ 0x180083D00 (RtlpNtEnumerateSubKey.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180085048 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlSetEnvironmentStrings @ 0x180085F40 (RtlSetEnvironmentStrings.c)
 *     RtlAddAttributeActionToRXact @ 0x180086A20 (RtlAddAttributeActionToRXact.c)
 *     RtlpCopyMappedMemoryEx @ 0x180087430 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x1800880B0 (RtlCopyString.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180088710 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896B8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpCopyXStateChunk @ 0x18008BB44 (RtlpCopyXStateChunk.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C150 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C544 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlConnectToSm @ 0x18008D4F0 (RtlConnectToSm.c)
 *     RtlDecompressBufferLZNT1 @ 0x18008E3C0 (RtlDecompressBufferLZNT1.c)
 *     LZNT1CompressChunk @ 0x18008E5F0 (LZNT1CompressChunk.c)
 *     RtlpHeapTrkTrackStack @ 0x18008EDAC (RtlpHeapTrkTrackStack.c)
 *     LdrAddDllDirectory @ 0x180090690 (LdrAddDllDirectory.c)
 *     LdrpCorFixupImage @ 0x1800908B0 (LdrpCorFixupImage.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B50 (RtlQueryProcessHeapInformation.c)
 *     RaiseException @ 0x18009F070 (RaiseException.c)
 *     memcpy_s @ 0x1800A1CF0 (memcpy_s.c)
 *     memmove_s @ 0x1800A1DA0 (memmove_s.c)
 *     ReadString_1 @ 0x1800A4BA8 (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CFD00 (RtlNtPathNameToDosPathName.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D16A8 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D18F0 (LdrpLogNewDllLoadInternal.c)
 *     RtlQuerySecurityObject @ 0x1800D4BC0 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D4EB0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D52F0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D549C (RtlpCopyRemoteDebugInformation.c)
 *     RtlpAddForwarderPath @ 0x1800DA178 (RtlpAddForwarderPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DA6B8 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DABCC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DAE5C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB1A0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC01C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800DC770 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD4C0 (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800DF950 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800DFF70 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E077C (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E0D0C (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E0FAC (RtlpFilterSacl.c)
 *     RtlAddResourceAttributeAce @ 0x1800E1510 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E1B10 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E1E70 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800E35B0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E3620 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E3700 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800E3900 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800E4B24 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800E5060 (RtlLargeIntegerToUnicode.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800E5480 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6164 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6C60 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800E9BF0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800E9F30 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800EA540 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800ED7B4 (RtlpPushPageDescriptor.c)
 *     RtlIpv4AddressToStringExA @ 0x1800EDF30 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800EDFF0 (RtlIpv6AddressToStringExA.c)
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
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800FFC4C (--$StackPush@I@@YAHIPEAX@Z.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x180100680 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x180100E94 (RtlpSparseBitmapCtxFindRunsFromRange.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180102374 (RtlpStackDbSegmentFindOrCreate.c)
 *     _ResCDupString @ 0x180103814 (_ResCDupString.c)
 *     _ResFindFirstFileExW @ 0x180104314 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104724 (_ResFindNextFileW.c)
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
