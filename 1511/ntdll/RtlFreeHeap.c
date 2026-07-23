/*
 * XREFs of RtlFreeHeap @ 0x1800207C0
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x1800014A0 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     RtlLockModuleSection @ 0x180002040 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180002140 (RtlUnlockModuleSection.c)
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800038CC (EtwpAddBinaryInfoEvents.c)
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x1800044FC (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000533C (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfNotificationThread @ 0x180005410 (RtlpWnfNotificationThread.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 *     TppPoolUpdateNodeRelation @ 0x1800060D4 (TppPoolUpdateNodeRelation.c)
 *     TpAllocPoolInternal @ 0x1800061E0 (TpAllocPoolInternal.c)
 *     TppFreeWait @ 0x180006640 (TppFreeWait.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     RtlpTpWaitRundown @ 0x180006DA0 (RtlpTpWaitRundown.c)
 *     RtlRegisterWait @ 0x180007100 (RtlRegisterWait.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180007370 (RtlpWnfProcessCurrentDescriptor.c)
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     RtlpTpTimerRundown @ 0x180008088 (RtlpTpTimerRundown.c)
 *     RtlCreateTimer @ 0x1800081A0 (RtlCreateTimer.c)
 *     RtlpDecRefWnfUserSubscription @ 0x180008808 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     TpAllocWait @ 0x180009600 (TpAllocWait.c)
 *     TppTimerpFree @ 0x18000A570 (TppTimerpFree.c)
 *     LdrpDynamicShimModule @ 0x18000A5AC (LdrpDynamicShimModule.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     TppWorkpFree @ 0x18000CA40 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAllocWork @ 0x18000CDC0 (TpAllocWork.c)
 *     SbpDetermineDllContext @ 0x18000E3A8 (SbpDetermineDllContext.c)
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 *     LdrpAllocateModuleEntry @ 0x18000FB30 (LdrpAllocateModuleEntry.c)
 *     LdrpAllocatePlaceHolder @ 0x18000FCC4 (LdrpAllocatePlaceHolder.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x18002CF40 (TppPrepareDirectParams.c)
 *     RtlReleasePath @ 0x18002F730 (RtlReleasePath.c)
 *     RtlpGetCachedPath @ 0x18002FB34 (RtlpGetCachedPath.c)
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18003839C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     RtlReleaseRelativeName @ 0x18003D350 (RtlReleaseRelativeName.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003DD44 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18003E2C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18003E524 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003E6C8 (RtlpAddNeutralsToMergedList.c)
 *     RtlpLoadNlsData @ 0x18003ED7C (RtlpLoadNlsData.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003FC68 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFreeTraverseNodes @ 0x180040660 (RtlpFreeTraverseNodes.c)
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x180040FF4 (LdrpAllocateTlsEntry.c)
 *     LdrpAcquireTlsIndex @ 0x180041140 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x180041220 (RtlFlsAlloc.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800428F8 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateActivationContext @ 0x180043360 (RtlCreateActivationContext.c)
 *     RtlpFreeAllAtom @ 0x1800438E8 (RtlpFreeAllAtom.c)
 *     RtlpDereferenceAtom @ 0x180043AA8 (RtlpDereferenceAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x180043B0C (RtlAddAtomToAtomTableEx.c)
 *     RtlDosSearchPath_U @ 0x1800443C0 (RtlDosSearchPath_U.c)
 *     PsspCaptureAuxiliaryPages @ 0x180044644 (PsspCaptureAuxiliaryPages.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     EtwUnregisterTraceGuids @ 0x180047DF0 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x18004819C (EvtIntReportEventWorker.c)
 *     ResCKeOpenRuntimeView @ 0x180048884 (ResCKeOpenRuntimeView.c)
 *     ResCKeDirectoryOpenMapping @ 0x180048988 (ResCKeDirectoryOpenMapping.c)
 *     _ResQueryValueKey @ 0x1800491D8 (_ResQueryValueKey.c)
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004FBB0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpInitializeWnf @ 0x1800513D0 (RtlpInitializeWnf.c)
 *     CsrFreeCaptureBuffer @ 0x180051740 (CsrFreeCaptureBuffer.c)
 *     RtlpCreateSerializationGroup @ 0x180051C38 (RtlpCreateSerializationGroup.c)
 *     CsrpConnectToServer @ 0x1800520A4 (CsrpConnectToServer.c)
 *     EtwpNotificationThread @ 0x180052810 (EtwpNotificationThread.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180052F38 (RtlpExtendFrontEndUsageArray.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x180053A70 (RtlpCreateWnfNameSubscription.c)
 *     EtwpSetProviderTraits @ 0x180053EFC (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x180054030 (EtwRegisterTraceGuidsW.c)
 *     EtwpRegisterProvider @ 0x1800542E4 (EtwpRegisterProvider.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180056084 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800562F4 (RtlpAddHeapToProtectedList.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 *     RtlpHpAllocateHeap @ 0x18005A8C8 (RtlpHpAllocateHeap.c)
 *     WerpGlobalFlagsForProcess @ 0x18005B83C (WerpGlobalFlagsForProcess.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x18005BCC4 (EtwpFreeStreamIndexMap.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005DC30 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18005FDD0 (RtlpInheritAcl.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800614F4 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180061730 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180062C6C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180068308 (TppPoolUpdateTrimmedWorker.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180068DE0 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlIdnToUnicode @ 0x18006A2A0 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x18006B6AC (RtlpGetNormalization.c)
 *     TppAlpcpFree @ 0x18006BE50 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     RtlpCallVectoredHandlers @ 0x18006E65C (RtlpCallVectoredHandlers.c)
 *     LdrpFreeLoadContext @ 0x18006E898 (LdrpFreeLoadContext.c)
 *     RtlExpandHashTable @ 0x18006F900 (RtlExpandHashTable.c)
 *     RtlAddGrowableFunctionTable @ 0x1800712C0 (RtlAddGrowableFunctionTable.c)
 *     RtlpComputePath @ 0x180072FAC (RtlpComputePath.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 *     LdrpDestroyNode @ 0x180074C74 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x180074CC8 (LdrpMergeNodes.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18007522C (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlFreeActivationContextStack @ 0x180075FF0 (RtlFreeActivationContextStack.c)
 *     RtlpFreeActivationContextStackFrame @ 0x1800761D8 (RtlpFreeActivationContextStackFrame.c)
 *     LdrpFreeTls @ 0x180076468 (LdrpFreeTls.c)
 *     LdrpCleanupThreadTlsData @ 0x180076524 (LdrpCleanupThreadTlsData.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 *     TpSimpleTryPost @ 0x1800776B0 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     RtlSetCurrentDirectory_U @ 0x180077BE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x180077D40 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180077E00 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x180077EEC (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     RtlFreeSid @ 0x180078300 (RtlFreeSid.c)
 *     RtlAcquirePrivilege @ 0x180078990 (RtlAcquirePrivilege.c)
 *     TppIopFree @ 0x180079300 (TppIopFree.c)
 *     RtlCleanUpTEBLangLists @ 0x18007A9E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeStringPool @ 0x18007AAE4 (RtlpMuiRegFreeStringPool.c)
 *     RtlDeleteFunctionTable @ 0x18007B4F0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteSecurityObject @ 0x18007BB70 (RtlDeleteSecurityObject.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007C21C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007CCAC (SbpRetrieveCompatibilityManifest.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007D064 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x18007D7A0 (RtlpNtQueryValueKey.c)
 *     TppFreeDirectParamsCache @ 0x18007E09C (TppFreeDirectParamsCache.c)
 *     RtlpNtEnumerateSubKey @ 0x18007E640 (RtlpNtEnumerateSubKey.c)
 *     TppFreeThreadData @ 0x18007E73C (TppFreeThreadData.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlDeleteHashTable @ 0x18007ED10 (RtlDeleteHashTable.c)
 *     TppSimplepFree @ 0x18007F160 (TppSimplepFree.c)
 *     TppFreeDirectParams @ 0x18007F32C (TppFreeDirectParams.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 *     TpAllocCleanupGroup @ 0x18007F830 (TpAllocCleanupGroup.c)
 *     LdrpReleaseTlsEntry @ 0x18007F9B0 (LdrpReleaseTlsEntry.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800807D8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlContractHashTable @ 0x180080880 (RtlContractHashTable.c)
 *     RtlDestroyProcessParameters @ 0x180080940 (RtlDestroyProcessParameters.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800818B0 (TppJobpFree.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpFreeActivationContext @ 0x180081CFC (RtlpFreeActivationContext.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180081D7C (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpTpTimerQueueRundown @ 0x180081F9C (RtlpTpTimerQueueRundown.c)
 *     TpReleaseCleanupGroup @ 0x180082210 (TpReleaseCleanupGroup.c)
 *     RtlpRemoveVectoredHandler @ 0x1800822F0 (RtlpRemoveVectoredHandler.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800825A0 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlAddAttributeActionToRXact @ 0x1800826D0 (RtlAddAttributeActionToRXact.c)
 *     RtlReleasePrivilege @ 0x180082A10 (RtlReleasePrivilege.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180083270 (RtlpMuiFreeLangRegistryInfo.c)
 *     PssNtFreeSnapshot @ 0x180084150 (PssNtFreeSnapshot.c)
 *     RtlSetSearchPathMode @ 0x1800844C0 (RtlSetSearchPathMode.c)
 *     RtlDestroyHandleTable @ 0x180084CD0 (RtlDestroyHandleTable.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpHeapTrkTrackAdd @ 0x180084F84 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackStack @ 0x18008505C (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008523C (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x180085324 (RtlpHeapTrkDereferenceStack.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18008599C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlAbortRXact @ 0x1800868E0 (RtlAbortRXact.c)
 *     RtlInitializeRXact @ 0x180087D30 (RtlInitializeRXact.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087F00 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180088194 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     LdrFlushAlternateResourceModules @ 0x180088AE0 (LdrFlushAlternateResourceModules.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180089484 (RtlpLoadInstallLanguageFallback.c)
 *     PsspCaptureHandleInformation @ 0x18008A588 (PsspCaptureHandleInformation.c)
 *     RtlpComputeMergedAcl @ 0x18008BA0C (RtlpComputeMergedAcl.c)
 *     RtlpTpIoDllLoaded @ 0x18008D098 (RtlpTpIoDllLoaded.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     RtlpTpIoAlloc @ 0x18008DD2C (RtlpTpIoAlloc.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800931CC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800934CC (RtlpMuiRegLangInfoMatchesSpec.c)
 *     ResCGetIndexedName @ 0x180093F38 (ResCGetIndexedName.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800C7844 (CsrpLocalSetupForSecureProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C7AE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800C7E70 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8110 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800C8300 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800C8370 (RtlEnableThreadProfiling.c)
 *     RtlpCheckDeviceName @ 0x1800C8ADC (RtlpCheckDeviceName.c)
 *     LdrUnregisterDllNotification @ 0x1800C9830 (LdrUnregisterDllNotification.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800C9DB8 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEventEx @ 0x1800CA0FC (LdrpLogEtwEventEx.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CA204 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CA448 (LdrpLogNewDllLoadInternal.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800CB478 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlCreateUserSecurityObject @ 0x1800CC600 (RtlCreateUserSecurityObject.c)
 *     RtlDefaultNpAcl @ 0x1800CC680 (RtlDefaultNpAcl.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800CDA10 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D19B0 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800D1BD0 (LdrRemoveDllDirectory.c)
 *     RtlpLookupSafeCurDirList @ 0x1800D1EFC (RtlpLookupSafeCurDirList.c)
 *     RtlpSignalSystemDirsModification @ 0x1800D2234 (RtlpSignalSystemDirsModification.c)
 *     RtlComputeImportTableHash @ 0x1800D3400 (RtlComputeImportTableHash.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 *     RtlQueryModuleInformation @ 0x1800D49B0 (RtlQueryModuleInformation.c)
 *     LdrpResMapFile @ 0x1800D4D7C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800D57E8 (LdrpResValidateFilePath.c)
 *     RtlIsUntrustedObject @ 0x1800D6E90 (RtlIsUntrustedObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800D7E34 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x1800D8B20 (RtlAddResourceAttributeAce.c)
 *     RtlDestroyAtomTable @ 0x1800DA0B0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800DA190 (RtlEmptyAtomTable.c)
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800DCF34 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800DD810 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800DDA30 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800DFFC0 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800E3350 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800E3470 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800E3580 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800E35E0 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800E3F50 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800E4130 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800E6904 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800E71A0 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800E7754 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800E7C78 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 *     RtlpGetWindowsPolicy @ 0x1800EAE30 (RtlpGetWindowsPolicy.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800EAFE4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800EB1AC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800EB994 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EC274 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800EDC6C (_RtlpMuiRegValidateInstalled.c)
 *     EtwpQueryRegString @ 0x1800F4A44 (EtwpQueryRegString.c)
 *     EtwpShutdownCompression @ 0x1800F4C40 (EtwpShutdownCompression.c)
 *     ResCCloseRuntimeView @ 0x1800F6E04 (ResCCloseRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F6F24 (ResCKeCreateRuntimeView.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7870 (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800F7A50 (--$StackPush@I@@YAHIPEAX@Z.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800F7B18 (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryFree @ 0x1800F7C24 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F7EC8 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x1800F8124 (ResCSegmentFree.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F821C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     BasepInitializeFindFileHandle @ 0x1800F88F8 (BasepInitializeFindFileHandle.c)
 *     _CreateSecureFileMapping @ 0x1800F8AF0 (_CreateSecureFileMapping.c)
 *     _ResCLoadFixedSize @ 0x1800F8F74 (_ResCLoadFixedSize.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x1800F98D4 (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesEx @ 0x1800F9F9C (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x1800FA0C8 (_ResGetFileAttributesW.c)
 *     ResCGetName @ 0x1800FA76C (ResCGetName.c)
 *     ResCCultureMapCreateAndPopulate @ 0x1800FAE20 (ResCCultureMapCreateAndPopulate.c)
 *     ResCFreeCultureMap @ 0x1800FAF48 (ResCFreeCultureMap.c)
 *     ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FB224 (--$InitStack@H@@YAHPEAPEAXI@Z.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x1800FB2BC (--$ReleaseStack@I@@YAXPEAX@Z.c)
 *     ResCDirectoryCreateAndPopulate @ 0x1800FB30C (ResCDirectoryCreateAndPopulate.c)
 *     ResCHitsCreateAndPopulate @ 0x1800FB60C (ResCHitsCreateAndPopulate.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FB6F0 (ResCSegmentCreateAndPopulate.c)
 * Callees:
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180021080 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpHpTagFree @ 0x180050324 (RtlpHpTagFree.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlpValidateLFHBlock @ 0x1800951F4 (RtlpValidateLFHBlock.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v7; // rcx
  LOGICAL v8; // esi
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  unsigned __int16 v14; // ax
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  char *v18; // rcx
  struct _TEB *v19; // rbx
  int v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h]

  if ( !BaseAddress )
    return 1;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
  if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    v8 = 0;
    v10 = 0LL;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return (unsigned __int8)RtlpFreeHeap(HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v10 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    }
    else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    }
    else
    {
      v10 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v10, 0, 0LL, 0LL);
        v10 = 0LL;
      }
    }
    if ( !v10 )
      goto LABEL_52;
    if ( *((char *)BaseAddress - 1) != 5 )
    {
LABEL_53:
      if ( *(char *)(v10 + 15) < 0 )
      {
        RtlpLowFragHeapFree(HeapHandle, v10);
        return 1;
      }
      return (unsigned __int8)RtlpFreeHeap(HeapHandle);
    }
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( !*((_DWORD *)HeapHandle + 31) )
        goto LABEL_27;
      v11 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v10 + 8);
      if ( HIBYTE(v11) == (BYTE2(v11) ^ (unsigned __int8)(BYTE1(v11) ^ v11)) )
        goto LABEL_27;
    }
    else if ( (unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v10) )
    {
LABEL_27:
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v13 = *(_DWORD *)(v10 + 8);
          LOWORD(v20) = v13;
          if ( (v13 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v20 = *((_DWORD *)HeapHandle + 34) ^ v13;
          v14 = v20;
        }
        else
        {
          v14 = *(_WORD *)(v10 + 8);
        }
        v12 = v14;
      }
      else if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
      {
        v12 = MEMORY[0x24];
      }
      else
      {
        v12 = *(unsigned __int16 *)(*(_QWORD *)(v10
                                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12))
                                  + 36LL);
      }
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v15 = *(_DWORD *)(v10 + 8);
          LOWORD(v21) = v15;
          if ( (v15 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v21 = *((_DWORD *)HeapHandle + 34) ^ v15;
          v16 = v21;
        }
        else
        {
          v16 = *(_WORD *)(v10 + 8);
        }
        v17 = v12 + *(_QWORD *)(v10 - 16) - v16;
      }
      else
      {
        v17 = 16LL * v12;
      }
      if ( v17 + v10 < (unsigned __int64)BaseAddress )
        goto LABEL_46;
      if ( (Flags & 0x3C000102) == 0 )
      {
        v18 = *((char *)BaseAddress - 1) == 5
            ? (char *)BaseAddress - 16 * (unsigned __int8)*((char *)BaseAddress - 2)
            : 0LL;
        if ( (int)RtlpCallInterceptRoutine(
                    *((_DWORD *)BaseAddress - 2),
                    (_DWORD)HeapHandle,
                    (_DWORD)BaseAddress,
                    3,
                    (__int64)v18) < 0 )
          goto LABEL_52;
      }
      goto LABEL_53;
    }
LABEL_46:
    RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v10, (_DWORD)BaseAddress, 0LL, 0LL);
LABEL_52:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v19 = NtCurrentTeb();
    v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v8;
  }
  v8 = RtlpFreeHeapInternal(HeapHandle, (__int64)&v22);
  if ( !v8 || !(_WORD)v22 )
    return v8;
  v9 = v23;
  if ( !v23 )
    v9 = 16LL;
  RtlpHpTagFree(v7, (unsigned __int16)v22, v9);
  return v8;
}
