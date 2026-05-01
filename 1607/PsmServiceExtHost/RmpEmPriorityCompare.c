/*
 * XREFs of RmpEmPriorityCompare @ 0x180014E6C
 * Callers:
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011BDC (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180015058 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUF.c)
 *     RmpResourceSetInfoIsValid @ 0x180015C08 (RmpResourceSetInfoIsValid.c)
 *     RmpActivityHostQueryEffectivePriority @ 0x18002F2D0 (RmpActivityHostQueryEffectivePriority.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033424 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180033BA4 (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 *     ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_POLICY@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x180033DE4 (-RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_POLICY@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOK.c)
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
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
