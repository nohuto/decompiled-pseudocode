/*
 * XREFs of RmpFreeHeap @ 0x18000A4A4
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x180003A7C (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180003B74 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006644 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     RmpActivityHostGetPsmProcessList @ 0x1800072C0 (RmpActivityHostGetPsmProcessList.c)
 *     PsmRetrieveHostMemoryLimit @ 0x1800090F0 (PsmRetrieveHostMemoryLimit.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x180009B58 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180009D00 (RmpPolicyScratchResizeIntelligently.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E38 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpActivityHostQueryMemUtilMetrics @ 0x18000A188 (RmpActivityHostQueryMemUtilMetrics.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 *     ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18000B210 (-RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x180011100 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800195E0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180019E60 (-RmpLookupDefAppsAccount@@YAJXZ.c)
 *     RmpActivatorRegister @ 0x180020510 (RmpActivatorRegister.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002122C (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x1800337EC (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 *     RmpFreeHeapForHashTable @ 0x180039AC0 (RmpFreeHeapForHashTable.c)
 *     ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B470 (-RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpActivatorUnregister @ 0x18003B5B8 (RmpActivatorUnregister.c)
 *     RmpActivityHostAbortInitialization @ 0x18003B6E4 (RmpActivityHostAbortInitialization.c)
 *     RmpActivityHostUninitializeModule @ 0x18003C060 (RmpActivityHostUninitializeModule.c)
 *     RmpObjectTableDestroy @ 0x180041200 (RmpObjectTableDestroy.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall RmpFreeHeap(PVOID P)
{
  LPVOID result; // rax

  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  result = RmSvcGlobals;
  if ( RmSvcGlobals )
    _InterlockedDecrement64((volatile signed __int64 *)RmSvcGlobals + 261);
  return result;
}
