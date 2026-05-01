/*
 * XREFs of ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x180009E10
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileInViewChangeEvent@@@Z @ 0x18000B1F0 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V-.c)
 *     ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001EA60 (-HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009B2C (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x180009BF4 (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
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
  struct ITileInfo *v14; // rsi
  void *v15; // rbx
  struct ITileInfo *v16; // rdi
  struct ITileInfo *v17; // [rsp+28h] [rbp-29h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v19; // [rsp+48h] [rbp-9h]
  __int64 v20; // [rsp+58h] [rbp+7h]
  _QWORD v21[3]; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v20 = -2LL;
  if ( (unsigned int)(a2 - 3) > 1 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 229LL;
LABEL_4:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v8,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v21[0] != 0x42DC1540AF152279LL || v21[1] != 0x71B4349EA679BA0LL )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL))(a3, &v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 236LL;
    goto LABEL_4;
  }
  v17 = 0LL;
  *(_OWORD *)pv = v22;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *, struct ITileInfo **))(**((_QWORD **)a1 + 11) + 48LL))(
          *((_QWORD **)a1 + 11),
          pv,
          &v17);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a2 == 3 )
    {
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, v17);
    }
    else
    {
      pv[0] = 0LL;
      pv[1] = (LPVOID)-1LL;
      v19 = -1LL;
      AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(v17, (struct ITileInfo *)pv, v11);
      v12 = AppUserModelId;
      if ( AppUserModelId < 0 )
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          250LL,
          (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)AppUserModelId);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_16;
      }
      v15 = pv[0];
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
        a1,
        (const unsigned __int16 *)pv[0]);
      if ( v15 )
        CoTaskMemFree(v15);
    }
    v16 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    239LL,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v12;
}
