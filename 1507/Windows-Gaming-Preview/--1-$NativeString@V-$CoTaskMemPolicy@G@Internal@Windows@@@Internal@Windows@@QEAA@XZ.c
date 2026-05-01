/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800021D0
 * Callers:
 *     __lambda_1bb9c5925967af19482f691dd21001c0_::operator()_::_1_::dtor$0 @ 0x180027439 (__lambda_1bb9c5925967af19482f691dd21001c0_--operator()_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged_::_1_::dtor$1 @ 0x1800277FC (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnViewContents_ea_1800277FC.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$1 @ 0x18002781A (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_18002781A.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged_::_1_::dtor$5 @ 0x18002784A (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--_OnAppStateChan_ea_18002784A.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$3 @ 0x180027BC1 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDis_ea_180027BC1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$7 @ 0x180027CB1 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027CB1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x180027CF9 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027CF9.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$15 @ 0x180027D11 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180027D11.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180027EB6 (_Windows--Gaming--Preview--GamesEnumeration--SetCategoryOperation--RuntimeClassInit_ea_180027EB6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId_::_1_::dtor$1 @ 0x180027F4C (_Windows--Gaming--Preview--GamesEnumeration--GetAppUserModelId_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName_::_1_::dtor$1 @ 0x180027F6A (_Windows--Gaming--Preview--GamesEnumeration--GetPackageFamilyName_--_1_--dtor$1.c)
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
