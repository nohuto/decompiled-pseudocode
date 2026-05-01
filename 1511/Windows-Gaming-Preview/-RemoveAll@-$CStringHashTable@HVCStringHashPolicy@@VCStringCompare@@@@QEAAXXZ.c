/*
 * XREFs of ?RemoveAll@?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x18001CDA0
 * Callers:
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180011EBC (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x18002376C (-ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStringHashTable<int,CStringHashPolicy,CStringCompare>::RemoveAll(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rax
  __int64 j; // rcx
  __int64 v5; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v3 + 24 * i) == 1 )
        CoTaskMemFree(*(LPVOID *)(v3 + 24 * i + 8));
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 4); j = (unsigned int)(j + 1) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v5 + 24 * j) == 1 )
      {
        *(_DWORD *)(v5 + 24 * j) = 2;
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
