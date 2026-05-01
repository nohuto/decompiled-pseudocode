/*
 * XREFs of ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18000414C
 * Callers:
 *     ?get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180004050 (-get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPE.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012F0C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013518 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013E68 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CDF4 (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001D948 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DE1C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_1_::dtor$1 @ 0x18002AB67 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_18002AB67.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$2 @ 0x18002ABF7 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDis_ea_18002ABF7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$0 @ 0x18002AC63 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProperties_--_1_--d.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18002AE80 (_Windows--Gaming--Preview--GamesEnumeration--LaunchOperation--RuntimeClassInitializ_ea_18002AE80.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18002AEE0 (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInitialize_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0 @ 0x18002AF70 (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$0 @ 0x18002AFA0 (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x180004DC4 (--1-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@.c)
 *     ??1?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x180004E50 (--1-$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  __int64 v2; // rcx
  unsigned int i; // edi
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CStringHashTable<int,CStringHashPolicy,CStringCompare>::~CStringHashTable<int,CStringHashPolicy,CStringCompare>((char *)this + 48);
  CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
    {
      v4 = *((_QWORD *)this + 2) + 16LL * i;
      if ( *(_DWORD *)v4 == 1 )
      {
        *(_DWORD *)v4 = 2;
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          *(_QWORD *)(v4 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++*((_DWORD *)this + 2);
        --*(_DWORD *)this;
      }
    }
    LocalFree(*((HLOCAL *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_DWORD *)this = 0;
}
