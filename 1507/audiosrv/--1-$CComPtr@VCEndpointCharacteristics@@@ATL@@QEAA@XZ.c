/*
 * XREFs of ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x1800676A8
 * Callers:
 *     _UpdateOffloadPowerRequest_::_1_::dtor$0 @ 0x1800459E0 (_UpdateOffloadPowerRequest_--_1_--dtor$0.c)
 *     _CVADServer::Initialize_::_1_::dtor$0 @ 0x1800466C0 (_CVADServer--Initialize_--_1_--dtor$0.c)
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$0 @ 0x180048094 (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$0.c)
 *     _PopulateEndpointCharacteristicsCache_::_1_::dtor$3 @ 0x1800481DE (_PopulateEndpointCharacteristicsCache_--_1_--dtor$3.c)
 *     _PopulateEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x180048202 (_PopulateEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     _PopulateEndpointCharacteristicsCache_::_1_::dtor$9 @ 0x180048226 (_PopulateEndpointCharacteristicsCache_--_1_--dtor$9.c)
 *     _PopulateEndpointCharacteristicsCache_::_1_::dtor$12 @ 0x18004824A (_PopulateEndpointCharacteristicsCache_--_1_--dtor$12.c)
 *     _PopulateEndpointCharacteristicsCache_::_1_::dtor$16 @ 0x18004827A (_PopulateEndpointCharacteristicsCache_--_1_--dtor$16.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$7 @ 0x18006A56D (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$7.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$0 @ 0x180092C9A (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

unsigned int __fastcall ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(
        __int64 *a1,
        volatile int *a2)
{
  unsigned int (__fastcall *v2)(__int64, volatile int *); // rdi
  unsigned int result; // eax

  if ( *a1 )
  {
    v2 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)*a1 + 16LL);
    if ( v2 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
               *a1,
               a2);
    else
      return ((__int64 (__fastcall *)(__int64))v2)(*a1);
  }
  return result;
}
