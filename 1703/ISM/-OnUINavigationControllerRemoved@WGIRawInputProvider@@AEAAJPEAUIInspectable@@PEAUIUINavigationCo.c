/*
 * XREFs of ?OnUINavigationControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180061130
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x18006260C (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WGIRawInputProvider::OnUINavigationControllerRemoved(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IUINavigationController *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  WGIController **i; // rbx
  WGIController **v7; // r14
  WGIController **j; // rdi
  WGIController *v9; // rax
  WGIController *v10; // rcx
  __int64 v11; // rax
  WGIController *v12; // rcx
  char v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  for ( i = (WGIController **)*((_QWORD *)this + 10); i != *((WGIController ***)this + 11); ++i )
  {
    if ( *((struct Windows::Gaming::Input::IUINavigationController **)*i + 9) == a3 )
    {
      WGIController::NotifyRemovedAndStop(*i);
      v7 = (WGIController **)*((_QWORD *)this + 11);
      for ( j = i + 1; j != v7; ++j )
      {
        v9 = 0LL;
        if ( &v14 != (char *)j )
        {
          v9 = *j;
          *j = 0LL;
        }
        v10 = *(j - 1);
        *(j - 1) = v9;
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v10);
      }
      v11 = *((_QWORD *)this + 11);
      v12 = *(WGIController **)(v11 - 8);
      if ( v12 )
      {
        *(_QWORD *)(v11 - 8) = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v12);
      }
      *((_QWORD *)this + 11) -= 8LL;
      break;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
