/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800A8BCC
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     AudioServerGetDevicePeriod @ 0x18008D110 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800343F4 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180034520 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

void __fastcall CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  struct _GUID *DefaultConnectorProcessingMode; // rax
  struct _GUID v10; // [rsp+20h] [rbp-58h] BYREF
  struct _GUID v11; // [rsp+30h] [rbp-48h] BYREF

  v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v10) )
  {
    DefaultConnectorProcessingMode = &v10;
    v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    DefaultConnectorProcessingMode = CEndpointCharacteristics::GetDefaultConnectorProcessingMode(this, &v11, a2);
  }
  if ( a3 )
    *a3 = *DefaultConnectorProcessingMode;
  if ( a4 )
    *a4 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a5 )
    *a5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
}
