/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180008E3C
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000A8F0 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180007240 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ @ 0x18000A400 (--1-$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000AA3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVisualElementEventSink@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011560 (-Release@-$RuntimeClass@U-$InterfaceList@UIVisualElementEventSink@@U-$InterfaceList@VFtmBase@WRL.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@@Z @ 0x18001E7E8 (-SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXA.c)
 *     ?SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@@Z @ 0x18001E8B8 (-SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAE.c)
 *     ?SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z@std@@@Z @ 0x18001E988 (-SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  LPVOID *ppv; // rax
  HRESULT Instance; // eax
  int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  LPVOID *v8; // rax
  char *v9; // rax
  char *v10; // r14
  _QWORD *v11; // rbx
  LPVOID *v12; // rax
  HRESULT v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // eax
  wil *v16; // rcx
  char *v17; // [rsp+40h] [rbp-98h]
  unsigned int v18; // [rsp+40h] [rbp-98h]
  _QWORD v19[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

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
    v6 = (unsigned int)Instance;
LABEL_4:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v5,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v6);
    return (unsigned int)v4;
  }
  v8 = (LPVOID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>((char *)this + 88);
  Instance = CoCreateInstance(
               &GUID_4661626c_9f41_40a9_b3f5_5580e80cb347,
               0LL,
               4u,
               &GUID_93af7f9c_2f24_4377_be59_a3a109d0ac64,
               v8);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 36LL;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 12) )
  {
    *((_QWORD *)this + 12) = 0LL;
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release)();
  }
  *((_QWORD *)this + 12) = 0LL;
  v9 = (char *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v17 = v9;
  if ( !v9 )
  {
    v4 = -2147024882;
LABEL_29:
    v6 = (unsigned int)v4;
    v5 = 38LL;
    goto LABEL_4;
  }
  v11 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_DWORD *)v10 + 9) = 1;
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IVisualElementEventSink'};
  *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    v10 = v17;
  }
  *(_QWORD *)v10 = &Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`vftable'{for `IVisualElementEventSink'};
  *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)v10 + 10) = 0;
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 10) = 0LL;
  *((_QWORD *)v10 + 14) = 0LL;
  *((_QWORD *)v10 + 18) = 0LL;
  v12 = (LPVOID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>(v10 + 48);
  v13 = CoCreateInstance(
          &GUID_a6358b41_04b3_477f_b8e5_7edb1a5d7acd,
          0LL,
          1u,
          &GUID_8200309e_b0a8_4269_bd55_e0442725d348,
          v12);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, char *))(**((_QWORD **)v10 + 6) + 24LL))(
            *((_QWORD *)v10 + 6),
            v10,
            25LL,
            v10 + 40);
    v4 = v13;
    if ( v13 >= 0 )
      goto LABEL_18;
    v14 = 32LL;
  }
  else
  {
    v14 = 29LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v14,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
    (const char *)(unsigned int)v13);
LABEL_18:
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      do
        v15 = *((_DWORD *)v10 + 9);
      while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 9, v15 + 1, v15) );
    }
    *((_QWORD *)this + 12) = v10;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
    v4 = 0;
  }
  else if ( v10 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
  }
  if ( v4 < 0 )
    goto LABEL_29;
  try
  {
    v19[0] = &std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
    v19[1] = this;
    v19[3] = v19;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetAppStateChangedHandler(
      *((_QWORD *)this + 12),
      v19);
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(v19);
    v20[0] = &std::_Func_impl<std::_Callable_obj<_lambda_fb370d981ef1183a944e68956136c802_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>::`vftable';
    v20[1] = this;
    v20[3] = v20;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetTileStateChangedHandler(
      *((_QWORD *)this + 12),
      v20);
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(v20);
    v21[0] = &std::_Func_impl<std::_Callable_obj<_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::`vftable';
    v21[1] = this;
    v21[3] = v21;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetViewContentsChangedHandler(
      *((_QWORD *)this + 12),
      v21);
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(v21);
  }
  catch ( ... )
  {
    v18 = wil::ResultFromCaughtException(v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v18);
    return v18;
  }
  return 0LL;
}
