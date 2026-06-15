/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180066878
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$0 @ 0x18004CB37 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044A00 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphStore@@VNil@Details@WRL@Microsoft@@@Detail.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CDeviceGraphStore>::~ComPtr<CDeviceGraphStore>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
