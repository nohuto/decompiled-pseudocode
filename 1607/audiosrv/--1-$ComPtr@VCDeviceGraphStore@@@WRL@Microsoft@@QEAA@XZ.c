/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphStore@@@WRL@Microsoft@@QEAA@XZ @ 0x1800510C8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$0 @ 0x18003BBE7 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180032BF0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphStore@@VNil@Details@WRL@Microsoft@@@Detail.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDeviceGraphStore>::~ComPtr<CDeviceGraphStore>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
