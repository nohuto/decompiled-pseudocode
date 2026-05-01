/*
 * XREFs of ??1?$MakeAllocator@VLaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180009390
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_ITileManager_____ptr64_IVisualElementEnumerator_____ptr64_ITileInfo_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180027E57 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180027E57.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180027F3E (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027F3E.c)
 *     __lambda_e7d66ec3c204a83377ccb333ff70ed66_::operator()_::_1_::dtor$3 @ 0x180027FC2 (__lambda_e7d66ec3c204a83377ccb333ff70ed66_--operator()_--_1_--dtor$3.c)
 *     __lambda_cdca003ac9496c425fbc452970c01125_::operator()_::_1_::dtor$2 @ 0x1800283F0 (__lambda_cdca003ac9496c425fbc452970c01125_--operator()_--_1_--dtor$2.c)
 *     __lambda_61beeb39da0ffab562e69952bf082708_::operator()_::_1_::dtor$2 @ 0x180028504 (__lambda_61beeb39da0ffab562e69952bf082708_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
