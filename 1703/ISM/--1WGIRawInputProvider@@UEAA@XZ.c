/*
 * XREFs of ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800607AC
 * Callers:
 *     ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x180060768 (--_EWGIRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18006120C (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=42
void __fastcall WGIRawInputProvider::~WGIRawInputProvider(WGIRawInputProvider *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // rcx
  WGIController **v9; // rsi
  WGIController **i; // rdi
  WGIController *v11; // rcx
  void *v12; // rcx
  signed int LastError; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF

  v17[1] = -2LL;
  v17[2] = this;
  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_20;
  v17[0] = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Gaming.Input.UINavigationController", 0x2Bu, &hstringHeader, &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  ActivationFactory = RoGetActivationFactory(string, &GUID_2f14930a_f6f8_4a48_8d89_94786cca0c2e, v17);
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 374, ActivationFactory);
    goto LABEL_18;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17[0] + 56LL))(v17[0], *((_QWORD *)this + 8));
  if ( v5 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_15;
    v7 = 377;
    goto LABEL_14;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17[0] + 72LL))(v17[0], *((_QWORD *)this + 9));
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_15;
      v7 = 382;
LABEL_14:
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, v5);
LABEL_15:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
LABEL_18:
  v8 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_20:
  LODWORD(v17[0]) = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, v17, 4LL, 0LL);
  WGIRawInputProvider::SetInputFocusProcess(this, 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  if ( *((_QWORD *)this + 10) )
  {
    v9 = (WGIController **)*((_QWORD *)this + 11);
    for ( i = (WGIController **)*((_QWORD *)this + 10); i != v9; ++i )
    {
      v11 = *i;
      if ( *i )
      {
        *i = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v11);
      }
    }
    std::_Deallocate(*((char **)this + 10), (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) >> 3, 8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 6) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::`vftable';
  v12 = (void *)*((_QWORD *)this + 7);
  if ( v12 != (void *)-1LL )
  {
    if ( !CloseHandle(v12) )
    {
      LastError = GetLastError();
      v14 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v14 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v14);
      __debugbreak();
    }
    *((_QWORD *)this + 7) = -1LL;
  }
  v15 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
