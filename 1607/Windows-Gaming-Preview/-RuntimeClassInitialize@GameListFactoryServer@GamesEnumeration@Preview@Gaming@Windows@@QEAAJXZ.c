/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000AEB8
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000C780 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVisualElementEventSink@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004920 (-Release@-$RuntimeClass@U-$InterfaceList@UIVisualElementEventSink@@U-$InterfaceList@VFtmBase@WRL.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004D30 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001FDE0 (--4-$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@QEAAAEAV01@AEBV01.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  LPVOID *ppv; // rbx
  __int64 v3; // rcx
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  char *v10; // rax
  char *v11; // rbx
  int v12; // esi
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  HRESULT v16; // eax
  __int64 v17; // rdx
  signed __int32 v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  const char *v22; // r9
  char *v23; // [rsp+30h] [rbp-108h]
  _QWORD v24[7]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD *v25; // [rsp+88h] [rbp-B0h]
  _QWORD v26[7]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v27; // [rsp+C8h] [rbp-70h]
  _QWORD v28[7]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD *v29; // [rsp+108h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *ppv = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Instance = CoCreateInstance(
               &GUID_4b6c85f1_a6d9_433a_9789_89ea153626ed,
               0LL,
               4u,
               &GUID_bd3e41ca_2e87_47a8_8ec0_6f0fe76752ac,
               ppv);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 33LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Instance = CoCreateInstance(
               &GUID_4661626c_9f41_40a9_b3f5_5580e80cb347,
               0LL,
               4u,
               &GUID_93af7f9c_2f24_4377_be59_a3a109d0ac64,
               (LPVOID *)this + 11);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 36LL;
    goto LABEL_5;
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v9 )
  {
    *((_QWORD *)this + 12) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
  }
  *((_QWORD *)this + 12) = 0LL;
  v10 = (char *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v23 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v13 = v10 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 8));
  *((_DWORD *)v11 + 9) = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IVisualElementEventSink'};
  *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v11 = v23;
  }
  *(_QWORD *)v11 = &Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`vftable'{for `IVisualElementEventSink'};
  *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)v11 + 10) = 0;
  *((_QWORD *)v11 + 6) = 0LL;
  *((_QWORD *)v11 + 14) = 0LL;
  *((_QWORD *)v11 + 22) = 0LL;
  *((_QWORD *)v11 + 30) = 0LL;
  v14 = v11 + 48;
  v15 = *((_QWORD *)v11 + 6);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = CoCreateInstance(
          &GUID_a6358b41_04b3_477f_b8e5_7edb1a5d7acd,
          0LL,
          1u,
          &GUID_8200309e_b0a8_4269_bd55_e0442725d348,
          (LPVOID *)v11 + 6);
  v12 = v16;
  if ( v16 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, char *))(*(_QWORD *)*v14 + 24LL))(
            *v14,
            v11,
            25LL,
            v11 + 40);
    v12 = v16;
    if ( v16 >= 0 )
      goto LABEL_23;
    v17 = 32LL;
  }
  else
  {
    v17 = 29LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
    (const char *)(unsigned int)v16);
LABEL_23:
  if ( v12 >= 0 )
  {
    if ( v11 )
    {
      do
        v18 = *((_DWORD *)v11 + 9);
      while ( v18 != 0x7FFFFFFF && v18 != _InterlockedCompareExchange((volatile signed __int32 *)v11 + 9, v18 + 1, v18) );
    }
    *((_QWORD *)this + 12) = v11;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v11);
    v12 = 0;
  }
  else if ( v11 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v11);
  }
  if ( v12 < 0 )
    goto LABEL_34;
  try
  {
    v24[0] = &std::_Func_impl<_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_,std::allocator<int>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
    v24[1] = this;
    v25 = v24;
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *)>::operator=(
      *((_QWORD *)this + 12) + 56LL,
      v24);
    if ( v25 )
    {
      LOBYTE(v19) = v25 != v24;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v25 + 32LL))(v25, v19);
    }
    v26[0] = &std::_Func_impl<_lambda_cea028e35af94b856d4a7ac7af6e3cb1_,std::allocator<int>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>::`vftable';
    v26[1] = this;
    v27 = v26;
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *)>::operator=(
      *((_QWORD *)this + 12) + 120LL,
      v26);
    if ( v27 )
    {
      LOBYTE(v20) = v27 != v26;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v27 + 32LL))(v27, v20);
    }
    v28[0] = &std::_Func_impl<_lambda_afebbbc677774987d26b23c7119f460e_,std::allocator<int>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::`vftable';
    v28[1] = this;
    v29 = v28;
    std::function<long (enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *)>::operator=(
      *((_QWORD *)this + 12) + 184LL,
      v28);
    if ( v29 )
    {
      LOBYTE(v21) = v29 != v28;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v29 + 32LL))(v29, v21);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x42,
                           (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
                           v22);
  }
  return 0LL;
}
