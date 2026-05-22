/*
 * XREFs of ??1?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180061798
 * Callers:
 *     _WGIRawInputProvider::_WGIRawInputProvider_::_1_::dtor$4 @ 0x1800A2160 (_WGIRawInputProvider--_WGIRawInputProvider_--_1_--dtor$4.c)
 *     _WGIRawInputProvider::Create_::_1_::dtor$6 @ 0x1800A21F0 (_WGIRawInputProvider--Create_--_1_--dtor$6.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<WGIController>>::~vector<Microsoft::WRL::ComPtr<WGIController>>(
        __int64 a1)
{
  char *v1; // rbx
  char *v3; // rsi
  volatile signed __int64 *v4; // rcx

  v1 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = *(volatile signed __int64 **)v1;
      if ( *(_QWORD *)v1 )
      {
        *(_QWORD *)v1 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v4);
      }
      v1 += 8;
    }
    std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
