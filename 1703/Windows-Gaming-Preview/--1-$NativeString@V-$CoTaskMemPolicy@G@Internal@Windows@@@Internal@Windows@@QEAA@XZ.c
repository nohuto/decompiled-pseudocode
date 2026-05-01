/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800044A8
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$0 @ 0x18002A6A5 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged_::_1_::dtor$1 @ 0x18002A931 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnViewContents_ea_18002A931.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$1 @ 0x18002A949 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_18002A949.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$5 @ 0x18002A979 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_18002A979.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$7 @ 0x18002ACB7 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18002ACB7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x18002ACFF (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18002ACFF.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$15 @ 0x18002AD17 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18002AD17.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18002AEEC (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInit_ea_18002AEEC.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$1 @ 0x18002AF7C (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0_0 @ 0x18002AF94 (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0_0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$1 @ 0x18002AFAC (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
