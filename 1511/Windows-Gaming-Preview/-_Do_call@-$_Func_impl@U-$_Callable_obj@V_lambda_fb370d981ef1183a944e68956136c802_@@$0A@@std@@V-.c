/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileChangeEvent@@@Z @ 0x18000AFA0
 * Callers:
 *     ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001E770 (-HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800098D8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl<std::_Callable_obj<_lambda_fb370d981ef1183a944e68956136c802_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>::_Do_call(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v4; // rsi
  int v5; // eax
  int v6; // edi
  struct ITileInfo *v7; // rsi
  struct ITileInfo *v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ITileInfo *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(a1 + 8);
  if ( *a2 != 2 )
  {
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)v3 + 32LL))(v3, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppUpdated(v4, v11);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    355LL,
    (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v5);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_8:
  if ( v6 < 0 )
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      55LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
