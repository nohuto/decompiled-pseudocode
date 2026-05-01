/*
 * XREFs of RmpPolicyComputeDesiredEmptyState @ 0x180018124
 * Callers:
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006F74 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     RmpPolicyComputeDesiredState @ 0x1800176C0 (RmpPolicyComputeDesiredState.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018050 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18001FA10 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180032950 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180032AA8 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180032D6C (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall RmpPolicyComputeDesiredEmptyState(__int64 a1, __int64 a2, int a3)
{
  char v3; // r9
  int v4; // eax
  char v5; // dl
  unsigned int v6; // ecx
  int v7; // ecx

  v3 = *(_BYTE *)(a2 + 820);
  v4 = *(_DWORD *)(a2 + 1112);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 1412);
  if ( (v3 & 0x10) == 0 && (v4 & 0x200) == 0 )
  {
    v5 = 2 * ((v6 & 4) != 0);
    if ( (v4 & 0x100) == 0 )
      v5 ^= (v5 ^ (4 * (v6 >> 3))) & 4;
    if ( a3 > 0 )
    {
      v7 = (v6 >> 4) & 1;
      if ( !v7 )
        v5 |= 2u;
      if ( a3 > 1 && !v7 )
        v5 |= 0x20u;
    }
  }
  return v3 & 0x27 | v5;
}
