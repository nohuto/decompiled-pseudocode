/*
 * XREFs of ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180013960
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007580 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_180007580.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncAction@VComTaskPoolHandler@Internal@Windows@@V_lambda_bbf38d9c7f6d38a94907f74399a6babc_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_bbf38d9c7f6d38a94907f74399a6babc_@@@Z @ 0x1800149E4 (--$MakeAsyncAction@VComTaskPoolHandler@Internal@Windows@@V_lambda_bbf38d9c7f6d38a94907f74399a6ba.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetCategoryAsync(
        __int64 a1,
        int a2,
        __int64 a3)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // edi
  _DWORD v10[4]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      494LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 96);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_7:
    v7 = *(_QWORD *)(a1 + 96);
    v11[0] = a1;
    v11[1] = a1;
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_11:
    v10[2] = 0;
    v12 = a2;
    v10[0] = 3;
    v10[1] = 128;
    v9 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _QWORD *))Windows::Internal::MakeAsyncAction<Windows::Internal::ComTaskPoolHandler,_lambda_bbf38d9c7f6d38a94907f74399a6babc_>)(
           v10,
           a3,
           a3,
           v11);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)a1);
    if ( v9 < 0 )
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        503LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)a1);
    return (unsigned int)v9;
  }
}
