/*
 * XREFs of RtlFreeHeap @ 0x18002AB90
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800025A0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpAddBinaryInfoEvents @ 0x180002C38 (EtwpAddBinaryInfoEvents.c)
 *     RtlGetAppContainerParent @ 0x1800030B0 (RtlGetAppContainerParent.c)
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180006084 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800062DC (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x1800079FC (RtlpExtendFrontEndUsageArray.c)
 *     CsrFreeCaptureBuffer @ 0x180007BE0 (CsrFreeCaptureBuffer.c)
 *     RtlpFreeDebugInfo @ 0x1800082D8 (RtlpFreeDebugInfo.c)
 *     RtlpFreeUserBlockToHeap @ 0x180009080 (RtlpFreeUserBlockToHeap.c)
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x180009688 (EtwpFreeStreamIndexMap.c)
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18000A8BC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000AB30 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18000ADB4 (RtlpCreateSerializationGroup.c)
 *     TppFreeDirectParams @ 0x18000AFFC (TppFreeDirectParams.c)
 *     RtlpWnfNotificationThread @ 0x18000B470 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18000BB10 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 *     EtwpNotificationThread @ 0x18000C010 (EtwpNotificationThread.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18000C550 (RtlpDecrementWnfSerializationGroup.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSetProviderTraits @ 0x18000E1DC (EtwpSetProviderTraits.c)
 *     EtwUnregisterTraceGuids @ 0x18000E310 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x18000E64C (EvtIntReportEventWorker.c)
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     ResCKeDirectoryOpenMapping @ 0x18000EE38 (ResCKeDirectoryOpenMapping.c)
 *     _ResQueryValueKey @ 0x18000F500 (_ResQueryValueKey.c)
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpResolveForwarder @ 0x18001664C (LdrpResolveForwarder.c)
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800196E8 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001CE50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpAddNeutralsToMergedList @ 0x18001D184 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x18001E368 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001ED84 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180026020 (RtlGetFullPathName_Ustr.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800272A0 (RtlDoesFileExists_UstrEx.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlReleasePath @ 0x180035A90 (RtlReleasePath.c)
 *     RtlpGetCachedPath @ 0x180036C64 (RtlpGetCachedPath.c)
 *     EtwpRegisterProvider @ 0x180038A60 (EtwpRegisterProvider.c)
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x18003B540 (TppPrepareDirectParams.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C3A4 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppWorkpFree @ 0x18003D7D0 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TpAllocWork @ 0x18003DBB0 (TpAllocWork.c)
 *     TppTimerpFree @ 0x18003ED20 (TppTimerpFree.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpAllocatePlaceHolder @ 0x180040198 (LdrpAllocatePlaceHolder.c)
 *     LdrpAllocateModuleEntry @ 0x1800402B4 (LdrpAllocateModuleEntry.c)
 *     LdrpDynamicShimModule @ 0x1800415EC (LdrpDynamicShimModule.c)
 *     SbpDetermineDllContext @ 0x180041658 (SbpDetermineDllContext.c)
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     RtlGetNtProductType @ 0x180042900 (RtlGetNtProductType.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180043500 (LdrUnloadAlternateResourceModuleEx.c)
 *     SbpRetrieveCompatibilityManifest @ 0x180043E78 (SbpRetrieveCompatibilityManifest.c)
 *     LdrpDestroyNode @ 0x18004416C (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x1800441C0 (LdrpMergeNodes.c)
 *     LdrpReleaseTlsEntry @ 0x1800451C8 (LdrpReleaseTlsEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     RtlCreateProcessParametersEx @ 0x1800461E0 (RtlCreateProcessParametersEx.c)
 *     RtlCleanUpTEBLangLists @ 0x1800475E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpComputeMergedAcl @ 0x1800477C8 (RtlpComputeMergedAcl.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180047AF0 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180047C10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x180047C60 (RtlpMuiRegFreeStringPool.c)
 *     LdrpGetParentLangId @ 0x180047C8C (LdrpGetParentLangId.c)
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlpLoadNlsData @ 0x180048DB4 (RtlpLoadNlsData.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180048F5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800491B0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpQueryValueKey @ 0x1800499D4 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180049FE8 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpValidOwnerSubjectContext @ 0x18004A4F8 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18004C62C (RtlpInheritAcl.c)
 *     RtlpCombineAcls @ 0x18004DF20 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18004E35C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18004E598 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 *     RtlpFreeAllAtom @ 0x180051E14 (RtlpFreeAllAtom.c)
 *     RtlpDereferenceAtom @ 0x180051FD8 (RtlpDereferenceAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005203C (RtlAddAtomToAtomTableEx.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18005329C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180054028 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180054C04 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFreeTraverseNodes @ 0x180055450 (RtlpFreeTraverseNodes.c)
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x180055DE4 (LdrpAllocateTlsEntry.c)
 *     LdrpAcquireTlsIndex @ 0x180055F30 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x180056010 (RtlFlsAlloc.c)
 *     RtlCreateActivationContext @ 0x180056830 (RtlCreateActivationContext.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlDosSearchPath_U @ 0x180057930 (RtlDosSearchPath_U.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x180059CC0 (RtlSetSearchPathMode.c)
 *     RtlIdnToUnicode @ 0x18005E8F0 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x18005F18C (RtlpGetNormalization.c)
 *     RtlpCallVectoredHandlers @ 0x18005F7F4 (RtlpCallVectoredHandlers.c)
 *     LdrpFreeLoadContext @ 0x1800620C4 (LdrpFreeLoadContext.c)
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180063784 (TppPoolUpdateTrimmedWorker.c)
 *     RtlFreeActivationContextStack @ 0x180063A40 (RtlFreeActivationContextStack.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180063C28 (RtlpFreeActivationContextStackFrame.c)
 *     RtlExpandHashTable @ 0x1800653C0 (RtlExpandHashTable.c)
 *     TpTrimPools @ 0x180065B80 (TpTrimPools.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180066EA0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800699E4 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpIsReparsePoint @ 0x180069B2C (LdrpIsReparsePoint.c)
 *     EtwRegisterTraceGuidsW @ 0x18006A040 (EtwRegisterTraceGuidsW.c)
 *     LdrpFreeTls @ 0x18006B5A0 (LdrpFreeTls.c)
 *     LdrpCleanupThreadTlsData @ 0x18006B65C (LdrpCleanupThreadTlsData.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     RtlFreeSid @ 0x18006DD20 (RtlFreeSid.c)
 *     RtlAcquirePrivilege @ 0x18006E600 (RtlAcquirePrivilege.c)
 *     RtlGetCurrentDirectory_U @ 0x18006FA50 (RtlGetCurrentDirectory_U.c)
 *     RtlSetCurrentDirectory_U @ 0x18006FB70 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18006FCD0 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x18006FDF8 (RtlpCreateNewDirectoryReference.c)
 *     RtlDeleteFunctionTable @ 0x180070600 (RtlDeleteFunctionTable.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     RtlDeleteSecurityObject @ 0x1800709D0 (RtlDeleteSecurityObject.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180070AD0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x180071620 (RtlpNtQueryValueKey.c)
 *     TppFreeDirectParamsCache @ 0x1800727C0 (TppFreeDirectParamsCache.c)
 *     TppIopFree @ 0x180072A50 (TppIopFree.c)
 *     TppFreeThreadData @ 0x180072AAC (TppFreeThreadData.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180073784 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpNtEnumerateSubKey @ 0x1800737F0 (RtlpNtEnumerateSubKey.c)
 *     TpAllocCleanupGroup @ 0x1800738F0 (TpAllocCleanupGroup.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800739D8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     TppPoolpFree @ 0x180074128 (TppPoolpFree.c)
 *     TppSimplepFree @ 0x180074D20 (TppSimplepFree.c)
 *     RtlDestroyProcessParameters @ 0x180074DB0 (RtlDestroyProcessParameters.c)
 *     RtlContractHashTable @ 0x180074EC0 (RtlContractHashTable.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpFreeActivationContext @ 0x18007507C (RtlpFreeActivationContext.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x1800750FC (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlLockModuleSection @ 0x1800756D0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 *     RtlpRemoveVectoredHandler @ 0x180075D10 (RtlpRemoveVectoredHandler.c)
 *     TpReleaseCleanupGroup @ 0x180075E00 (TpReleaseCleanupGroup.c)
 *     RtlAddAttributeActionToRXact @ 0x180075FE0 (RtlAddAttributeActionToRXact.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     RtlReleasePrivilege @ 0x1800774D0 (RtlReleasePrivilege.c)
 *     RtlDeleteHashTable @ 0x180078140 (RtlDeleteHashTable.c)
 *     RtlDestroyHandleTable @ 0x180079250 (RtlDestroyHandleTable.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     TppJobpFree @ 0x18007A6D0 (TppJobpFree.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x18007AC30 (TppAlpcpFree.c)
 *     RtlpInitializeWnf @ 0x18007AED0 (RtlpInitializeWnf.c)
 *     TpAllocIoCompletion @ 0x18007B070 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007B264 (TppAllocAlpcCompletion.c)
 *     RtlpTpWaitRundown @ 0x18007B920 (RtlpTpWaitRundown.c)
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 *     RtlRegisterWait @ 0x18007BDC0 (RtlRegisterWait.c)
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x18007C830 (RtlCreateTimer.c)
 *     RtlpTpTimerRundown @ 0x18007CC1C (RtlpTpTimerRundown.c)
 *     TpAllocWait @ 0x18007CFD0 (TpAllocWait.c)
 *     TppPoolUpdateNodeRelation @ 0x18007D168 (TppPoolUpdateNodeRelation.c)
 *     TppFreeWait @ 0x18007D390 (TppFreeWait.c)
 *     RtlpTpTimerQueueRundown @ 0x18007D82C (RtlpTpTimerQueueRundown.c)
 *     TpSimpleTryPost @ 0x18007D880 (TpSimpleTryPost.c)
 *     RtlAbortRXact @ 0x18007E2F0 (RtlAbortRXact.c)
 *     RtlpTpIoAlloc @ 0x18007E7CC (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x18007ED38 (RtlpTpIoDllLoaded.c)
 *     RtlInitializeRXact @ 0x18007F4C0 (RtlInitializeRXact.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18007F690 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18007F924 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateAndSetSD @ 0x180080030 (RtlCreateAndSetSD.c)
 *     LdrFlushAlternateResourceModules @ 0x1800807B0 (LdrFlushAlternateResourceModules.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180080CB0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800818A4 (RtlpLoadInstallLanguageFallback.c)
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800BAB28 (CsrpLocalSetupForSecureProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800BADC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800BB150 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800BB3F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800BB5E0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800BB650 (RtlEnableThreadProfiling.c)
 *     RtlpCheckDeviceName @ 0x1800BBDBC (RtlpCheckDeviceName.c)
 *     LdrUnregisterDllNotification @ 0x1800BCB10 (LdrUnregisterDllNotification.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800BD098 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEventEx @ 0x1800BD3DC (LdrpLogEtwEventEx.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800BD4E4 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800BD728 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800C0DB0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     RtlCreateUserSecurityObject @ 0x1800C2F60 (RtlCreateUserSecurityObject.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800C44D0 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 *     LdrRemoveDllDirectory @ 0x1800C90F0 (LdrRemoveDllDirectory.c)
 *     RtlpLookupSafeCurDirList @ 0x1800C941C (RtlpLookupSafeCurDirList.c)
 *     RtlpSignalSystemDirsModification @ 0x1800C9754 (RtlpSignalSystemDirsModification.c)
 *     RtlComputeImportTableHash @ 0x1800CA930 (RtlComputeImportTableHash.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 *     RtlQueryModuleInformation @ 0x1800CC170 (RtlQueryModuleInformation.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800CCFA8 (LdrpResValidateFilePath.c)
 *     RtlIsUntrustedObject @ 0x1800CE890 (RtlIsUntrustedObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800CF858 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x1800D05F0 (RtlAddResourceAttributeAce.c)
 *     RtlDestroyAtomTable @ 0x1800D1B90 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800D1C70 (RtlEmptyAtomTable.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800D44C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800D4970 (RtlGetUILanguageInfo.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800D5014 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800D59A0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800D5BC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800D82F0 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800DDBA0 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800DDCC0 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800DDDD0 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800DDE30 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800DE800 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800DE9E0 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800E11A4 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800E1304 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800E1D60 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800E1E38 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800E1F24 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800E206C (RtlpHeapTrkTrackStack.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800E26B4 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800E2BD8 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlSetProtectedPolicy @ 0x1800E5290 (RtlSetProtectedPolicy.c)
 *     RtlpGetWindowsPolicy @ 0x1800E6350 (RtlpGetWindowsPolicy.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800E6504 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800E66CC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E6AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800E72D4 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E7BB4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800E7DE0 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800E999C (_RtlpMuiRegValidateInstalled.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     EtwpQueryRegString @ 0x1800F5048 (EtwpQueryRegString.c)
 *     EtwpShutdownCompression @ 0x1800F5244 (EtwpShutdownCompression.c)
 *     ResCCloseRuntimeView @ 0x1800F6FCC (ResCCloseRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7CE0 (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800F7EC0 (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryFree @ 0x1800F7FCC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F83AC (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x1800F8608 (ResCSegmentFree.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F8844 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     BasepInitializeFindFileHandle @ 0x1800F8F20 (BasepInitializeFindFileHandle.c)
 *     _CreateSecureFileMapping @ 0x1800F91D8 (_CreateSecureFileMapping.c)
 *     _ResCLoadFixedSize @ 0x1800F965C (_ResCLoadFixedSize.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x1800F9FBC (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x1800FA7B0 (_ResGetFileAttributesW.c)
 *     ResCGetIndexedName @ 0x1800FAE54 (ResCGetIndexedName.c)
 *     ResCGetName @ 0x1800FB298 (ResCGetName.c)
 *     ResCCultureMapCreateAndPopulate @ 0x1800FB940 (ResCCultureMapCreateAndPopulate.c)
 *     ResCFreeCultureMap @ 0x1800FBA68 (ResCFreeCultureMap.c)
 *     ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FBD44 (--$InitStack@H@@YAHPEAPEAXI@Z.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x1800FBDDC (--$ReleaseStack@I@@YAXPEAX@Z.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800FBE2C (--$StackPush@I@@YAHIPEAX@Z.c)
 *     ResCDirectoryCreateAndPopulate @ 0x1800FBEF4 (ResCDirectoryCreateAndPopulate.c)
 *     ResCHitsCreateAndPopulate @ 0x1800FC2AC (ResCHitsCreateAndPopulate.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FC3C0 (ResCSegmentCreateAndPopulate.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800F0B70 (RtlpValidateLFHBlock.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  LOGICAL v6; // esi
  unsigned __int64 v7; // rbp
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // eax
  unsigned __int16 v13; // ax
  int v14; // eax
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  char *v17; // rcx
  struct _TEB *v18; // rbx
  int v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+38h] [rbp-20h]

  if ( !BaseAddress )
    return 1;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return RtlpHpVirtFreeHeap(HeapHandle, BaseAddress, Flags);
    v6 = 0;
    v7 = 0LL;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return (unsigned __int8)RtlpFreeHeap(HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v7 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    }
    else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    }
    else
    {
      v7 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v7, 0, 0LL, 0LL);
        v7 = 0LL;
      }
    }
    if ( v7 )
    {
      if ( *((char *)BaseAddress - 1) != 5 )
        goto LABEL_13;
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v9 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v7 + 8);
          if ( HIBYTE(v9) != (BYTE2(v9) ^ (unsigned __int8)(BYTE1(v9) ^ v9)) )
            goto LABEL_47;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v7) )
      {
LABEL_47:
        RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v7, (_DWORD)BaseAddress, 0LL, 0LL);
        goto LABEL_53;
      }
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v12 = *(_DWORD *)(v7 + 8);
          LOWORD(v19) = v12;
          if ( (v12 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v19 = *((_DWORD *)HeapHandle + 34) ^ v12;
          v13 = v19;
        }
        else
        {
          v13 = *(_WORD *)(v7 + 8);
        }
        v11 = v13;
      }
      else
      {
        if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)HeapHandle ^ (v7 >> 4)) )
          v10 = 0LL;
        else
          v10 = *(_QWORD *)(v7
                          - ((unsigned __int64)(*(_DWORD *)(v7 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ (unsigned int)(v7 >> 4)) >> 12));
        v11 = *(unsigned __int16 *)(v10 + 36);
      }
      if ( *(_BYTE *)(v7 + 15) == 4 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v14 = *(_DWORD *)(v7 + 8);
          LOWORD(v20) = v14;
          if ( (v14 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v20 = *((_DWORD *)HeapHandle + 34) ^ v14;
          v15 = v20;
        }
        else
        {
          v15 = *(_WORD *)(v7 + 8);
        }
        v16 = v11 + *(_QWORD *)(v7 - 16) - v15;
      }
      else
      {
        v16 = 16LL * v11;
      }
      if ( v16 + v7 < (unsigned __int64)BaseAddress )
        goto LABEL_47;
      if ( (Flags & 0x3C000102) != 0
        || (*((char *)BaseAddress - 1) != 5
          ? (v17 = 0LL)
          : (v17 = (char *)BaseAddress - 16 * (unsigned __int8)*((char *)BaseAddress - 2)),
            (int)RtlpCallInterceptRoutine(
                   *((_DWORD *)BaseAddress - 2),
                   (_DWORD)HeapHandle,
                   (_DWORD)BaseAddress,
                   3,
                   (__int64)v17) >= 0) )
      {
LABEL_13:
        if ( *(char *)(v7 + 15) < 0 )
        {
          RtlpLowFragHeapFree(HeapHandle, v7);
          return 1;
        }
        return (unsigned __int8)RtlpFreeHeap(HeapHandle);
      }
    }
LABEL_53:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v18 = NtCurrentTeb();
    v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v6;
  }
  return RtlpHpFreeWithExceptionProtection(HeapHandle);
}
