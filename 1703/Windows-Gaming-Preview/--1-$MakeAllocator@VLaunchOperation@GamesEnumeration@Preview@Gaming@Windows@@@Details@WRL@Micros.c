/*
 * XREFs of ??1?$MakeAllocator@VLaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180008F5C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_ITileManager_____ptr64_IVisualElementEnumerator_____ptr64_ITileInfo_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18002A78C (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_18002A78C.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18002A877 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_18002A877.c)
 *     __lambda_008cd9ca32b74012431ac337bbccf2a6_::operator()_::_1_::dtor$3 @ 0x18002A8F5 (__lambda_008cd9ca32b74012431ac337bbccf2a6_--operator()_--_1_--dtor$3.c)
 *     __lambda_156a2acd22091851321d998ccb9c82aa_::operator()_::_1_::dtor$2 @ 0x18002AC57 (__lambda_156a2acd22091851321d998ccb9c82aa_--operator()_--_1_--dtor$2.c)
 *     __lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator()_::_1_::dtor$2 @ 0x18002AD5F (__lambda_1854fdeaa8c10903b3acdb056db6e24a_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0LL);
}
