/*
 * XREFs of ??1?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAA@XZ @ 0x18006180C
 * Callers:
 *     _WGIRawInputProvider::OnUINavigationControllerAdded_::_1_::dtor$1 @ 0x1800A221C (_WGIRawInputProvider--OnUINavigationControllerAdded_--_1_--dtor$1.c)
 *     _WGIRawInputProvider::OnUINavigationControllerAdded_::_1_::dtor$2 @ 0x1800A2228 (_WGIRawInputProvider--OnUINavigationControllerAdded_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<WGIController>::~ComPtr<WGIController>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
