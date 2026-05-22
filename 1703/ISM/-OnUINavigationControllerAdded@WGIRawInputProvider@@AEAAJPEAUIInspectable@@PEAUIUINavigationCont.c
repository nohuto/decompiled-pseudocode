/*
 * XREFs of ?OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180060FC0
 * Callers:
 *     ?StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800612E0 (-StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 *     ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@Z @ 0x180061894 (--$emplace_back@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIController@@@W.c)
 *     ??0WGIController@@QEAA@XZ @ 0x180061D48 (--0WGIController@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIUINavigationController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x180062030 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIUINavigationController@Input@Gaming@Windows@@PE.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x180062524 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIRawInputProvider::OnUINavigationControllerAdded(
        struct IRawInputClient **this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IUINavigationController *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  WGIController *v6; // rax
  volatile signed __int64 *v7; // rdi
  int v8; // r15d
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  WGIController *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-38h]
  WGIController *v15; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int64 *v16; // [rsp+88h] [rbp+20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 13);
  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 13);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 13));
  v15 = 0LL;
  v16 = 0LL;
  v6 = (WGIController *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = (volatile signed __int64 *)WGIController::WGIController(v6);
    v16 = v7;
    v8 = WGIController::RuntimeClassInitialize((WGIController *)v7, a3, this[4], this[5]);
    if ( v8 >= 0 )
    {
      if ( v7 )
      {
        v9 = *((_QWORD *)v7 + 7);
        while ( v9 >= 0 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v7 + 7, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
      }
LABEL_10:
      v15 = (WGIController *)v7;
      if ( v7 )
      {
        v16 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((WGIController *)v7);
      }
      v8 = 0;
    }
    else if ( v7 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((WGIController *)v7);
    }
    if ( v8 >= 0 && (int)WGIController::NotifyAttachedAndStart(v15, (struct IRawInputProvider *)this) >= 0 )
    {
      try
      {
        std::vector<Microsoft::WRL::ComPtr<WGIController>>::emplace_back<Microsoft::WRL::ComPtr<WGIController>>(
          this + 10,
          &v15);
      }
      catch ( ... )
      {
        v5 = v13;
      }
    }
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v11);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
