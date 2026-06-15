/*
 * XREFs of ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180088DF4
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A538 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetLfx(
        struct IMMDevice **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct IAudioProcessingObject **a4)
{
  struct _GUID v5; // [rsp+50h] [rbp-38h] BYREF
  struct _tagpropertykey v6; // [rsp+60h] [rbp-28h] BYREF

  if ( a3 )
    *a3 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 == eKeywordDetectorConnector )
    return 0LL;
  v5 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  v6 = PKEY_FX_PreMixEffectClsid;
  return CEndpointCharacteristics::GetInitializedSystemEffectInterface(this, &v6, &v5, 0, 1, a2, a3, a4, 0LL);
}
