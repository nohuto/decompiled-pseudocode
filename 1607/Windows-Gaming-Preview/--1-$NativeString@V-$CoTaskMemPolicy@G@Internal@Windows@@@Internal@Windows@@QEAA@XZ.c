/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800045BC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$0 @ 0x180027D0A (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged_::_1_::dtor$1 @ 0x180028016 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnViewContents_ea_180028016.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$1 @ 0x180028034 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_180028034.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$5 @ 0x180028064 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_180028064.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$7 @ 0x180028456 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180028456.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x18002849E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18002849E.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$15 @ 0x1800284B6 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800284B6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800286D9 (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInit_ea_1800286D9.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$1 @ 0x18002876F (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$0_0 @ 0x18002878D (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$0_0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$1 @ 0x1800287AB (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$1.c)
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
