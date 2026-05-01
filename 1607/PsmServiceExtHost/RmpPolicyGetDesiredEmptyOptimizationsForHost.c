/*
 * XREFs of RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006F74
 * Callers:
 *     RmpPolicyComputeDesiredState @ 0x1800176C0 (RmpPolicyComputeDesiredState.c)
 * Callees:
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

char __fastcall RmpPolicyGetDesiredEmptyOptimizationsForHost(__int64 a1, __int64 a2)
{
  char v4; // cl
  _BYTE v7[72]; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v9; // [rsp+88h] [rbp-80h]
  _BYTE v10[48]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+E0h] [rbp-28h]

  if ( (*(_BYTE *)(a2 + 820) & 0x10) != 0 )
    return 0;
  memset_0(v7, 0, 0x88uLL);
  RmpPolicyGetCurrentUsageLimits(a1, a1 + 64, v7, v10);
  v4 = 0;
  if ( (v11 > v9 && *(_DWORD *)(a1 + 108) || v11 > v8) && (*(_BYTE *)(a1 + 1412) & 0x10) == 0 )
    v4 = RmpPolicyComputeDesiredEmptyState(a1, a2, 1LL);
  return *(_BYTE *)(a2 + 1120) & 0x27 | v4;
}
