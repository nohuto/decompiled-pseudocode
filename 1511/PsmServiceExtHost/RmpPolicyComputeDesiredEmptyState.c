/*
 * XREFs of RmpPolicyComputeDesiredEmptyState @ 0x180006760
 * Callers:
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DIGEST@@@Z @ 0x180006694 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DI.c)
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006DA4 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     RmpPolicyComputeDesiredState @ 0x180009058 (RmpPolicyComputeDesiredState.c)
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002AA30 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180041D80 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180042258 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall RmpPolicyComputeDesiredEmptyState(__int64 a1, __int64 a2, int a3)
{
  char v3; // r9
  int v4; // eax
  char v5; // dl
  unsigned int v6; // ecx
  int v8; // ecx

  v3 = *(_BYTE *)(a2 + 780);
  v4 = *(_DWORD *)(a2 + 936);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 1368);
  if ( (v3 & 0x10) == 0 && (v4 & 0x200) == 0 )
  {
    v5 = 2 * ((v6 & 4) != 0);
    if ( (v4 & 0x100) == 0 )
      v5 ^= (v5 ^ (4 * (v6 >> 3))) & 4;
    if ( a3 > 0 )
    {
      v8 = (v6 >> 4) & 1;
      if ( !v8 )
        v5 |= 2u;
      if ( a3 > 1 && !v8 )
        v5 |= 0x20u;
    }
  }
  return v3 & 0x27 | v5;
}
