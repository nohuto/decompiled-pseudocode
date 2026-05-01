/*
 * XREFs of ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180012360
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180011D40 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012AC8 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D8A8 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E380 (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_1_::dtor$0 @ 0x180027A8C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCategory_--_1_--dto.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$2 @ 0x180027BB5 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDis_ea_180027BB5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$0 @ 0x180027C5D (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProperties_--_1_--d.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180027EAA (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInitialize_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0 @ 0x180027F40 (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$0 @ 0x180027F5E (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$0.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?RemoveAll@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x18001D604 (-RemoveAll@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStri.c)
 *     ??1?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x18001D6A0 (--1-$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ.c)
 */

void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  __int64 v1; // r14
  unsigned int v2; // esi
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  CStringHashTable<int,CStringHashPolicy,CStringCompare>::~CStringHashTable<int,CStringHashPolicy,CStringCompare>((char *)this + 48);
  if ( *((_QWORD *)this + 5) )
  {
    while ( v2 < *((_DWORD *)this + 7) )
    {
      v4 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v4 + 24LL * v2) == 1 )
        CoTaskMemFree(*(LPVOID *)(v4 + 24LL * v2 + 8));
      ++v2;
    }
  }
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((char *)this + 24);
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll((char *)this + 24);
  CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(this);
}
