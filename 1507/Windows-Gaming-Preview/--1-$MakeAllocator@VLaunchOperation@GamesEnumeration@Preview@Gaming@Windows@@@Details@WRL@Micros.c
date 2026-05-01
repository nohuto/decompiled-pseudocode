/*
 * XREFs of ??1?$MakeAllocator@VLaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180005D74
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_ITileManager_____ptr64_IVisualElementEnumerator_____ptr64_ITileInfo_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180027531 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180027531.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180027703 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027703.c)
 *     __lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()_::_1_::dtor$3 @ 0x1800277B4 (__lambda_a644c9ca355a20c9ec9333f2681dd115_--operator()_--_1_--dtor$3.c)
 *     __lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator()_::_1_::dtor$2 @ 0x180027C3F (__lambda_71dc2f7d55954a1851a2fc52826e08b0_--operator()_--_1_--dtor$2.c)
 *     __lambda_d60b533812f1df97d2100303db5f1b12_::operator()_::_1_::dtor$2 @ 0x180027D5F (__lambda_d60b533812f1df97d2100303db5f1b12_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
