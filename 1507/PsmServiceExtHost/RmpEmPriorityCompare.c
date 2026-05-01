/*
 * XREFs of RmpEmPriorityCompare @ 0x180007394
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpActivityHostQueryPriority @ 0x18000A5A8 (RmpActivityHostQueryPriority.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x18000CF94 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RES.c)
 *     RmpPolicyCompareActivityHostsByPriorityAndCommit @ 0x18003C25C (RmpPolicyCompareActivityHostsByPriorityAndCommit.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z @ 0x18003CB10 (-RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpEmPriorityCompare(int a1, int a2)
{
  if ( a1 > a2 )
    return 0xFFFFFFFFLL;
  else
    return a1 != a2;
}
