/*
 * XREFs of ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000A024
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUIApplicationLifecycleEvent@@@Z @ 0x18000AF80 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V-.c)
 *     ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001EA60 (-HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009B2C (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x180009BF4 (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009D44 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  struct ITileInfo *v9; // r14
  struct ITileInfo *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r14
  struct ITileInfo *v16; // rdi
  __int64 v17; // r12
  struct ITileInfo *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct ITileInfo *i; // [rsp+98h] [rbp+48h] BYREF

  v21[1] = -2LL;
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
        v7 = v6;
        if ( v6 >= 0 )
        {
          pv = 0LL;
          v23 = -1LL;
          v24 = -1LL;
          v8 = (*(__int64 (__fastcall **)(struct ITileInfo *, LPVOID *))(*(_QWORD *)i + 80LL))(i, &pv);
          v7 = v8;
          if ( v8 >= 0 )
          {
            Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
              a1,
              (const unsigned __int16 *)pv);
            if ( pv )
            {
              CoTaskMemFree(pv);
              pv = 0LL;
            }
            v23 = 0LL;
            v24 = 0LL;
            v10 = i;
            if ( !i )
              return 0LL;
            i = 0LL;
            goto LABEL_52;
          }
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            340LL,
            (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v8);
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v23 = 0LL;
          v24 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            333LL,
            (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v6);
        }
        v9 = i;
        if ( i )
        {
          i = 0LL;
LABEL_35:
          (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        return v7;
      }
      if ( a2 != 30 )
        return 0LL;
    }
  }
  v21[0] = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a3 + 24LL))(a3, v21, a3, v5);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      281LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_33;
  }
  if ( a2 != 23 )
  {
    pv = 0LL;
    v23 = -1LL;
    v24 = -1LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v21[0] + 80LL))(v21[0], &pv);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        286LL,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_26;
    }
    if ( !(unsigned int)_o__wcsnicmp(pv, L"Microsoft.Windows.ShellExperienceHost", 38LL) )
    {
      v7 = 0;
LABEL_26:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_33;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  v20 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(**((_QWORD **)a1 + 11) + 24LL))(
          *((_QWORD **)a1 + 11),
          v21[0],
          &v20);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      303LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v13);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
LABEL_33:
    v9 = (struct ITileInfo *)v21[0];
    if ( v21[0] )
    {
      v21[0] = 0LL;
      goto LABEL_35;
    }
    return v7;
  }
  if ( v20 )
  {
    v16 = 0LL;
    for ( i = 0LL; ; v16 = i )
    {
      v17 = v20;
      if ( v16 )
      {
        i = 0LL;
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( (*(unsigned int (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)v17 + 24LL))(v17, &i) )
        break;
      if ( a2 == 23 )
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppUpdated(a1, i);
      else
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, i);
    }
    v18 = i;
    if ( i )
    {
      i = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  v19 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v10 = (struct ITileInfo *)v21[0];
  if ( !v21[0] )
    return 0LL;
  v21[0] = 0LL;
LABEL_52:
  (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
