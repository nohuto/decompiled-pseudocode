/*
 * XREFs of RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006DA4
 * Callers:
 *     RmpPolicyComputeDesiredState @ 0x180009058 (RmpPolicyComputeDesiredState.c)
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x180006F48 (RmpPolicyGetCurrentUsageLimits.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

char __fastcall RmpPolicyGetDesiredEmptyOptimizationsForHost(__int64 a1, __int64 a2)
{
  char v4; // cl
  _BYTE v7[40]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-90h]
  _BYTE v9[56]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-50h]
  unsigned __int64 v11; // [rsp+A8h] [rbp-30h]

  if ( (*(_BYTE *)(a2 + 780) & 0x10) != 0 )
    return 0;
  memset_0(v9, 0, 0x78uLL);
  RmpPolicyGetCurrentUsageLimits(a1, a1 + 56, v9, v7);
  v4 = 0;
  if ( (v8 > v11 && *(_DWORD *)(a1 + 92) || v8 > v10) && (*(_BYTE *)(a1 + 1368) & 0x10) == 0 )
    v4 = RmpPolicyComputeDesiredEmptyState(a1, a2, 1);
  return *(_BYTE *)(a2 + 944) & 0x27 | v4;
}
