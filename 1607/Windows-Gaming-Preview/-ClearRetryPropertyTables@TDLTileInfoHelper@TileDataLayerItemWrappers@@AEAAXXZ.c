/*
 * XREFs of ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x180023774
 * Callers:
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180023064 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ??1HashBucket@?$CSimpleHashTable@KV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V?$CDefaultHashPolicy@K@@V?$CDefaultKeyCompare@K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAA@XZ @ 0x180004DF0 (--1HashBucket@-$CSimpleHashTable@KV-$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V-$CDefaultHashP.c)
 *     ?RemoveAll@?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x180004F1C (-RemoveAll@-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCo.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  unsigned int i; // edi
  _DWORD *v3; // rcx

  CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::RemoveAll((__int64)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
    {
      v3 = (_DWORD *)(*((_QWORD *)this + 2) + 16LL * i);
      if ( *v3 == 1 )
      {
        CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket::~HashBucket((__int64)v3);
        ++*((_DWORD *)this + 2);
        --*(_DWORD *)this;
      }
    }
    LocalFree(*((HLOCAL *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_DWORD *)this = 0;
  CStringHashTable<int,CStringHashPolicy,CStringCompare>::RemoveAll((__int64)this + 48);
}
