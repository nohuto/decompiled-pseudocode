/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180013690
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180012A54 (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180013734 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  unsigned int v4; // ebx
  const struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedMFXAPOModes; // rsi
  int v6; // edi
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v8) )
  {
    SupportedMFXAPOModes = CEndpointCharacteristics::GetSupportedMFXAPOModes(this, a2);
    v6 = 0;
    if ( *((int *)SupportedMFXAPOModes + 2) > 0 )
    {
      while ( 1 )
      {
        v8 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                (__int64)SupportedMFXAPOModes,
                                v6);
        if ( !(unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v8) )
          break;
        if ( ++v6 >= *((_DWORD *)SupportedMFXAPOModes + 2) )
          return v4;
      }
      return 1;
    }
  }
  return v4;
}
