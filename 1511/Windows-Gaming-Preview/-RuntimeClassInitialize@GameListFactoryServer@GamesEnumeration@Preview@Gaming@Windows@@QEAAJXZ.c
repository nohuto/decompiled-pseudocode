/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180008E38
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000A660 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ @ 0x180009F74 (--1-$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A77C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ??$MakeAndInitialize@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@V12345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18000A7C8 (--$MakeAndInitialize@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@V12345@@Deta.c)
 *     ?SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@@Z @ 0x18001E4F8 (-SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXA.c)
 *     ?SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@@Z @ 0x18001E5C8 (-SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAE.c)
 *     ?SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z@std@@@Z @ 0x18001E698 (-SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  LPVOID *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  LPVOID *v7; // rax
  _QWORD *v8; // rsi
  wil *v9; // rcx
  unsigned int v11; // [rsp+30h] [rbp-48h]
  void **v12; // [rsp+40h] [rbp-38h] BYREF
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v13; // [rsp+48h] [rbp-30h]
  void ***v14; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  ppv = (LPVOID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>((char *)this + 80);
  Instance = CoCreateInstance(
               &GUID_4b6c85f1_a6d9_433a_9789_89ea153626ed,
               0LL,
               4u,
               &GUID_bd3e41ca_2e87_47a8_8ec0_6f0fe76752ac,
               ppv);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 33LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v5,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Instance);
    return v4;
  }
  v7 = (LPVOID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>((char *)this + 88);
  Instance = CoCreateInstance(
               &GUID_4661626c_9f41_40a9_b3f5_5580e80cb347,
               0LL,
               4u,
               &GUID_93af7f9c_2f24_4377_be59_a3a109d0ac64,
               v7);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 36LL;
    goto LABEL_3;
  }
  v8 = (_QWORD *)((char *)this + 96);
  Instance = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink,Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink>((char *)this + 96);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 38LL;
    goto LABEL_3;
  }
  try
  {
    v12 = &std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
    v13 = this;
    v14 = &v12;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetAppStateChangedHandler(*v8, &v12);
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(&v12);
    v12 = &std::_Func_impl<std::_Callable_obj<_lambda_fb370d981ef1183a944e68956136c802_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>::`vftable';
    v13 = this;
    v14 = &v12;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetTileStateChangedHandler(*v8, &v12);
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(&v12);
    v12 = &std::_Func_impl<std::_Callable_obj<_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::`vftable';
    v13 = this;
    v14 = &v12;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetViewContentsChangedHandler(*v8, &v12);
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(&v12);
  }
  catch ( ... )
  {
    v11 = wil::ResultFromCaughtException(v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v11);
    return v11;
  }
  return 0LL;
}
