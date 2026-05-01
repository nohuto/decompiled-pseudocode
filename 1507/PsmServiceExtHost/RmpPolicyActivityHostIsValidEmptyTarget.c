/*
 * XREFs of RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180006210 (RmpPolicyFilterActivityHostWithFlags.c)
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18003C9C0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x18003CBCC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003CDF0 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003CE40 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180005FB0 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(__int64 a1)
{
  unsigned int StateDigest; // eax
  unsigned __int8 v3; // cl

  if ( (*(_BYTE *)(a1 + 772) & 0x10) != 0 )
    return 0;
  StateDigest = RmpActivityHostGetStateDigest();
  if ( (unsigned int)RmpActivityHostStateDigestIsRunnable(StateDigest) )
    return 0;
  v3 = *(_BYTE *)(a1 + 772);
  return (v3 & 0x27) == 0 || ((unsigned __int8)~(v3 >> 5) & ((v3 & 7) != 0)) != 0;
}
