/*
 * XREFs of ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18004EF24
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D814 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetEndpointId(CEndpointCharacteristics *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 2) + 40LL))(
           *((_QWORD *)this + 2),
           a2);
}
