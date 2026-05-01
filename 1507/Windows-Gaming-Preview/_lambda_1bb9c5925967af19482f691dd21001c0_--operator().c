/*
 * XREFs of _lambda_1bb9c5925967af19482f691dd21001c0_::operator() @ 0x180001F80
 * Callers:
 *     _lambda_b6a89e4d7d6588540a7d783e3e8d3dbd_::operator() @ 0x180003B78 (_lambda_b6a89e4d7d6588540a7d783e3e8d3dbd_--operator().c)
 * Callees:
 *     ?push_back@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180002204 (-push_back@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x1800037A4 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIT.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800076C0 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_1800076C0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E380 (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1bb9c5925967af19482f691dd21001c0_::operator()(
        __int64 *a1,
        Windows::Gaming::Preview::GamesEnumeration *a2)
{
  _WORD *v3; // rcx
  int PackageFamilyName; // eax
  unsigned int v5; // edi
  void *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  wil *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-38h]
  LPVOID pv[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  Windows::Gaming::Preview::GamesEnumeration *v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v17 = a2;
  v3 = *(_WORD **)(*a1 + 56);
  if ( v3 && *v3 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    PackageFamilyName = Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName(
                          a2,
                          (struct ITileInfo *)pv,
                          (unsigned __int16 **)a2);
    v5 = PackageFamilyName;
    if ( PackageFamilyName < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)0x6C,
        (unsigned int)"xbox\\shellcore\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)PackageFamilyName,
        -2);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      return v5;
    }
    v7 = pv[0];
    if ( (unsigned int)_o__wcsicmp(*(_QWORD *)(*a1 + 56), pv[0]) )
    {
      if ( v7 )
        CoTaskMemFree(v7);
      return 0LL;
    }
    if ( v7 )
      CoTaskMemFree(v7);
  }
  v18 = 0LL;
  v8 = *a1;
  v16 = *(_QWORD *)(*a1 + 88);
  v19 = *(_QWORD *)(v8 + 80);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,ITileManager *,IVisualElementEnumerator *,ITileInfo * &>(
         &v18,
         &v19,
         &v16,
         &v17);
  if ( v9 >= 0 )
  {
    try
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::push_back(
        *a1 + 96,
        &v18);
    }
    catch ( ... )
    {
      LODWORD(v16) = wil::ResultFromCaughtException(v10);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (unsigned int)"xbox\\shellcore\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v16,
        v13);
      v12 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v12);
      }
      return (unsigned int)v16;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"xbox\\shellcore\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v9,
      -2);
  }
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
  }
  return 0LL;
}
