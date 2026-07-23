/*
 * XREFs of RtlFreeHeap @ 0x1800466E0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlLockModuleSection @ 0x180001DA0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     EtwpShutdownCompression @ 0x180003274 (EtwpShutdownCompression.c)
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     RtlpCombineAcls @ 0x1800061A8 (RtlpCombineAcls.c)
 *     RtlSetSearchPathMode @ 0x1800069C0 (RtlSetSearchPathMode.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 *     PssNtFreeSnapshot @ 0x180007C30 (PssNtFreeSnapshot.c)
 *     RtlReleasePath @ 0x180009190 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B774 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C350 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpGetCachedPath @ 0x18000CAE0 (RtlpGetCachedPath.c)
 *     RtlpComputePath @ 0x18000CD74 (RtlpComputePath.c)
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     RtlReleaseRelativeName @ 0x18000E920 (RtlReleaseRelativeName.c)
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18000F5E4 (LdrpAllocatePlaceHolder.c)
 *     LdrpAllocateModuleEntry @ 0x18000F700 (LdrpAllocateModuleEntry.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800112B0 (LdrpLogDelayLoadTrigger.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800114C8 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x180020170 (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002942C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296A0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18002994C (RtlpExtendFrontEndUsageArray.c)
 *     EtwpSetProviderTraits @ 0x18002A1A4 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x18002A2E0 (EtwRegisterTraceGuidsW.c)
 *     EtwpRegisterProvider @ 0x18002A4F4 (EtwpRegisterProvider.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18002AF3C (SbpRetrieveCompatibilityManifest.c)
 *     RtlpAddHeapToProtectedList @ 0x18002C8B8 (RtlpAddHeapToProtectedList.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CDF0 (LdrRemoveLoadAsDataTable.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002D59C (RtlpAddHeapToUnprotectedList.c)
 *     LdrpDynamicShimModule @ 0x18002D724 (LdrpDynamicShimModule.c)
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     SbpDetermineDllContext @ 0x18002E2F4 (SbpDetermineDllContext.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381CC (LdrpResSearchResourceInsideDirectory.c)
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003A040 (RtlpTpWorkUnposted.c)
 *     TppTimerpFree @ 0x18003A530 (TppTimerpFree.c)
 *     TpAllocWait @ 0x18003A570 (TpAllocWait.c)
 *     TppWorkpFree @ 0x18003B5A0 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TpAllocWork @ 0x18003BBA0 (TpAllocWork.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003F354 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180041048 (LdrpMergeLangFallbackLists.c)
 *     RtlpInheritAcl @ 0x18004157C (RtlpInheritAcl.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044724 (RtlDoesFileExists_UstrEx.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044984 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F40C (RtlpFreeUserBlockToHeap.c)
 *     LdrpAllocateTlsEntry @ 0x18004FF64 (LdrpAllocateTlsEntry.c)
 *     LdrpAcquireTlsIndex @ 0x1800500B0 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x180050190 (RtlFlsAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1800507C8 (RtlpHpAllocateHeap.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x180052010 (EtwpFreeStreamIndexMap.c)
 *     RtlpFreeDebugInfo @ 0x1800524C8 (RtlpFreeDebugInfo.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpNotificationThread @ 0x180053D50 (EtwpNotificationThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800550D0 (EtwpInitLoggerContext.c)
 *     RtlIdnToUnicode @ 0x180056680 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x180058720 (RtlpGetNormalization.c)
 *     EtwUnregisterTraceGuids @ 0x180059690 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x1800598CC (EvtIntReportEventWorker.c)
 *     ResCKeOpenRuntimeView @ 0x18005A004 (ResCKeOpenRuntimeView.c)
 *     ResCKeDirectoryOpenMapping @ 0x18005A100 (ResCKeDirectoryOpenMapping.c)
 *     _ResQueryValueKey @ 0x18005AA98 (_ResQueryValueKey.c)
 *     RtlCreateProcessParametersEx @ 0x18005E8F0 (RtlCreateProcessParametersEx.c)
 *     TpTrimPools @ 0x180062610 (TpTrimPools.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DE8 (TppPoolUpdateTrimmedWorker.c)
 *     RtlCreateTimer @ 0x180064820 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064A90 (RtlRegisterWait.c)
 *     TppFreeWait @ 0x180064DF0 (TppFreeWait.c)
 *     RtlpTpTimerRundown @ 0x180064E40 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180064EE0 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180065018 (RtlpTpTimerQueueRundown.c)
 *     TppAlpcpFree @ 0x180065520 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     RtlpWnfNotificationThread @ 0x180065C20 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D38 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662E8 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663B8 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D78 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCallVectoredHandlers @ 0x18006700C (RtlpCallVectoredHandlers.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067178 (LdrpMergeParentBaseLanguagesToList.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     RtlDosSearchPath_U @ 0x1800675B0 (RtlDosSearchPath_U.c)
 *     RtlpFreeAllAtom @ 0x180067ADC (RtlpFreeAllAtom.c)
 *     RtlpDereferenceAtom @ 0x180067C98 (RtlpDereferenceAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067CFC (RtlAddAtomToAtomTableEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006892C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180069688 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetFileMUIPath @ 0x180069A90 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4A4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFreeTraverseNodes @ 0x18006A7D0 (RtlpFreeTraverseNodes.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateActivationContext @ 0x18006ABE0 (RtlCreateActivationContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B004 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B240 (RtlpGetDefaultTrustSubjectContext.c)
 *     LdrpFreeLoadContext @ 0x18006B728 (LdrpFreeLoadContext.c)
 *     RtlDeleteFunctionTable @ 0x18006E9C0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlCleanUpTEBLangLists @ 0x1800705B0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180070754 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070870 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C4C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EA0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpQueryValueKey @ 0x1800716C4 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D70 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800720C8 (RtlpMuiRegFreeStringPool.c)
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x180073448 (TppPoolUpdateNodeRelation.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 *     LdrpDestroyNode @ 0x180074790 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x1800747E4 (LdrpMergeNodes.c)
 *     RtlpCreateSerializationGroup @ 0x180074C80 (RtlpCreateSerializationGroup.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180074DA4 (RtlpLowFragHeapAllocateFromZone.c)
 *     CsrpConnectToServer @ 0x180075354 (CsrpConnectToServer.c)
 *     CsrFreeCaptureBuffer @ 0x1800757E0 (CsrFreeCaptureBuffer.c)
 *     LdrpIsReparsePoint @ 0x180075EE4 (LdrpIsReparsePoint.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AE4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlFreeActivationContextStack @ 0x180077860 (RtlFreeActivationContextStack.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180077A48 (RtlpFreeActivationContextStackFrame.c)
 *     TppIopFree @ 0x180078680 (TppIopFree.c)
 *     RtlSetCurrentDirectory_U @ 0x180079050 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800791AC (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180079270 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007935C (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079458 (RtlpCreateNewDirectoryReference.c)
 *     LdrpFreeTls @ 0x18007962C (LdrpFreeTls.c)
 *     LdrpCleanupThreadTlsData @ 0x1800796E8 (LdrpCleanupThreadTlsData.c)
 *     TpAllocIoCompletion @ 0x180079E60 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x18007A0E0 (TpSimpleTryPost.c)
 *     RtlFreeSid @ 0x18007A490 (RtlFreeSid.c)
 *     RtlAcquirePrivilege @ 0x18007D350 (RtlAcquirePrivilege.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F250 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     RtlpLoadNlsData @ 0x18008069C (RtlpLoadNlsData.c)
 *     RtlDeleteSecurityObject @ 0x180080A10 (RtlDeleteSecurityObject.c)
 *     TpAllocCleanupGroup @ 0x180080D00 (TpAllocCleanupGroup.c)
 *     RtlpNtQueryValueKey @ 0x180081400 (RtlpNtQueryValueKey.c)
 *     TpReleaseCleanupGroup @ 0x1800817A0 (TpReleaseCleanupGroup.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826B0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlpInitializeWnf @ 0x1800829B0 (RtlpInitializeWnf.c)
 *     TppFreeDirectParamsCache @ 0x180082CC4 (TppFreeDirectParamsCache.c)
 *     TppFreeDirectParams @ 0x180082F18 (TppFreeDirectParams.c)
 *     TppFreeThreadData @ 0x180082F3C (TppFreeThreadData.c)
 *     TppSimplepFree @ 0x1800830E0 (TppSimplepFree.c)
 *     RtlSetProtectedPolicy @ 0x180083120 (RtlSetProtectedPolicy.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008339C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlAbortRXact @ 0x180083750 (RtlAbortRXact.c)
 *     TppPoolpFree @ 0x180083BA8 (TppPoolpFree.c)
 *     RtlpNtEnumerateSubKey @ 0x180083CF0 (RtlpNtEnumerateSubKey.c)
 *     LdrpReleaseTlsEntry @ 0x1800840FC (LdrpReleaseTlsEntry.c)
 *     TpAllocJobNotification @ 0x180084510 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180084760 (TppJobpFree.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180085038 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlDestroyProcessParameters @ 0x180085260 (RtlDestroyProcessParameters.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D1C (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpFreeActivationContext @ 0x1800861BC (RtlpFreeActivationContext.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x18008622C (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpRemoveVectoredHandler @ 0x180086650 (RtlpRemoveVectoredHandler.c)
 *     RtlContractHashTable @ 0x180086840 (RtlContractHashTable.c)
 *     RtlAddAttributeActionToRXact @ 0x180086A10 (RtlAddAttributeActionToRXact.c)
 *     RtlReleasePrivilege @ 0x180087820 (RtlReleasePrivilege.c)
 *     RtlDeleteHashTable @ 0x1800881E0 (RtlDeleteHashTable.c)
 *     LdrpGetParentLangId @ 0x1800885C8 (LdrpGetParentLangId.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180088700 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896A8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlDestroyHandleTable @ 0x180089840 (RtlDestroyHandleTable.c)
 *     RtlDefaultNpAcl @ 0x18008B240 (RtlDefaultNpAcl.c)
 *     RtlExpandHashTable @ 0x18008B4D0 (RtlExpandHashTable.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C140 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3D4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C534 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateAndSetSD @ 0x18008C7F0 (RtlCreateAndSetSD.c)
 *     RtlCheckBootStatusIntegrity @ 0x18008CFB0 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeRXact @ 0x18008D170 (RtlInitializeRXact.c)
 *     LdrFlushAlternateResourceModules @ 0x18008D340 (LdrFlushAlternateResourceModules.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB24 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpHeapTrkTrackAdd @ 0x18008ECCC (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackStack @ 0x18008ED9C (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008EF88 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18008F120 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18008F6F0 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpComputeMergedAcl @ 0x18008FC58 (RtlpComputeMergedAcl.c)
 *     RtlpTpIoDllLoaded @ 0x180090038 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18009052C (RtlpTpIoAlloc.c)
 *     LdrAddDllDirectory @ 0x180090680 (LdrAddDllDirectory.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AA0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DE4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     ResCGetIndexedName @ 0x180095790 (ResCGetIndexedName.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CF250 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800CF6E0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CF750 (RtlEnableThreadProfiling.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 *     LdrUnregisterDllNotification @ 0x1800D0CB0 (LdrUnregisterDllNotification.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D135C (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1768 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D19B0 (LdrpLogNewDllLoadInternal.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2C8C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 *     RtlCreateUserSecurityObject @ 0x1800D49B0 (RtlCreateUserSecurityObject.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D5A80 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9E20 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800DA040 (LdrRemoveDllDirectory.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA380 (RtlpLookupSafeCurDirList.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DA6B8 (RtlpSignalSystemDirsModification.c)
 *     RtlComputeImportTableHash @ 0x1800DB720 (RtlComputeImportTableHash.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 *     RtlQueryModuleInformation @ 0x1800DCE20 (RtlQueryModuleInformation.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800DDC50 (LdrpResValidateFilePath.c)
 *     RtlIsUntrustedObject @ 0x1800DF880 (RtlIsUntrustedObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E0030 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E083C (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 *     RtlDestroyAtomTable @ 0x1800E2E00 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E2EE0 (RtlEmptyAtomTable.c)
 *     RtlGetUILanguageInfo @ 0x1800E5B80 (RtlGetUILanguageInfo.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6224 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E6B00 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6D20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800E92A0 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800EC4B0 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800EC5D0 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800EC6E0 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800EC740 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800ED190 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800ED370 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F0380 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F0934 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800F0E54 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpGetWindowsPolicy @ 0x1800F3BB0 (RtlpGetWindowsPolicy.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800F3F2C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800F4714 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800F4FE8 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpFreeReadOnlyHeap @ 0x1800F762C (RtlpFreeReadOnlyHeap.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800FDCBC (EtwpAddBinaryInfoEvents.c)
 *     ResCCloseRuntimeView @ 0x1800FEF5C (ResCCloseRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 *     ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FF9D4 (--$InitStack@H@@YAHPEAPEAXI@Z.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800FFA6C (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800FFC4C (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryFree @ 0x1800FFD50 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800FFFF4 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x180100250 (ResCSegmentFree.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102AF0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     BasepInitializeFindFileHandle @ 0x1801031CC (BasepInitializeFindFileHandle.c)
 *     _CreateSecureFileMapping @ 0x1801033C4 (_CreateSecureFileMapping.c)
 *     _ResCLoadFixedSize @ 0x180103848 (_ResCLoadFixedSize.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x1801041AC (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x1801049B4 (_ResGetFileAttributesW.c)
 *     ResCGetName @ 0x180105058 (ResCGetName.c)
 *     ResCCultureMapCreateAndPopulate @ 0x180105700 (ResCCultureMapCreateAndPopulate.c)
 *     ResCFreeCultureMap @ 0x180105828 (ResCFreeCultureMap.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x180105B04 (--$ReleaseStack@I@@YAXPEAX@Z.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x180105B54 (--$StackPush@I@@YAHIPEAX@Z.c)
 *     ResCDirectoryCreateAndPopulate @ 0x180105C1C (ResCDirectoryCreateAndPopulate.c)
 *     ResCHitsCreateAndPopulate @ 0x180105F1C (ResCHitsCreateAndPopulate.c)
 *     ResCSegmentCreateAndPopulate @ 0x180106000 (ResCSegmentCreateAndPopulate.c)
 * Callees:
 *     RtlpGetReservedBlockSize @ 0x180001058 (RtlpGetReservedBlockSize.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x18009116C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A9DB0 (RtlpInterlockedFlushSList.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  _DWORD *v3; // rdi
  ULONG v4; // r15d
  LOGICAL v7; // ebp
  unsigned __int64 v8; // rsi
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int16 v11; // ax
  int v12; // eax
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _TEB *v16; // rbx
  signed __int32 *v17; // rdi
  _QWORD *v18; // r13
  int v19; // r12d
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // r8
  __int64 v24; // rdx
  signed __int32 v25; // ebx
  _QWORD **v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned int v29; // edx
  _DWORD *v30; // r8
  int v31; // r15d
  unsigned int v32; // r9d
  unsigned int v33; // edx
  __int64 v34; // rsi
  _DWORD *v35; // rbx
  __int64 v36; // rcx
  signed __int32 v37; // eax
  _QWORD *v38; // r9
  int v39; // r8d
  __int64 v40; // rax
  _QWORD **v41; // rdx
  _QWORD *v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rsi
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v47; // rcx
  ULONG HeapProtection; // eax
  int v49; // edx
  signed __int64 v50; // rax
  int v51; // ecx
  signed __int32 v52; // eax
  __int64 v53; // r9
  int v54; // r8d
  __int64 v55; // rax
  volatile signed __int32 *v56; // rdx
  __int64 v57; // rcx
  unsigned __int8 v58; // al
  ULONG OldProtect; // [rsp+30h] [rbp-78h] BYREF
  signed __int64 v60; // [rsp+38h] [rbp-70h]
  int v61; // [rsp+40h] [rbp-68h]
  __int64 v62; // [rsp+48h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-58h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp-50h] BYREF
  int v65; // [rsp+68h] [rbp-40h]
  unsigned __int16 v68; // [rsp+C8h] [rbp+20h] BYREF

  v3 = BaseAddress;
  v4 = Flags;
  if ( !BaseAddress )
    return 1;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return RtlpHpFreeWithExceptionProtection(HeapHandle);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v7 = RtlpFreeHeapInternal(HeapHandle, (__int64)&v68);
    if ( v7 )
    {
      if ( v68 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (v68 - 1)) + 32LL),
          -v62);
    }
    return v7;
  }
  v7 = 0;
  v8 = 0LL;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
  {
LABEL_119:
    v58 = RtlpFreeHeap(HeapHandle);
    v7 = v58;
    if ( v58 )
      goto LABEL_120;
    return v7;
  }
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
  }
  else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  }
  else
  {
    v8 = (unsigned __int64)BaseAddress - 16;
    _m_prefetchw((char *)BaseAddress - 16);
    if ( *((char *)BaseAddress - 1) == 5 )
      v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
    if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v8, 0, 0LL, 0LL);
      v8 = 0LL;
    }
  }
  if ( !v8 )
    goto LABEL_50;
  if ( *((_BYTE *)v3 - 1) == 5 )
  {
    if ( *(char *)(v8 + 15) >= 0 )
    {
      if ( !*((_DWORD *)HeapHandle + 31) )
        goto LABEL_25;
      v65 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v8 + 8);
      if ( HIBYTE(v65) == (BYTE2(v65) ^ (unsigned __int8)(BYTE1(v65) ^ v65)) )
        goto LABEL_25;
    }
    else if ( (unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v8) )
    {
LABEL_25:
      if ( *(char *)(v8 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v10 = *(_DWORD *)(v8 + 8);
          v61 = v10;
          if ( (v10 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v61 = *((_DWORD *)HeapHandle + 34) ^ v10;
          v11 = v61;
        }
        else
        {
          v11 = *(_WORD *)(v8 + 8);
        }
        v9 = v11;
      }
      else if ( *(_WORD *)(v8 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)HeapHandle ^ (v8 >> 4)) )
      {
        v9 = MEMORY[0x24];
      }
      else
      {
        v9 = *(unsigned __int16 *)(*(_QWORD *)(v8
                                             - ((unsigned __int64)(*(_DWORD *)(v8 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ (unsigned int)(v8 >> 4)) >> 12))
                                 + 36LL);
      }
      if ( *(_BYTE *)(v8 + 15) == 4 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v12 = *(_DWORD *)(v8 + 8);
          v61 = v12;
          if ( (v12 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v61 = *((_DWORD *)HeapHandle + 34) ^ v12;
          v13 = v61;
        }
        else
        {
          v13 = *(_WORD *)(v8 + 8);
        }
        v14 = v9 + *(_QWORD *)(v8 - 16) - v13;
      }
      else
      {
        v14 = 16LL * v9;
      }
      if ( v14 + v8 < (unsigned __int64)v3 )
        goto LABEL_44;
      if ( (v4 & 0x3C000102) == 0 )
      {
        v15 = *((_BYTE *)v3 - 1) == 5 ? (__int64)&v3[-4 * *((unsigned __int8 *)v3 - 2)] : 0LL;
        if ( (int)RtlpCallInterceptRoutine(*(v3 - 2), (_DWORD)HeapHandle, (_DWORD)v3, 3, v15) < 0 )
          goto LABEL_50;
      }
      goto LABEL_51;
    }
LABEL_44:
    RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v8, (_DWORD)v3, 0LL, 0LL);
LABEL_50:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v16 = NtCurrentTeb();
    v16->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v7;
  }
LABEL_51:
  if ( *(char *)(v8 + 15) >= 0 )
    goto LABEL_119;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))
    || (v17 = *(signed __int32 **)(v8
                                 - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12))) == 0LL )
  {
    RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v8, 0, 0LL, 0LL);
    v3 = BaseAddress;
    v7 = 1;
    goto LABEL_120;
  }
  _m_prefetchw(v17);
  v18 = (_QWORD *)*((_QWORD *)v17 + 1);
  v19 = 0;
  v20 = (unsigned __int16)(*(_DWORD *)(v8 + 12) >> 8);
  v21 = *(_QWORD *)(**(_QWORD **)v17 + 24LL);
  v22 = RtlpLFHKey ^ v21 ^ (unsigned int)v18 ^ *((_DWORD *)v18 + 6);
  if ( (_QWORD *)((char *)v18 + (unsigned int)v20 * HIWORD(v22) + (unsigned __int16)v22) != (_QWORD *)v8 )
  {
    RtlpLogHeapFailure(3, *(_QWORD *)(v21 + 24), v8, 0, 0LL, 0LL);
    goto LABEL_66;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v21 + 24), v8 + 16, 2LL);
  v23 = 100LL;
  v24 = 0LL;
  if ( MEMORY[0x7FFE036A] <= 1u )
    v23 = 0LL;
  while ( 1 )
  {
    v25 = v17[8];
    if ( (v25 & 0x80000000) == 0 && v25 == _InterlockedCompareExchange(v17 + 8, v25 | 0x80000000, v25) )
      break;
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 > (unsigned int)v23 )
      goto LABEL_64;
  }
  if ( v25 == -1 )
  {
LABEL_64:
    *(_BYTE *)(v8 + 15) = 0x80;
    v26 = (_QWORD **)(v8 + 16);
    v27 = (__int64)(v17 + 4);
    goto LABEL_65;
  }
  *(_BYTE *)(v8 + 15) = 0x80;
  _bittestandreset64((signed __int64 *)v18[5], v20);
  if ( *((_WORD *)v17 + 8) )
  {
    v28 = (_QWORD *)RtlpInterlockedFlushSList(v17 + 4, v24, v23, 0x8000LL);
    while ( v28 )
    {
      v29 = *((_DWORD *)v28 - 1);
      v28 = (_QWORD *)*v28;
      ++v19;
      v20 = (unsigned __int16)(v29 >> 8);
      _bittestandreset64((signed __int64 *)v18[5], v20);
    }
  }
  v30 = *(_DWORD **)v17;
  v31 = (_DWORD)v20 << 16;
  if ( ((unsigned __int16)v31 | (unsigned __int16)(v19 + v25 + 1)) != *((_WORD *)v17 + 20)
    || (v32 = v30[42], v33 = *(_DWORD *)(*(_QWORD *)v30 + 32LL), v30[41] == 1)
    && v33 >= v32
    && v33 - v32 < *(_DWORD *)(*(_QWORD *)v30 + 36LL) )
  {
    v17[8] = v31 | (v19 + (unsigned __int16)v25 + 1);
    if ( (v17[11] & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)v30, (__int64)v17) )
      goto LABEL_66;
    do
    {
      v52 = v17[11];
      if ( !v52 || (v52 & 2) != 0 )
        goto LABEL_66;
    }
    while ( v52 != _InterlockedCompareExchange(v17 + 11, v52 | 2, v52) );
    v53 = *(_QWORD *)v17;
    v54 = 0;
    while ( 1 )
    {
      v55 = ((_BYTE)v54 + (unsigned __int8)*(_WORD *)(v53 + 174)) & 0xF;
      v56 = *(volatile signed __int32 **)(v53 + 8 * v55 + 16);
      v57 = v53 + 8 * v55;
      if ( v56 )
      {
        if ( (v56[11] & 1) == 0
          && v56 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)(v57 + 16),
                                                 (signed __int64)v17,
                                                 (signed __int64)v56) )
        {
          _m_prefetchw((const void *)(v56 + 11));
          if ( _InterlockedAnd(v56 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_66;
          v27 = **(_QWORD **)v56;
          *(_QWORD *)v56 = 0LL;
          v26 = (_QWORD **)(v56 + 12);
LABEL_65:
          RtlpInterlockedPushEntrySList(v27, v26);
          goto LABEL_66;
        }
      }
      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 16), (signed __int64)v17, 0LL) )
      {
        goto LABEL_66;
      }
      if ( (unsigned int)++v54 >= 0x10 )
      {
        v26 = (_QWORD **)(v17 + 12);
        v27 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v17 + 24LL)
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v17 + 172LL)
                        + 1192)
            + 144LL;
        goto LABEL_65;
      }
    }
  }
  v34 = *(_QWORD *)v17;
  v35 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v17 + 8LL), 0LL);
  if ( !v35 )
    goto LABEL_92;
  _m_prefetchw(v35 + 11);
  if ( _InterlockedAnd(v35 + 11, 0xFFFFFFF9) == 6 )
  {
    v36 = **(_QWORD **)v35;
    *(_QWORD *)v35 = 0LL;
LABEL_90:
    v43 = v35 + 12;
LABEL_91:
    RtlpInterlockedPushEntrySList(v36, v43);
    goto LABEL_92;
  }
  if ( !RtlpIsSubSegmentReuseable(v34, (__int64)v35) )
    goto LABEL_92;
  do
  {
    v37 = v35[11];
    if ( !v37 || (v37 & 2) != 0 )
      goto LABEL_92;
  }
  while ( v37 != _InterlockedCompareExchange(v35 + 11, v37 | 2, v37) );
  v38 = *(_QWORD **)v35;
  v39 = 0;
  while ( 1 )
  {
    v40 = ((_BYTE)v39 + (unsigned __int8)*((_WORD *)v38 + 87)) & 0xF;
    v41 = (_QWORD **)v38[v40 + 2];
    v42 = &v38[v40];
    if ( !v41 )
    {
      if ( !_InterlockedCompareExchange64(v42 + 2, (signed __int64)v35, 0LL) )
        goto LABEL_92;
      goto LABEL_88;
    }
    if ( (*((_DWORD *)v41 + 11) & 1) == 0
      && v41 == (_QWORD **)_InterlockedCompareExchange64(v42 + 2, (signed __int64)v35, (signed __int64)v41) )
    {
      break;
    }
LABEL_88:
    if ( (unsigned int)++v39 >= 0x10 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v35 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v35 + 172LL) + 1192)
          + 144LL;
      goto LABEL_90;
    }
  }
  _m_prefetchw((char *)v41 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v41 + 11, 0xFFFFFFFD) == 2 )
  {
    v36 = **v41;
    *v41 = 0LL;
    v43 = v41 + 6;
    goto LABEL_91;
  }
LABEL_92:
  v44 = *(_QWORD *)v17;
  v45 = *(_QWORD *)(*(_QWORD *)v34 + 24LL);
  if ( (*((_BYTE *)v17 + 38) & 3) != 0 )
  {
    BaseAddressa = (PVOID)((*((_QWORD *)v17 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
    ReservedBlockSize = RtlpGetReservedBlockSize((__int64)v17);
    v47 = *(_DWORD **)(v45 + 24);
    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v17 + 20);
    HeapProtection = RtlpGetHeapProtection(v47, 1);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
  }
  *(_DWORD *)(*((_QWORD *)v17 + 1) + 20LL) = 0;
  RtlpFreeUserBlock(v45, *((__int64 **)v17 + 1));
  v49 = -*((unsigned __int16 *)v17 + 20);
  do
  {
    v50 = *(_QWORD *)(v44 + 160);
    LODWORD(v60) = v50 + v49;
    if ( v49 <= 0 )
      v51 = HIDWORD(v50) - 1;
    else
      v51 = HIDWORD(v50) + 1;
    HIDWORD(v60) = v51;
  }
  while ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 160), v60, v50) );
  *((_QWORD *)v17 + 1) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v45 + 60));
  v17[8] = 0;
  _m_prefetchw(v17 + 11);
  if ( _InterlockedAnd(v17 + 11, 0xFFFFFFFE) == 1 )
  {
    v26 = (_QWORD **)(v17 + 12);
    v27 = **(_QWORD **)v17;
    *(_QWORD *)v17 = 0LL;
    goto LABEL_65;
  }
LABEL_66:
  v4 = Flags;
  v3 = BaseAddress;
  v7 = 1;
LABEL_120:
  if ( (RtlpHpHeapFeatures & 4) != 0 && HeapHandle != RtlpHpMetadataHeap && (v4 & 0x10000000) == 0 )
    RtlpHpStackTraceRemoveStack(HeapHandle, v3);
  return v7;
}
