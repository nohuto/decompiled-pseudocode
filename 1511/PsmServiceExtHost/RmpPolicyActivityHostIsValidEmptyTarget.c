/*
 * XREFs of RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x18001EFB0 (RmpPolicyFilterActivityHostWithFlags.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002AA30 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180041C40 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180041CE0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180041D80 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180042258 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180006744 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpActivityHostGetStateDigest @ 0x18000AB60 (RmpActivityHostGetStateDigest.c)
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(__int64 a1)
{
  unsigned __int8 v1; // bl
  LPVOID v3; // rsi
  char StateDigest; // al
  BOOL IsRunnable; // eax
  char v6; // dl
  char v7; // al

  v1 = *(_BYTE *)(a1 + 780);
  v3 = RmSvcGlobals;
  StateDigest = RmpActivityHostGetStateDigest(a1);
  IsRunnable = RmpActivityHostStateDigestIsRunnable(StateDigest);
  v6 = 0;
  if ( !IsRunnable )
  {
    v7 = RmpPolicyComputeDesiredEmptyState((__int64)v3 + 208, a1, 2);
    return (v1 & (unsigned __int8)v7 & 0x27) != v7;
  }
  return v6;
}
