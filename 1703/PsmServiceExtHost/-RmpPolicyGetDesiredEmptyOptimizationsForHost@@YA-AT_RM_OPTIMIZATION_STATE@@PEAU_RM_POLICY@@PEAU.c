/*
 * XREFs of ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015804
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013F00 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180015758 (-RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REM.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

char __fastcall RmpPolicyGetDesiredEmptyOptimizationsForHost(__int64 a1, __int64 a2)
{
  char v4; // cl
  _BYTE v7[72]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v8; // [rsp+78h] [rbp-90h]
  unsigned __int64 v9; // [rsp+98h] [rbp-70h]
  _BYTE v10[56]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+E8h] [rbp-20h]

  if ( (*(_BYTE *)(a2 + 820) & 0x10) != 0 )
    return 0;
  memset_0(v7, 0, 0x80uLL);
  RmpPolicyGetCurrentUsageLimits(
    *(struct _RM_PARTITION **)(a2 + 48),
    (struct _RM_USAGE_LIMIT_SETTINGS *)a1,
    (struct _RM_REMEDIATION_ACTIONS *)(a1 + 56),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v7,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v10);
  v4 = 0;
  if ( (v11 > v9 && *(_DWORD *)(a1 + 100) || v11 > v8) && (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
    v4 = RmpPolicyComputeDesiredEmptyState(a1, a2, 1LL);
  return *(_BYTE *)(a2 + 1128) & 0x27 | v4;
}
