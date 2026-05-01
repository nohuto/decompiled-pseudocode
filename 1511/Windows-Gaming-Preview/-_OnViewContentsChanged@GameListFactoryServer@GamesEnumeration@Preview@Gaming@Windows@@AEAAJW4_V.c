/*
 * XREFs of ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000997C
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileInViewChangeEvent@@@Z @ 0x18000B100 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V-.c)
 *     ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001E770 (-HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800096EC (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000978C (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DCC8 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *a1,
        int a2,
        __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  unsigned __int16 **v11; // r8
  unsigned int v12; // edi
  int AppUserModelId; // eax
  unsigned int v14; // r8d
  struct ITileInfo *v15; // rsi
  void *v16; // rbx
  struct ITileInfo *v17; // rdi
  struct ITileInfo *v18; // [rsp+28h] [rbp-29h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v20; // [rsp+48h] [rbp-9h]
  __int64 v21; // [rsp+58h] [rbp+7h]
  _QWORD v22[3]; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v23; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v21 = -2LL;
  if ( (unsigned int)(a2 - 3) > 1 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 220LL;
LABEL_4:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v8,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v22[0] != 0x42DC1540AF152279LL || v22[1] != 0x71B4349EA679BA0LL )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL))(a3, &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 227LL;
    goto LABEL_4;
  }
  v18 = 0LL;
  *(_OWORD *)pv = v23;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *, struct ITileInfo **))(**((_QWORD **)a1 + 11) + 48LL))(
          *((_QWORD **)a1 + 11),
          pv,
          &v18);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a2 == 3 )
    {
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, v18);
    }
    else
    {
      pv[0] = 0LL;
      pv[1] = (LPVOID)-1LL;
      v20 = -1LL;
      AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(v18, (struct ITileInfo *)pv, v11);
      v12 = AppUserModelId;
      if ( AppUserModelId < 0 )
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          241LL,
          (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)AppUserModelId);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_16;
      }
      v16 = pv[0];
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
        a1,
        (const unsigned __int16 *)pv[0],
        v14);
      if ( v16 )
        CoTaskMemFree(v16);
    }
    v17 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    230LL,
    (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v12;
}
