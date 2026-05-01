/*
 * XREFs of ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180015770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A450 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Ga_ea_18000A450.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A770 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_18000A770.c)
 *     ??$MakeAsyncAction@VComTaskPoolHandler@Internal@Windows@@V_lambda_61beeb39da0ffab562e69952bf082708_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_61beeb39da0ffab562e69952bf082708_@@@Z @ 0x180016794 (--$MakeAsyncAction@VComTaskPoolHandler@Internal@Windows@@V_lambda_61beeb39da0ffab562e69952bf0827.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetCategoryAsync(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v7; // r8
  int v8; // edi
  int v9[4]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1);
    v10[0] = a1;
    v10[1] = a1;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1);
    v9[2] = 0;
    v11 = a2;
    v9[0] = 3;
    v9[1] = 128;
    v8 = ((__int64 (__fastcall *)(int *, __int64, __int64, _QWORD *))Windows::Internal::MakeAsyncAction<Windows::Internal::ComTaskPoolHandler,_lambda_61beeb39da0ffab562e69952bf082708_>)(
           v9,
           a3,
           v7,
           v10);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)a1);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)a1);
    return (unsigned int)v8;
  }
}
