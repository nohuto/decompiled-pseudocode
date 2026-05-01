/*
 * XREFs of RmpAllocateHeap @ 0x180009DF8
 * Callers:
 *     RmpWnfPublishMessageToClientStateName @ 0x180001E90 (RmpWnfPublishMessageToClientStateName.c)
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180003B74 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006AE0 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     RmpActivityHostGetPsmProcessList @ 0x1800072C0 (RmpActivityHostGetPsmProcessList.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800087C0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008AFC (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008B70 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x180009B58 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180009D00 (RmpPolicyScratchResizeIntelligently.c)
 *     RmpActivityHostQueryMemUtilMetrics @ 0x18000A188 (RmpActivityHostQueryMemUtilMetrics.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x180011100 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180019E60 (-RmpLookupDefAppsAccount@@YAJXZ.c)
 *     RmpObjectTableInitialize @ 0x18001A190 (RmpObjectTableInitialize.c)
 *     RmpActivityHostInitializeModule @ 0x18001A2B0 (RmpActivityHostInitializeModule.c)
 *     RmpActivatorRegister @ 0x180020510 (RmpActivatorRegister.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002122C (RmpWnfAllocateAndInitializePendingCallbackList.c)
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
      _InterlockedIncrement64((volatile signed __int64 *)RmSvcGlobals + 261);
  }
  return result;
}
