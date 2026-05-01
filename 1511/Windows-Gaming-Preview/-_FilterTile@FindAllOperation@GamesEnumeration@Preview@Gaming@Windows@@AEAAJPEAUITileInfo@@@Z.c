/*
 * XREFs of ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x1800020E4
 * Callers:
 *     _lambda_79660df6df334bcfb57514bd2971d535_::operator() @ 0x180003D00 (_lambda_79660df6df334bcfb57514bd2971d535_--operator().c)
 * Callees:
 *     ?push_back@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180002358 (-push_back@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x180003B8C (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIT.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007580 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_180007580.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E08C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct ITileInfo *a2)
{
  _WORD *v3; // rax
  int PackageFamilyName; // eax
  unsigned int v5; // edi
  void *v7; // rdi
  int v8; // eax
  wil *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-38h]
  LPVOID pv[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  struct ITileInfo *v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v16 = a2;
  v3 = (_WORD *)*((_QWORD *)this + 7);
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
        (void *)0x5B,
        (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)PackageFamilyName,
        -2);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      return v5;
    }
    v7 = pv[0];
    if ( (unsigned int)_o__wcsicmp(*((_QWORD *)this + 7), pv[0]) )
    {
      if ( v7 )
        CoTaskMemFree(v7);
      return 0LL;
    }
    if ( v7 )
      CoTaskMemFree(v7);
  }
  v17 = 0LL;
  v15 = *((_QWORD *)this + 11);
  v18 = *((_QWORD *)this + 10);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,ITileManager *,IVisualElementEnumerator *,ITileInfo * &>(
         &v17,
         &v18,
         &v15,
         &v16);
  if ( v8 >= 0 )
  {
    try
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::push_back(
        (char *)this + 96,
        &v17);
    }
    catch ( ... )
    {
      LODWORD(v15) = wil::ResultFromCaughtException(v9);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v15,
        v12);
      v11 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
      }
      return (unsigned int)v15;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6B,
      (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v8,
      -2);
  }
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v10);
  }
  return 0LL;
}
