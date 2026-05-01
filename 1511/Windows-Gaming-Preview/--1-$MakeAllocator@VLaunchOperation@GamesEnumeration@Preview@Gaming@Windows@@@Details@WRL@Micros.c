/*
 * XREFs of ??1?$MakeAllocator@VLaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180005E44
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_ITileManager_____ptr64_IVisualElementEnumerator_____ptr64_ITileInfo_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18002739D (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_18002739D.c)
 *     __lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()_::_1_::dtor$3 @ 0x1800275DB (__lambda_a644c9ca355a20c9ec9333f2681dd115_--operator()_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink_Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink__::_1_::dtor$1 @ 0x18002768F (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_18002768F.c)
 *     __lambda_c54218cdb3b904062d2ffadd1a7af253_::operator()_::_1_::dtor$2 @ 0x180027A47 (__lambda_c54218cdb3b904062d2ffadd1a7af253_--operator()_--_1_--dtor$2.c)
 *     __lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator()_::_1_::dtor$2 @ 0x180027B67 (__lambda_bbf38d9c7f6d38a94907f74399a6babc_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::LaunchOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
