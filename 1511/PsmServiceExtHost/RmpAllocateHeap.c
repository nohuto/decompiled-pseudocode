/*
 * XREFs of RmpAllocateHeap @ 0x180007C10
 * Callers:
 *     RmpWnfPublishMessageToClientStateName @ 0x1800044C0 (RmpWnfPublishMessageToClientStateName.c)
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180005FD4 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006374 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     RmpActivityHostQueryProcessListForMetrics @ 0x180006880 (RmpActivityHostQueryProcessListForMetrics.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x1800078F4 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180007B1C (RmpPolicyScratchResizeIntelligently.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007E60 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpObjectTableAddObjectWithLock @ 0x18000822C (RmpObjectTableAddObjectWithLock.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800084F4 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008568 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x18000F340 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180021324 (-RmpLookupDefAppsAccount@@YAJXZ.c)
 *     RmpActivityHostInitializeModule @ 0x180021654 (RmpActivityHostInitializeModule.c)
 *     RmpObjectTableInitialize @ 0x1800219B8 (RmpObjectTableInitialize.c)
 *     ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18002369C (-ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z.c)
 *     RmpActivatorRegister @ 0x180024CB0 (RmpActivatorRegister.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002588C (RmpWnfAllocateAndInitializePendingCallbackList.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RmpAllocateHeap(SIZE_T Size)
{
  PVOID result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( result )
  {
    if ( RmSvcGlobals )
      _InterlockedIncrement64((volatile signed __int64 *)RmSvcGlobals + 263);
  }
  return result;
}
