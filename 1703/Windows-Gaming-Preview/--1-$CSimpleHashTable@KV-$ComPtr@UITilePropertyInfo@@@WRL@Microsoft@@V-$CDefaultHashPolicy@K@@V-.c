/*
 * XREFs of ??1?$CSimpleHashTable@KV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V?$CDefaultHashPolicy@K@@V?$CDefaultKeyCompare@K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAA@XZ @ 0x180004C34
 * Callers:
 *     _TileDataLayerItemWrappers::TDLTileInfoHelper::_TDLTileInfoHelper_::_1_::dtor$0 @ 0x18002A621 (_TileDataLayerItemWrappers--TDLTileInfoHelper--_TDLTileInfoHelper_--_1_--dtor$0.c)
 *     _TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper_::_1_::dtor$0 @ 0x18002A65D (_TileDataLayerItemWrappers--TDLTileInfoHelper--TDLTileInfoHelper_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::~CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>(
        __int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v3 = *(_QWORD *)(a1 + 16) + 16LL * i;
      if ( *(_DWORD *)v3 == 1 )
      {
        *(_DWORD *)v3 = 2;
        v4 = *(_QWORD *)(v3 + 8);
        if ( v4 )
        {
          *(_QWORD *)(v3 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
