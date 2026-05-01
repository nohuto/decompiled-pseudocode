/*
 * XREFs of RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180002E80 (RmpPolicyFilterActivityHostWithFlags.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18001FA10 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180032814 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x1800328B0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180032950 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180032AA8 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180032D6C (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostIsRunnable @ 0x180004940 (RmpActivityHostIsRunnable.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpActivityHostIsJobFrozen @ 0x18002F25C (RmpActivityHostIsJobFrozen.c)
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 v3; // rsi
  int IsJobFrozen; // eax
  int IsRunnable; // eax
  char v6; // dl
  char v7; // al

  v1 = *(_BYTE *)(a1 + 820);
  v3 = *(_QWORD *)(a1 + 40);
  IsJobFrozen = RmpActivityHostIsJobFrozen();
  IsRunnable = RmpActivityHostIsRunnable(a1, IsJobFrozen);
  v6 = 0;
  if ( !IsRunnable )
  {
    v7 = RmpPolicyComputeDesiredEmptyState(v3 + 424, a1, 2);
    return (v1 & (unsigned __int8)v7 & 0x27) != v7;
  }
  return v6;
}
