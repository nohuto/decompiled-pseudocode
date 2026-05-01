/*
 * XREFs of ??1?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x1800050F8
 * Callers:
 *     _TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper_::_1_::dtor$2 @ 0x180027CE4 (_TileDataLayerItemWrappers--TDLTileInfoHelper--TDLTileInfoHelper_--_1_--dtor$2.c)
 * Callees:
 *     ?RemoveAll@?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x180005060 (-RemoveAll@-$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ.c)
 */

void __fastcall CStringHashTable<int,CStringHashPolicy,CStringCompare>::~CStringHashTable<int,CStringHashPolicy,CStringCompare>(
        __int64 a1)
{
  __int64 i; // rcx
  __int64 v3; // rax

  CStringHashTable<int,CStringHashPolicy,CStringCompare>::RemoveAll(a1);
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v3 + 24 * i) == 1 )
      {
        *(_DWORD *)(v3 + 24 * i) = 2;
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
