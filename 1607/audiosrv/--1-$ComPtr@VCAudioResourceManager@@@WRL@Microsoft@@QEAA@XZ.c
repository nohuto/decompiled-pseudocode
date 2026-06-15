/*
 * XREFs of ??1?$ComPtr@VCAudioResourceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800511E8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$0 @ 0x18003B7B2 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__--_1_--.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034520 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Deta.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAudioResourceManager>::~ComPtr<CAudioResourceManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
