/*
 * XREFs of ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18003445C
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x18002E5C0 (AudioServerGetMixFormat.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180034840 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 * Callees:
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003433C (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800343F4 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800381C8 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

void __fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  struct _GUID v9; // xmm6
  const struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedMFXAPOModes; // rax
  int v11; // eax
  GUID *v12; // rcx
  struct _GUID v13; // xmm1
  struct _GUID v14; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v15; // [rsp+30h] [rbp-58h] BYREF

  v9 = *CEndpointCharacteristics::GetDefaultConnectorProcessingMode(this, &v14, a2);
  v14 = v9;
  v15 = v9;
  SupportedMFXAPOModes = CEndpointCharacteristics::GetSupportedMFXAPOModes(this, a2);
  v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedMFXAPOModes, &v14);
  v12 = &v15;
  if ( v11 == -1 )
    v12 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v13 = *v12;
  if ( a3 )
    *a3 = v9;
  if ( a4 )
    *a4 = v13;
  if ( a5 )
    *a5 = v9;
}
