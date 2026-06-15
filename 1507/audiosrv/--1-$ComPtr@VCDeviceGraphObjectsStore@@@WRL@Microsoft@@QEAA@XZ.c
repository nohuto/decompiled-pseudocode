/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180068434
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__::_1_::dtor$0 @ 0x180048971 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__-.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800275B0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDeviceGraphObjectsStore>::~ComPtr<CDeviceGraphObjectsStore>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
             result,
             a2);
  }
  return result;
}
