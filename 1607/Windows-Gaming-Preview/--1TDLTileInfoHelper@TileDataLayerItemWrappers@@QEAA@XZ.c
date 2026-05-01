/*
 * XREFs of ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218
 * Callers:
 *     ?get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180004130 (-get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPE.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013BD4 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18001429C (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001E574 (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001EA34 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F69C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_1_::dtor$1 @ 0x1800282F4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_1800282F4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$2 @ 0x18002838A (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDis_ea_18002838A.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$0 @ 0x180028402 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProperties_--_1_--d.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180028667 (_Windows--Gaming--Preview--GamesEnumeration--LaunchOperation--RuntimeClassInitializ_ea_180028667.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800286CD (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInitialize_--_1_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0 @ 0x180028763 (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$0 @ 0x18002879F (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$CStringHashTable@V?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x180004FD0 (--1-$CStringHashTable@V-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@.c)
 *     ?RemoveAll@?$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ @ 0x180005060 (-RemoveAll@-$CStringHashTable@HVCStringHashPolicy@@VCStringCompare@@@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  __int64 i; // rcx
  __int64 v5; // r8
  unsigned int j; // edi
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (_DWORD *)((char *)this + 48);
  CStringHashTable<int,CStringHashPolicy,CStringCompare>::RemoveAll((char *)this + 48);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 13); i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v5 + 24 * i) == 1 )
      {
        *(_DWORD *)(v5 + 24 * i) = 2;
        ++*((_DWORD *)this + 14);
        --*v3;
      }
    }
    LocalFree(*((HLOCAL *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  *v3 = 0;
  CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( j = 0; j < *((_DWORD *)this + 1); ++j )
    {
      v7 = *((_QWORD *)this + 2) + 16LL * j;
      if ( *(_DWORD *)v7 == 1 )
      {
        *(_DWORD *)v7 = 2;
        v8 = *(_QWORD *)(v7 + 8);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
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
