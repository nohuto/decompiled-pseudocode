/*
 * XREFs of RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x1800055B4
 * Callers:
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 * Callees:
 *     RmpSystemMemoryMetricsQuery @ 0x18000561C (RmpSystemMemoryMetricsQuery.c)
 */

char __fastcall RmpPolicyGetDesiredEmptyOptimizationsForHost(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  char v4; // di
  _BYTE v6[40]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  v2 = RmSvcGlobals;
  v4 = 0;
  RmpSystemMemoryMetricsQuery(v6);
  if ( (v2[90] && v7 > *((_QWORD *)v2 + 44) || v7 > *((_QWORD *)v2 + 36)) && (v2[414] & 0x10) == 0 )
  {
    v4 = 2;
    if ( (*(_BYTE *)(a2 + 912) & 0x20) != 0 )
      return 34;
  }
  return v4;
}
