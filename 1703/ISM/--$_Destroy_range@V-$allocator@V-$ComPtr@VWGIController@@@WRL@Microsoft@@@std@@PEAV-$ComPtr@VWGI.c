/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@0@@Z @ 0x180061AC4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_WGIController______ptr64_Microsoft::WRL::ComPtr_WGIController______ptr64_std::allocator_Microsoft::WRL::ComPtr_WGIController______::_1_::catch$4 @ 0x1800A2335 (_std--_Uninitialized_move_al_unchecked1_Microsoft--WRL--ComPtr_WGIController______ptr64_Microsof.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<WGIController>>,Microsoft::WRL::ComPtr<WGIController> *>(
        volatile signed __int64 **a1,
        volatile signed __int64 **a2)
{
  volatile signed __int64 **v3; // rbx
  volatile signed __int64 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
