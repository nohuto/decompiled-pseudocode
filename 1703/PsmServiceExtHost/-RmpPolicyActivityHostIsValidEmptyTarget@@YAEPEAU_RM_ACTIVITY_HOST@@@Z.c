/*
 * XREFs of ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033074
 * Callers:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180005580 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800208E0 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800361BC (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180036250 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x1800362F0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180036440 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180036734 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001E2C (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E76C (-RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int8 v1; // bl
  __int64 v3; // rsi
  BOOL IsJobFrozen; // eax
  int IsRunnable; // eax
  char v6; // dl
  char v7; // al

  v1 = *((_BYTE *)a1 + 820);
  v3 = *((_QWORD *)a1 + 5);
  IsJobFrozen = RmpActivityHostIsJobFrozen(a1);
  IsRunnable = RmpActivityHostIsRunnable(a1, IsJobFrozen);
  v6 = 0;
  if ( !IsRunnable )
  {
    v7 = RmpPolicyComputeDesiredEmptyState(v3 + 400, (__int64)a1, 2);
    return (v1 & (unsigned __int8)v7 & 0x27) != v7;
  }
  return v6;
}
