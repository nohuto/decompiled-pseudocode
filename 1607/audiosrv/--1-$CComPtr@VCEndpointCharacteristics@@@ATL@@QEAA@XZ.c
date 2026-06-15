/*
 * XREFs of ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x18000D8D0
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x18000AB50 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     _UpdateOffloadPowerRequest_::_1_::dtor$0 @ 0x180039C60 (_UpdateOffloadPowerRequest_--_1_--dtor$0.c)
 *     _CVADServer::Initialize_::_1_::dtor$0 @ 0x180039D50 (_CVADServer--Initialize_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$3 @ 0x18003B928 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$3.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x18003B94C (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$9 @ 0x18003B970 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$9.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$12 @ 0x18003B994 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$12.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$16 @ 0x18003B9C4 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$16.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$7 @ 0x180053437 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$7.c)
 *     _CPolicyConfig::SetDeviceFormat_::_1_::dtor$3 @ 0x18006E79A (_CPolicyConfig--SetDeviceFormat_--_1_--dtor$3.c)
 *     _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$1 @ 0x18006EB05 (_CPolicyConfig--SetDeviceFormatInternal_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$0 @ 0x1800788A3 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 */

void __fastcall ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(__int64 *a1)
{
  __int64 v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      v2();
  }
}
