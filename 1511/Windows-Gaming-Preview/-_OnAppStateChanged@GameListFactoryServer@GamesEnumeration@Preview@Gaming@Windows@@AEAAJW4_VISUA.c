/*
 * XREFs of ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x180009B90
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUIApplicationLifecycleEvent@@@Z @ 0x18000AE90 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V-.c)
 *     ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001E770 (-HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800096EC (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000978C (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800098D8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001DE68 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPE.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // r9
  int v6; // eax
  unsigned __int16 **v7; // r8
  unsigned int v8; // edi
  int AppUserModelId; // eax
  unsigned int v10; // r8d
  struct ITileInfo *v11; // r14
  void *v12; // rbx
  struct ITileInfo *v13; // rdi
  int v14; // eax
  unsigned __int16 **v15; // r8
  int v16; // eax
  void *v17; // rbx
  int v18; // eax
  __int64 v19; // r14
  struct ITileInfo *v21; // rdi
  __int64 v22; // r12
  struct ITileInfo *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  Windows::Gaming::Preview::GamesEnumeration *v26[2]; // [rsp+28h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  __int64 v29; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct ITileInfo *i; // [rsp+98h] [rbp+48h] BYREF

  v26[1] = (Windows::Gaming::Preview::GamesEnumeration *)-2LL;
  v5 = (unsigned int)(a2 - 20);
  if ( a2 != 20 )
  {
    v5 = (unsigned int)(a2 - 23);
    if ( a2 != 23 )
    {
      if ( a2 == 25 || (v5 = (unsigned int)(a2 - 29), a2 == 29) )
      {
        i = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)a3 + 24LL))(a3, &i);
        v8 = v6;
        if ( v6 >= 0 )
        {
          pv = 0LL;
          v28 = -1LL;
          v29 = -1LL;
          AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
                             i,
                             (struct IApplicationIdentifier *)&pv,
                             v7);
          v8 = AppUserModelId;
          if ( AppUserModelId >= 0 )
          {
            v12 = pv;
            Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
              a1,
              (const unsigned __int16 *)pv,
              v10);
            if ( v12 )
              CoTaskMemFree(v12);
            v13 = i;
            if ( !i )
              return 0LL;
            i = 0LL;
            goto LABEL_51;
          }
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            331LL,
            (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)AppUserModelId);
          if ( pv )
            CoTaskMemFree(pv);
        }
        else
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            324LL,
            (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v6);
        }
        v11 = i;
        if ( i )
        {
          i = 0LL;
LABEL_34:
          (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        return v8;
      }
      if ( a2 != 30 )
        return 0LL;
    }
  }
  v26[0] = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, Windows::Gaming::Preview::GamesEnumeration **, __int64, __int64))(*(_QWORD *)a3 + 24LL))(
          a3,
          v26,
          a3,
          v5);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      272LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_32;
  }
  if ( a2 != 23 )
  {
    pv = 0LL;
    v28 = -1LL;
    v29 = -1LL;
    v16 = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
            v26[0],
            (struct IApplicationIdentifier *)&pv,
            v15);
    v8 = v16;
    v17 = pv;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        277LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_25;
    }
    if ( !(unsigned int)_o__wcsnicmp(pv, L"Microsoft.Windows.ShellExperienceHost", 38LL) )
    {
      v8 = 0;
LABEL_25:
      if ( v17 )
        CoTaskMemFree(v17);
      goto LABEL_32;
    }
    if ( v17 )
      CoTaskMemFree(v17);
  }
  v25 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, Windows::Gaming::Preview::GamesEnumeration *, __int64 *))(**((_QWORD **)a1 + 11) + 24LL))(
          *((_QWORD **)a1 + 11),
          v26[0],
          &v25);
  v8 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      294LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v18);
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
LABEL_32:
    v11 = v26[0];
    if ( v26[0] )
    {
      v26[0] = 0LL;
      goto LABEL_34;
    }
    return v8;
  }
  if ( v25 )
  {
    v21 = 0LL;
    for ( i = 0LL; ; v21 = i )
    {
      v22 = v25;
      if ( v21 )
      {
        i = 0LL;
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( (*(unsigned int (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)v22 + 24LL))(v22, &i) )
        break;
      if ( a2 == 23 )
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppUpdated(a1, i);
      else
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, i);
    }
    v23 = i;
    if ( i )
    {
      i = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  v24 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v13 = v26[0];
  if ( !v26[0] )
    return 0LL;
  v26[0] = 0LL;
LABEL_51:
  (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
