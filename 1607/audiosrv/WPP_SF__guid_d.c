/*
 * XREFs of WPP_SF__guid_d @ 0x18005FCC8
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z @ 0x18002EBB8 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x18005A558 (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x18005EE84 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF__guid_d(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  return EtwTraceMessage(a1, 43LL, a3, a2, a4, 16LL, (__int64 *)va);
}
