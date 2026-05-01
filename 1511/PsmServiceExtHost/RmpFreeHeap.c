/*
 * XREFs of RmpFreeHeap @ 0x18001BBC0
 * Callers:
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180005FD4 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006374 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     RmpActivityHostQueryProcessListForMetrics @ 0x180006880 (RmpActivityHostQueryProcessListForMetrics.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007570 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x1800078F4 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180007B1C (RmpPolicyScratchResizeIntelligently.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007E60 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpObjectTableAddObjectWithLock @ 0x18000822C (RmpObjectTableAddObjectWithLock.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E6E0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E860 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x18000F340 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180016420 (-RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180018AF0 (PsmRetrieveHostMemoryLimit.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18001DD10 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001E360 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x180020AB0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180021324 (-RmpLookupDefAppsAccount@@YAJXZ.c)
 *     RmpActivityHostInitializeModule @ 0x180021654 (RmpActivityHostInitializeModule.c)
 *     RmpObjectTableInitialize @ 0x1800219B8 (RmpObjectTableInitialize.c)
 *     ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18002369C (-ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z.c)
 *     RmpActivatorRegister @ 0x180024CB0 (RmpActivatorRegister.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002588C (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18003AA10 (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18003B0F8 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     RmpUninitializeGlobalModules @ 0x18003EC48 (RmpUninitializeGlobalModules.c)
 *     ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180040840 (-RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 *     RmpActivityHostAbortInitialization @ 0x180040ABC (RmpActivityHostAbortInitialization.c)
 *     RmpActivityHostUninitializeModule @ 0x1800413E4 (RmpActivityHostUninitializeModule.c)
 *     RmpObjectTableDestroy @ 0x180045E30 (RmpObjectTableDestroy.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall RmpFreeHeap(PVOID P)
{
  LPVOID result; // rax

  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  result = RmSvcGlobals;
  if ( RmSvcGlobals )
    _InterlockedDecrement64((volatile signed __int64 *)RmSvcGlobals + 263);
  return result;
}
