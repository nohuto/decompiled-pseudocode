/*
 * XREFs of ?IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z @ 0x18004F074
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18001D3E0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsCriticalAPO(CEndpointCharacteristics *a1, int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( *((_DWORD *)a1 + 107) )
    return 0LL;
  if ( !*((_DWORD *)a1 + 106) )
    CEndpointCharacteristics::InitializeAPOInfo(a1);
  return *((unsigned int *)a1 + v3 + 108);
}
