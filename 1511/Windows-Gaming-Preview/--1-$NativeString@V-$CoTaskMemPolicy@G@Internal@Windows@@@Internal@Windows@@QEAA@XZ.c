/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180002324
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$0 @ 0x18002727B (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged_::_1_::dtor$1 @ 0x180027623 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnViewContents_ea_180027623.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$1 @ 0x180027641 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_180027641.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$5 @ 0x180027671 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_180027671.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$3 @ 0x1800279C9 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDis_ea_1800279C9.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$7 @ 0x180027AAD (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027AAD.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x180027AF5 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027AF5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$15 @ 0x180027B0D (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027B0D.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$18 @ 0x180027B31 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027B31.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180027D30 (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInit_ea_180027D30.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$1 @ 0x180027DC6 (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0_0 @ 0x180027DE4 (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0_0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$1 @ 0x180027E02 (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$1.c)
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
