/*
 * XREFs of ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001EA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x180009E10 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000A024 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileChangeEvent@@@Z @ 0x18000B090 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V-.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::HandleEvent(
        Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  struct IUnknownVtbl *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // r9
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v12; // rcx
  int v13; // eax
  struct IUnknownVtbl *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v18; // rdi
  int v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v23; // [rsp+68h] [rbp+28h] BYREF

  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_c720fc22_be39_40a0_9e7c_737d4cf82088 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_72d5424d_6eb2_4735_b36d_c9c3c6f038ce.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_72d5424d_6eb2_4735_b36d_c9c3c6f038ce.Data4 )
    {
      if ( *((_QWORD *)this + 10) )
      {
        lpVtbl = a3->lpVtbl;
        v20 = 0LL;
        v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
               a3,
               &GUID_72d5424d_6eb2_4735_b36d_c9c3c6f038ce,
               &v20);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 90LL;
          goto LABEL_36;
        }
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 93LL;
          goto LABEL_36;
        }
        if ( v23 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, &v19);
          v6 = v5;
          if ( v5 < 0 )
          {
            v7 = 98LL;
            goto LABEL_36;
          }
          v12 = *((_QWORD *)this + 10);
          if ( !v12 )
          {
            std::_Xbad_function_call();
            __debugbreak();
          }
          v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged(
                  *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(v12 + 8),
                  v19,
                  v20);
          v6 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_HrPreRelease(
              retaddr,
              47LL,
              (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
              (const char *)(unsigned int)v13);
            v10 = v6;
            v7 = 100LL;
            goto LABEL_37;
          }
        }
        goto LABEL_40;
      }
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9234b3a2_4825_4dcb_9623_87d4cf66c22c.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9234b3a2_4825_4dcb_9623_87d4cf66c22c.Data4
           && *((_QWORD *)this + 14) )
    {
      v14 = a3->lpVtbl;
      v20 = 0LL;
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v14->QueryInterface)(
             a3,
             &GUID_9234b3a2_4825_4dcb_9623_87d4cf66c22c,
             &v20);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 109LL;
        goto LABEL_36;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 112LL;
        goto LABEL_36;
      }
      v15 = *((_QWORD *)this + 14);
      v21 = v20;
      v19 = v23;
      if ( !v15 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      v5 = std::_Func_impl<std::_Callable_obj<_lambda_fb370d981ef1183a944e68956136c802_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>::_Do_call(
             v15,
             &v19,
             &v21);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 114LL;
        goto LABEL_36;
      }
LABEL_40:
      v18 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    return 0LL;
  }
  if ( !*((_QWORD *)this + 18) )
    return 0LL;
  v4 = a3->lpVtbl;
  v20 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v4->QueryInterface)(
         a3,
         &GUID_c720fc22_be39_40a0_9e7c_737d4cf82088,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 77LL;
LABEL_36:
    v10 = (unsigned int)v5;
    goto LABEL_37;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 80LL;
    goto LABEL_36;
  }
  v8 = *((_QWORD *)this + 18);
  if ( !v8 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  v9 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged(
         *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(v8 + 8),
         v23,
         v20);
  v6 = v9;
  if ( v9 >= 0 )
    goto LABEL_40;
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    63LL,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v9);
  v10 = v6;
  v7 = 82LL;
LABEL_37:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v7,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
    (const char *)v10);
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v6;
}
