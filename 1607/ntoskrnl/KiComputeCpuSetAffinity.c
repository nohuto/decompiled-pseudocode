/*
 * XREFs of KiComputeCpuSetAffinity @ 0x1400F004C
 * Callers:
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  _QWORD *v3; // r8
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r9
  __int64 result; // rax
  int v9; // r10d
  unsigned __int64 v10; // r8

  v1 = *(_QWORD *)(a1 + 544);
  v2 = *(unsigned __int16 *)(a1 + 584);
  v3 = (_QWORD *)(v1 + 1936);
  v4 = (_QWORD *)(v1 + 1944);
  if ( (*(_DWORD *)(v1 + 1740) & 0x200) != 0 )
  {
    v3 = (_QWORD *)*v3;
    v4 = (_QWORD *)*v4;
  }
  v5 = KiSystemAllowedCpuSets[v2] | v3[v2];
  if ( !v5 )
    return 0LL;
  v6 = a1 + 1976;
  if ( (*(_DWORD *)(a1 + 1728) & 0x20000) != 0 )
    v6 = *(_QWORD *)(a1 + 1976);
  v7 = *(_QWORD *)(v6 + 8 * v2);
  if ( !v7 )
  {
    v7 = v4[v2];
    if ( !v7 )
    {
      if ( !KiRestrictedSystemCpuSetsActive )
        return 0LL;
      v7 = KiSystemAllowedCpuSets[v2];
    }
  }
  if ( (v7 & v5) == 0 )
    v7 = v5;
  if ( (v7 & KiNonParkedCpuSets[v2]) != 0 )
    v7 &= KiNonParkedCpuSets[v2];
  result = 0LL;
  if ( v7 )
  {
    v9 = (_DWORD)v2 << 6;
    do
    {
      _BitScanForward64(&v10, v7);
      result |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)(v9 + v10));
      v7 &= ~(1LL << v10);
    }
    while ( v7 );
  }
  return result;
}
