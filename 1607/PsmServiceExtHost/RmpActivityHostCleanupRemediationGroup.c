/*
 * XREFs of RmpActivityHostCleanupRemediationGroup @ 0x18002ED34
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033800 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_S.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 * Callees:
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18002F518 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

__int64 __fastcall RmpActivityHostCleanupRemediationGroup(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 != a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      result = RmpActivityHostRemoveFromRemediationGroup(v2 - 132);
      v2 = v3;
    }
    while ( v3 != a1 );
  }
  return result;
}
