/*
 * XREFs of ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x18002389C
 * Callers:
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001D774 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180022F7C (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x18001D604 (-RemoveAll@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStri.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  __int64 i; // rdi
  __int64 v3; // rax

  if ( *((_QWORD *)this + 5) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 7); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v3 + 24 * i) == 1 )
        CoTaskMemFree(*(LPVOID *)(v3 + 24 * i + 8));
    }
  }
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((__int64)this + 24);
  CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((__int64)this);
}
