/*
 * XREFs of ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180011EBC
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800117A8 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012280 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012CB0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CF6C (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D4D0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DCC8 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E08C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_1_::dtor$1 @ 0x1800278C5 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_1800278C5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$2 @ 0x1800279BD (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDis_ea_1800279BD.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$0 @ 0x180027A59 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProperties_--_1_--d.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180027CBE (_Windows--Gaming--Preview--GamesEnumeration--LaunchOperation--RuntimeClassInitializ_ea_180027CBE.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180027D24 (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInitialize_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0 @ 0x180027DBA (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$0 @ 0x180027DF6 (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$0.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?RemoveAll@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x18001CD04 (-RemoveAll@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStri.c)
 *     ?RemoveAll@?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x18001CDA0 (-RemoveAll@-$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  __int64 v1; // r14
  unsigned int v2; // edi
  _DWORD *v4; // rbx
  unsigned int i; // ecx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  v4 = (_DWORD *)((char *)this + 48);
  CStringHashTable<int,CStringHashPolicy,CStringCompare>::RemoveAll((char *)this + 48);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    {
      v6 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v6 + 24LL * i) == 1 )
      {
        *(_DWORD *)(v6 + 24LL * i) = 2;
        ++*((_DWORD *)this + 14);
        --*v4;
      }
    }
    LocalFree(*((HLOCAL *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  *v4 = 0;
  if ( *((_QWORD *)this + 5) )
  {
    while ( v2 < *((_DWORD *)this + 7) )
    {
      v7 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v7 + 24LL * v2) == 1 )
        CoTaskMemFree(*(LPVOID *)(v7 + 24LL * v2 + 8));
      ++v2;
    }
  }
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((char *)this + 24);
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((char *)this + 24);
  CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(this);
}
