/*
 * XREFs of RtlFreeHeap @ 0x1800466F0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlLockModuleSection @ 0x180001DA0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     EtwpShutdownCompression @ 0x180003274 (EtwpShutdownCompression.c)
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     RtlpCombineAcls @ 0x1800061B8 (RtlpCombineAcls.c)
 *     RtlSetSearchPathMode @ 0x1800069D0 (RtlSetSearchPathMode.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075CC (WerpGlobalFlagsForProcess.c)
 *     PssNtFreeSnapshot @ 0x180007C40 (PssNtFreeSnapshot.c)
 *     RtlReleasePath @ 0x1800091A0 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B784 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C360 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpGetCachedPath @ 0x18000CAF0 (RtlpGetCachedPath.c)
 *     RtlpComputePath @ 0x18000CD84 (RtlpComputePath.c)
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     RtlReleaseRelativeName @ 0x18000E930 (RtlReleaseRelativeName.c)
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F010 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18000F5F4 (LdrpAllocatePlaceHolder.c)
 *     LdrpAllocateModuleEntry @ 0x18000F710 (LdrpAllocateModuleEntry.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800112C0 (LdrpLogDelayLoadTrigger.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800114D8 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x180020180 (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002943C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296B0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18002995C (RtlpExtendFrontEndUsageArray.c)
 *     EtwpSetProviderTraits @ 0x18002A1B4 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x18002A2F0 (EtwRegisterTraceGuidsW.c)
 *     EtwpRegisterProvider @ 0x18002A504 (EtwpRegisterProvider.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18002AF4C (SbpRetrieveCompatibilityManifest.c)
 *     RtlpAddHeapToProtectedList @ 0x18002C8C8 (RtlpAddHeapToProtectedList.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002D5AC (RtlpAddHeapToUnprotectedList.c)
 *     LdrpDynamicShimModule @ 0x18002D734 (LdrpDynamicShimModule.c)
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     SbpDetermineDllContext @ 0x18002E304 (SbpDetermineDllContext.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4EC (LdrpSendPostSnapNotifications.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381DC (LdrpResSearchResourceInsideDirectory.c)
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003A050 (RtlpTpWorkUnposted.c)
 *     TppTimerpFree @ 0x18003A540 (TppTimerpFree.c)
 *     TpAllocWait @ 0x18003A580 (TpAllocWait.c)
 *     TppWorkpFree @ 0x18003B5B0 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5F0 (TppCleanupGroupMemberDestroy.c)
 *     TpAllocWork @ 0x18003BBB0 (TpAllocWork.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003F364 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     RtlpInheritAcl @ 0x18004158C (RtlpInheritAcl.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044194 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044734 (RtlDoesFileExists_UstrEx.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044994 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F14 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F41C (RtlpFreeUserBlockToHeap.c)
 *     LdrpAllocateTlsEntry @ 0x18004FF74 (LdrpAllocateTlsEntry.c)
 *     LdrpAcquireTlsIndex @ 0x1800500C0 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x1800501A0 (RtlFlsAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1800507D8 (RtlpHpAllocateHeap.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
 *     EtwpFreeLoggerContext @ 0x180051E5C (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x180052020 (EtwpFreeStreamIndexMap.c)
 *     RtlpFreeDebugInfo @ 0x1800524D8 (RtlpFreeDebugInfo.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpNotificationThread @ 0x180053D60 (EtwpNotificationThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800550E0 (EtwpInitLoggerContext.c)
 *     RtlIdnToUnicode @ 0x180056690 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x180058730 (RtlpGetNormalization.c)
 *     EtwUnregisterTraceGuids @ 0x1800596A0 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x1800598DC (EvtIntReportEventWorker.c)
 *     ResCKeOpenRuntimeView @ 0x18005A014 (ResCKeOpenRuntimeView.c)
 *     ResCKeDirectoryOpenMapping @ 0x18005A110 (ResCKeDirectoryOpenMapping.c)
 *     _ResQueryValueKey @ 0x18005AAA8 (_ResQueryValueKey.c)
 *     RtlCreateProcessParametersEx @ 0x18005E900 (RtlCreateProcessParametersEx.c)
 *     TpTrimPools @ 0x180062620 (TpTrimPools.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180062DF8 (TppPoolUpdateTrimmedWorker.c)
 *     RtlCreateTimer @ 0x180064830 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064AA0 (RtlRegisterWait.c)
 *     TppFreeWait @ 0x180064E00 (TppFreeWait.c)
 *     RtlpTpTimerRundown @ 0x180064E50 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180064EF0 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180065028 (RtlpTpTimerQueueRundown.c)
 *     TppAlpcpFree @ 0x180065530 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180065614 (TppAllocAlpcCompletion.c)
 *     RtlpWnfNotificationThread @ 0x180065C30 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D48 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662F8 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663C8 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D88 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCallVectoredHandlers @ 0x18006701C (RtlpCallVectoredHandlers.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067188 (LdrpMergeParentBaseLanguagesToList.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlDosSearchPath_U @ 0x1800675C0 (RtlDosSearchPath_U.c)
 *     RtlpFreeAllAtom @ 0x180067AEC (RtlpFreeAllAtom.c)
 *     RtlpDereferenceAtom @ 0x180067CA8 (RtlpDereferenceAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067D0C (RtlAddAtomToAtomTableEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006893C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180069698 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4B4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFreeTraverseNodes @ 0x18006A7E0 (RtlpFreeTraverseNodes.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateActivationContext @ 0x18006ABF0 (RtlCreateActivationContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B014 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B250 (RtlpGetDefaultTrustSubjectContext.c)
 *     LdrpFreeLoadContext @ 0x18006B738 (LdrpFreeLoadContext.c)
 *     RtlDeleteFunctionTable @ 0x18006E9D0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlCleanUpTEBLangLists @ 0x1800705C0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180070764 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070880 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EB0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpQueryValueKey @ 0x1800716D4 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D80 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800720D8 (RtlpMuiRegFreeStringPool.c)
 *     TpAllocPoolInternal @ 0x180072E74 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x180073458 (TppPoolUpdateNodeRelation.c)
 *     LdrpLoadContextReplaceModule @ 0x180073728 (LdrpLoadContextReplaceModule.c)
 *     LdrpDestroyNode @ 0x1800747A0 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x1800747F4 (LdrpMergeNodes.c)
 *     RtlpCreateSerializationGroup @ 0x180074C90 (RtlpCreateSerializationGroup.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180074DB4 (RtlpLowFragHeapAllocateFromZone.c)
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 *     CsrFreeCaptureBuffer @ 0x1800757F0 (CsrFreeCaptureBuffer.c)
 *     LdrpIsReparsePoint @ 0x180075EF4 (LdrpIsReparsePoint.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AF4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlFreeActivationContextStack @ 0x180077870 (RtlFreeActivationContextStack.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180077A58 (RtlpFreeActivationContextStackFrame.c)
 *     TppIopFree @ 0x180078690 (TppIopFree.c)
 *     RtlSetCurrentDirectory_U @ 0x180079060 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800791BC (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180079280 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007936C (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079468 (RtlpCreateNewDirectoryReference.c)
 *     LdrpFreeTls @ 0x18007963C (LdrpFreeTls.c)
 *     LdrpCleanupThreadTlsData @ 0x1800796F8 (LdrpCleanupThreadTlsData.c)
 *     TpAllocIoCompletion @ 0x180079E70 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x18007A0F0 (TpSimpleTryPost.c)
 *     RtlFreeSid @ 0x18007A4A0 (RtlFreeSid.c)
 *     RtlAcquirePrivilege @ 0x18007D360 (RtlAcquirePrivilege.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F260 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F330 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     RtlpLoadNlsData @ 0x1800806AC (RtlpLoadNlsData.c)
 *     RtlDeleteSecurityObject @ 0x180080A20 (RtlDeleteSecurityObject.c)
 *     TpAllocCleanupGroup @ 0x180080D10 (TpAllocCleanupGroup.c)
 *     RtlpNtQueryValueKey @ 0x180081410 (RtlpNtQueryValueKey.c)
 *     TpReleaseCleanupGroup @ 0x1800817B0 (TpReleaseCleanupGroup.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826C0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlpInitializeWnf @ 0x1800829C0 (RtlpInitializeWnf.c)
 *     TppFreeDirectParamsCache @ 0x180082CD4 (TppFreeDirectParamsCache.c)
 *     TppFreeDirectParams @ 0x180082F28 (TppFreeDirectParams.c)
 *     TppFreeThreadData @ 0x180082F4C (TppFreeThreadData.c)
 *     TppSimplepFree @ 0x1800830F0 (TppSimplepFree.c)
 *     RtlSetProtectedPolicy @ 0x180083130 (RtlSetProtectedPolicy.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800833AC (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlAbortRXact @ 0x180083760 (RtlAbortRXact.c)
 *     TppPoolpFree @ 0x180083BB8 (TppPoolpFree.c)
 *     RtlpNtEnumerateSubKey @ 0x180083D00 (RtlpNtEnumerateSubKey.c)
 *     LdrpReleaseTlsEntry @ 0x18008410C (LdrpReleaseTlsEntry.c)
 *     TpAllocJobNotification @ 0x180084520 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180084770 (TppJobpFree.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180085048 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlDestroyProcessParameters @ 0x180085270 (RtlDestroyProcessParameters.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D2C (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpFreeActivationContext @ 0x1800861CC (RtlpFreeActivationContext.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x18008623C (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpRemoveVectoredHandler @ 0x180086660 (RtlpRemoveVectoredHandler.c)
 *     RtlContractHashTable @ 0x180086850 (RtlContractHashTable.c)
 *     RtlAddAttributeActionToRXact @ 0x180086A20 (RtlAddAttributeActionToRXact.c)
 *     RtlReleasePrivilege @ 0x180087830 (RtlReleasePrivilege.c)
 *     RtlDeleteHashTable @ 0x1800881F0 (RtlDeleteHashTable.c)
 *     LdrpGetParentLangId @ 0x1800885D8 (LdrpGetParentLangId.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180088710 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896B8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlDestroyHandleTable @ 0x180089850 (RtlDestroyHandleTable.c)
 *     RtlDefaultNpAcl @ 0x18008B250 (RtlDefaultNpAcl.c)
 *     RtlExpandHashTable @ 0x18008B4E0 (RtlExpandHashTable.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C150 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C544 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateAndSetSD @ 0x18008C800 (RtlCreateAndSetSD.c)
 *     RtlCheckBootStatusIntegrity @ 0x18008CFC0 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeRXact @ 0x18008D180 (RtlInitializeRXact.c)
 *     LdrFlushAlternateResourceModules @ 0x18008D350 (LdrFlushAlternateResourceModules.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB34 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpHeapTrkTrackAdd @ 0x18008ECDC (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackStack @ 0x18008EDAC (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008EF98 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18008F130 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18008F700 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpComputeMergedAcl @ 0x18008FC68 (RtlpComputeMergedAcl.c)
 *     RtlpTpIoDllLoaded @ 0x180090048 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18009053C (RtlpTpIoAlloc.c)
 *     LdrAddDllDirectory @ 0x180090690 (LdrAddDllDirectory.c)
 *     RtlDebugFreeHeap @ 0x180091B60 (RtlDebugFreeHeap.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DF4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     ResCGetIndexedName @ 0x1800957A0 (ResCGetIndexedName.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CF250 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800CF6E0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CF750 (RtlEnableThreadProfiling.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 *     LdrUnregisterDllNotification @ 0x1800D0BF0 (LdrUnregisterDllNotification.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D129C (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D16A8 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D18F0 (LdrpLogNewDllLoadInternal.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D2BCC (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     RtlCreateUserSecurityObject @ 0x1800D48F0 (RtlCreateUserSecurityObject.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D59C0 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9D60 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800D9F80 (LdrRemoveDllDirectory.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA2C0 (RtlpLookupSafeCurDirList.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DA5F8 (RtlpSignalSystemDirsModification.c)
 *     RtlComputeImportTableHash @ 0x1800DB660 (RtlComputeImportTableHash.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC01C (LdrpCnvrtShortToLongFileName.c)
 *     RtlQueryModuleInformation @ 0x1800DCD60 (RtlQueryModuleInformation.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD4C0 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800DDB90 (LdrpResValidateFilePath.c)
 *     RtlIsUntrustedObject @ 0x1800DF7C0 (RtlIsUntrustedObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800DFF70 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E077C (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x1800E1510 (RtlAddResourceAttributeAce.c)
 *     RtlDestroyAtomTable @ 0x1800E2D40 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E2E20 (RtlEmptyAtomTable.c)
 *     RtlGetUILanguageInfo @ 0x1800E5AC0 (RtlGetUILanguageInfo.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6164 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E6A40 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6C60 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800E91E0 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800EC3F0 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800EC510 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800EC620 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800EC680 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800ED0D0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800ED2B0 (RtlpCallSecureMemoryCallbacks.c)
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
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800FFC4C (--$StackPush@I@@YAHIPEAX@Z.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800FFD14 (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryFree @ 0x1800FFE18 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1801000BC (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x180100318 (ResCSegmentFree.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102BB0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     BasepInitializeFindFileHandle @ 0x18010328C (BasepInitializeFindFileHandle.c)
 *     _CreateSecureFileMapping @ 0x180103484 (_CreateSecureFileMapping.c)
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x18010426C (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x180104314 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesEx @ 0x180104948 (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x180104A74 (_ResGetFileAttributesW.c)
 *     ResCGetName @ 0x180105118 (ResCGetName.c)
 *     ResCCultureMapCreateAndPopulate @ 0x1801057C0 (ResCCultureMapCreateAndPopulate.c)
 *     ResCFreeCultureMap @ 0x1801058E8 (ResCFreeCultureMap.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x180105BC4 (--$ReleaseStack@I@@YAXPEAX@Z.c)
 *     ResCDirectoryCreateAndPopulate @ 0x180105C14 (ResCDirectoryCreateAndPopulate.c)
 *     ResCHitsCreateAndPopulate @ 0x180105F14 (ResCHitsCreateAndPopulate.c)
 *     ResCSegmentCreateAndPopulate @ 0x180106000 (ResCSegmentCreateAndPopulate.c)
 * Callees:
 *     RtlpGetReservedBlockSize @ 0x180001058 (RtlpGetReservedBlockSize.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180045F48 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460E4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpCallInterceptRoutine @ 0x180090F54 (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x18009117C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A9DB0 (RtlpInterlockedFlushSList.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlFreeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r15d
  unsigned int v7; // ebp
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
  unsigned int HeapProtection; // eax
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
  char v59[8]; // [rsp+30h] [rbp-78h] BYREF
  signed __int64 v60; // [rsp+38h] [rbp-70h]
  int v61; // [rsp+40h] [rbp-68h]
  __int64 v62; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-50h] BYREF
  int v65; // [rsp+68h] [rbp-40h]
  unsigned __int16 v68; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 1LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return (unsigned int)RtlpHpFreeWithExceptionProtection(a1, a3, a2);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v7 = RtlpFreeHeapInternal(a1, a3, a2, (unsigned int)&v62, (__int64)&v68);
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
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_119:
    v58 = RtlpFreeHeap(a1, v4 | 2, v8, v3);
    v7 = v58;
    if ( v58 )
      goto LABEL_120;
    return v7;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else if ( (a3 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
  }
  else
  {
    v8 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
    if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, a1, v8, 0, 0LL, 0LL);
      v8 = 0LL;
    }
  }
  if ( !v8 )
    goto LABEL_50;
  if ( *(_BYTE *)(v3 - 1) == 5 )
  {
    if ( *(char *)(v8 + 15) >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_25;
      v65 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v8 + 8);
      if ( HIBYTE(v65) == (BYTE2(v65) ^ (unsigned __int8)(BYTE1(v65) ^ v65)) )
        goto LABEL_25;
    }
    else if ( (unsigned __int8)RtlpValidateLFHBlock(a1, v8) )
    {
LABEL_25:
      if ( *(char *)(v8 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v10 = *(_DWORD *)(v8 + 8);
          v61 = v10;
          if ( (v10 & *(_DWORD *)(a1 + 124)) != 0 )
            v61 = *(_DWORD *)(a1 + 136) ^ v10;
          v11 = v61;
        }
        else
        {
          v11 = *(_WORD *)(v8 + 8);
        }
        v9 = v11;
      }
      else if ( *(_WORD *)(v8 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v8 >> 4)) )
      {
        v9 = MEMORY[0x24];
      }
      else
      {
        v9 = *(unsigned __int16 *)(*(_QWORD *)(v8
                                             - ((unsigned __int64)(*(_DWORD *)(v8 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v8 >> 4)) >> 12))
                                 + 36LL);
      }
      if ( *(_BYTE *)(v8 + 15) == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v12 = *(_DWORD *)(v8 + 8);
          v61 = v12;
          if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
            v61 = *(_DWORD *)(a1 + 136) ^ v12;
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
      if ( v14 + v8 < v3 )
        goto LABEL_44;
      if ( (v4 & 0x3C000102) == 0 )
      {
        v15 = *(_BYTE *)(v3 - 1) == 5 ? v3 - 16LL * *(unsigned __int8 *)(v3 - 16 + 14) : 0LL;
        if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v3 - 8), a1, v3, 3, v15) < 0 )
          goto LABEL_50;
      }
      goto LABEL_51;
    }
LABEL_44:
    RtlpLogHeapFailure(3, a1, v8, v3, 0LL, 0LL);
LABEL_50:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v16 = NtCurrentTeb();
    v16->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v7;
  }
LABEL_51:
  if ( *(char *)(v8 + 15) >= 0 )
    goto LABEL_119;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))
    || (v17 = *(signed __int32 **)(v8
                                 - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12))) == 0LL )
  {
    RtlpLogHeapFailure(3, a1, v8, 0, 0LL, 0LL);
    v3 = a3;
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
    v64 = (*((_QWORD *)v17 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL;
    ReservedBlockSize = RtlpGetReservedBlockSize((__int64)v17);
    v47 = *(_DWORD **)(v45 + 24);
    v63 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v17 + 20);
    HeapProtection = RtlpGetHeapProtection(v47, 1);
    ZwProtectVirtualMemory(-1LL, &v64, &v63, HeapProtection, v59);
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
  v4 = a2;
  v3 = a3;
  v7 = 1;
LABEL_120:
  if ( (RtlpHpHeapFeatures & 4) != 0 && a1 != RtlpHpMetadataHeap && (v4 & 0x10000000) == 0 )
    RtlpHpStackTraceRemoveStack(a1, v3);
  return v7;
}
