/*
 * XREFs of ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@UEAA?AW4Enum@Priority@2@W43PoolType@2@@Z @ 0x1800110A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(__int64 a1, int a2)
{
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *i; // rax
  __int64 v6; // rcx
  int v7; // r8d

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 168);
  if ( a2 == 1 )
  {
    v4 = (_QWORD *)(v3 + 160);
    for ( i = *(_QWORD **)(v3 + 160); i != v4; i = (_QWORD *)*i )
    {
      v6 = i[2];
      if ( (*(_BYTE *)(v6 + 1434) & 8) == 0 )
      {
        v7 = *(_DWORD *)(v6 + 1408);
        if ( v7 != 11 && v7 != 55 )
          continue;
      }
      return *(unsigned int *)(a1 + 72);
    }
  }
  return 0LL;
}
