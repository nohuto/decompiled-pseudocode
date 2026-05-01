/*
 * XREFs of ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000BDC0
 * Callers:
 *     ?_Do_call@?$_Func_impl@V_lambda_afebbbc677774987d26b23c7119f460e_@@V?$allocator@H@std@@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@EEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileInViewChangeEvent@@@Z @ 0x18000D590 (-_Do_call@-$_Func_impl@V_lambda_afebbbc677774987d26b23c7119f460e_@@V-$allocator@H@std@@JW4_VISUA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000BB4C (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000BBEC (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
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
  int AppUserModelId; // eax
  struct ITileInfo *v13; // rcx
  void *v14; // rbx
  struct ITileInfo *v15; // rcx
  struct ITileInfo *v16; // [rsp+28h] [rbp-29h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v18; // [rsp+48h] [rbp-9h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  __int128 v20; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v21; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v19 = -2LL;
  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v20);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 220LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    if ( (dword_180038A84 & 1) == 0 )
    {
      dword_180038A84 |= 1u;
      xmmword_180038A88 = VIEW_DESKTOPAPPS;
    }
    if ( v20 == xmmword_180038A88 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL))(a3, &v21);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 227LL;
        goto LABEL_4;
      }
      v16 = 0LL;
      *(_OWORD *)pv = v21;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *, struct ITileInfo **))(**((_QWORD **)a1 + 11) + 48LL))(
              *((_QWORD **)a1 + 11),
              pv,
              &v16);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v10);
LABEL_18:
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        return v7;
      }
      if ( a2 == 3 )
      {
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, v16);
      }
      else
      {
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        v18 = -1LL;
        AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(v16, (struct ITileInfo *)pv, v11);
        v7 = AppUserModelId;
        if ( AppUserModelId < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF1,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)AppUserModelId);
          if ( pv[0] )
            CoTaskMemFree(pv[0]);
          goto LABEL_18;
        }
        v14 = pv[0];
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
          a1,
          (const unsigned __int16 *)pv[0]);
        if ( v14 )
          CoTaskMemFree(v14);
      }
      v15 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  return 0LL;
}
