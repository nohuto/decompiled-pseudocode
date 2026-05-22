/*
 * XREFs of ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x1800686A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x18006A564 (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x18006BAAC (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x18008839C (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // r12
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  InputServiceProxy *v34; // rax
  InputServiceProxy *v35; // rbx
  int v36; // esi
  struct Microsoft::WRL::Details::ModuleBase *v37; // rcx
  __int64 v38; // rax
  InputServiceProxy *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v47[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v48[264]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( *(_QWORD *)(a1 + 48) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_DWORD *)(a1 + 56) = a4;
  v9 = (__int64 *)(a1 + 80);
  *(_BYTE *)(a1 + 60) = 0;
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = CoreUICreate(a1 + 80);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  SecurityDescriptor[0] = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      v12);
    __debugbreak();
  }
  v13 = *v9;
  v14 = (_QWORD *)(a1 + 88);
  v15 = *(_QWORD *)(a1 + 88);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64))(*(_QWORD *)v13 + 56LL))(
          v13,
          SecurityDescriptor[0],
          a1 + 88);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = *(_QWORD *)(a1 + 40);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v18;
  if ( !v18 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)0x8007000ELL);
    JUMPOUT(0x180068CA8LL);
  }
  v20 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v18 + 3) = 1;
  *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageConversationHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( v20 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v20 + 8LL))(v20);
  *v19 = &InputDeliveryServer::InputDeliveryServerConversationHost::`vftable';
  v19[2] = a1;
  (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
  *(_QWORD *)(a1 + 40) = v19;
  (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  v21 = *v9;
  v22 = *(_QWORD *)(a1 + 96);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD, _QWORD, __int64, __int64))(*(_QWORD *)v21 + 304LL))(
          v21,
          a3,
          *v14,
          3LL,
          1,
          0,
          *(_QWORD *)(a1 + 40),
          a1 + 72,
          a1 + 96);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    v25 = (_QWORD *)(a1 + 104);
    v26 = *(_QWORD *)(a1 + 104);
    if ( v26 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = CoreUIFactoryCreate(a1 + 104);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v27);
      __debugbreak();
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v25 + 24LL))(
            *v25,
            &GUID_d133fb06_b258_4fa3_be48_add096389ecf,
            &v45);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v28);
      __debugbreak();
    }
    memset(v48, 0, 0x208uLL);
    GetDesktopUniqueName(L"IRemoteInputDeliveryApi", v48, v29);
    v30 = *v25;
    v31 = *(_QWORD *)(a1 + 112);
    if ( v31 )
    {
      *(_QWORD *)(a1 + 112) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned __int16 *, _QWORD, __int64))(*(_QWORD *)v30 + 32LL))(
            v30,
            (a1 + 24) & -(__int64)(a1 != 0),
            0LL,
            v45,
            v48,
            *v14,
            a1 + 112);
    if ( v32 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v32);
      __debugbreak();
    }
  }
  if ( (gdwMitConfig & 4) != 0 && *(_DWORD *)(a1 + 56) != 1 )
  {
    SecurityDescriptor[1] = (PSECURITY_DESCRIPTOR)a1;
    v47[0] = off_1800A7EE8;
    v47[1] = a1;
    v47[7] = v47;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 120, a1 + 80, v24, v47);
  }
  *(_BYTE *)(a1 + 248) = 0;
  v33 = *(_QWORD *)(a1 + 256);
  if ( v33 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  *(_QWORD *)(a1 + 256) = 0LL;
  v44 = 0LL;
  v34 = (InputServiceProxy *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v35 = v34;
  if ( !v34 )
  {
    v36 = -2147024882;
LABEL_41:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\inputservice\\lib\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v36);
    v40 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    goto LABEL_48;
  }
  v37 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v34 + 5) = 1;
  *(_QWORD *)v34 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInputServiceProxy'};
  *((_QWORD *)v34 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v37 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v37 + 8LL))(v37);
  *(_QWORD *)v35 = &InputServiceProxy::`vftable'{for `IInputServiceProxy'};
  *((_QWORD *)v35 + 1) = &InputServiceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)v35 + 4) = 0LL;
  *((_QWORD *)v35 + 5) = 0LL;
  v36 = InputServiceProxy::RuntimeClassInitialize(
          v35,
          (struct IInputServiceProxyOwner *)((a1 + 16) & -(__int64)(a1 != 0)));
  v38 = *(_QWORD *)v35;
  v39 = v35;
  if ( v36 >= 0 )
  {
    v36 = (*(__int64 (__fastcall **)(InputServiceProxy *, GUID *, __int64 *))v38)(
            v35,
            &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
            &v44);
    v39 = v35;
    v38 = *(_QWORD *)v35;
  }
  (*(void (__fastcall **)(InputServiceProxy *))(v38 + 16))(v39);
  if ( v36 < 0 )
    goto LABEL_41;
  v41 = v44;
  if ( v44 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
    v41 = v44;
  }
  *(_QWORD *)(a1 + 256) = v41;
  if ( v41 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v36 = 0;
LABEL_48:
  if ( v36 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v36);
    __debugbreak();
  }
  v42 = *(_QWORD *)(a1 + 64);
  if ( v42 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  RegistryWatcher::Create(
    v42,
    L"System\\Input",
    (void *)a1,
    InputDeliveryServer::OnRegistrySettingsChangeStatic,
    (struct RegistryWatcher **)(a1 + 64));
  return 0LL;
}
