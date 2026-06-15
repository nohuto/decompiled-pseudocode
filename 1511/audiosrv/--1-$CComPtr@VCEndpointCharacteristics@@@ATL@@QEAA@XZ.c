/*
 * XREFs of ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x180065F74
 * Callers:
 *     _CVADServer::Initialize_::_1_::dtor$0 @ 0x18004B2A0 (_CVADServer--Initialize_--_1_--dtor$0.c)
 *     _UpdateOffloadPowerRequest_::_1_::dtor$0 @ 0x18004B970 (_UpdateOffloadPowerRequest_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$3 @ 0x18004C7E5 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$3.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x18004C809 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$9 @ 0x18004C82D (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$9.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$12 @ 0x18004C851 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$12.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$16 @ 0x18004C881 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$16.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$7 @ 0x1800690B0 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$7.c)
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$0 @ 0x1800851B9 (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$0.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$0 @ 0x18009055E (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(
        volatile signed __int32 **a1)
{
  __int64 (__fastcall *v1)(volatile signed __int32 *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
