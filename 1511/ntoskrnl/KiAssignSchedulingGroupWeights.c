/*
 * XREFs of KiAssignSchedulingGroupWeights @ 0x1400C3F18
 * Callers:
 *     KeSetSchedulingGroupWeights @ 0x1400C3D64 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400C3E74 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x1400C46B0 (KeInsertSchedulingGroup.c)
 *     KeRemoveSchedulingGroup @ 0x1400C4CFC (KeRemoveSchedulingGroup.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1401404F0 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     KiUpdateCpuTargetByWeight @ 0x1400C4518 (KiUpdateCpuTargetByWeight.c)
 */

__int64 __fastcall KiAssignSchedulingGroupWeights(int a1, char a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a1 )
  {
    if ( a3 )
      v6 = *(_DWORD *)(a3 + 12);
    else
      v6 = KiGroupSchedulingMinimumRate;
  }
  else if ( a3 )
  {
    if ( !*(_DWORD *)(a3 + 20) )
      return result;
    v6 = *(_DWORD *)(a3 + 16);
  }
  else
  {
    if ( !KiGroupSchedulingTotalWeight )
      return result;
    v6 = KiGroupSchedulingMinimumWeight;
  }
  if ( a3 )
  {
    v7 = (__int64 *)(a3 + 64);
    v8 = *(__int64 **)(a3 + 64);
  }
  else
  {
    v8 = (__int64 *)KiSchedulingGroupList;
    v7 = &KiSchedulingGroupList;
  }
  do
  {
    v9 = v8 - 5;
    result = *((_DWORD *)v8 - 9) & 1;
    if ( (_DWORD)result == a1 )
    {
      v10 = (*(unsigned __int16 *)v9 << 7) % v6;
      result = (*(unsigned __int16 *)v9 << 7) / v6;
      *((_DWORD *)v9 + 2) = result;
      if ( !a1 )
      {
        LOBYTE(v10) = a2;
        result = KiUpdateCpuTargetByWeight(v9, v10);
      }
    }
    v8 = (__int64 *)*v8;
  }
  while ( v8 != v7 );
  return result;
}
