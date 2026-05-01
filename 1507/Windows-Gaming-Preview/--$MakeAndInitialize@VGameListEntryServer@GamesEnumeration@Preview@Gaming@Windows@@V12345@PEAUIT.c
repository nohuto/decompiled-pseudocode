/*
 * XREFs of ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x1800037A4
 * Callers:
 *     _lambda_1bb9c5925967af19482f691dd21001c0_::operator() @ 0x180001F80 (_lambda_1bb9c5925967af19482f691dd21001c0_--operator().c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009B2C (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009D44 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 * Callees:
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180005A80 (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800073D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Ga_ea_1800073D0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800076C0 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_1800076C0.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180011B9C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,ITileManager *,IVisualElementEnumerator *,ITileInfo * &>(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **a1,
        struct ITileManager **a2,
        struct IVisualElementEnumerator **a3,
        struct ITileInfo **a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v8; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v9; // rax
  int v10; // edi
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v11; // rbx

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v8);
  }
  *a1 = 0LL;
  v9 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                            0xD8uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v9);
    v10 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(v11, *a2, *a3, *a4);
    if ( v10 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v11);
      *a1 = v11;
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
      return 0;
    }
    else if ( v11 )
    {
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
