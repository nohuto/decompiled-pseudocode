/*
 * XREFs of _CxxThrowException_0 @ 0x140019B5C
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002280 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140006800 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14001B4F0 (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001B4F0.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001B521 (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001B521.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14001B570 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_14001B570.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001B5B0 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_14001B5B0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x1400284FA (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElementTraits_unsig.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140028629 (_ATL--CAtlMap_IUnknown_____ptr64_CpuManager--DeviceRegistrations--ListValue_ATL--CElementTraits_.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x1400292F9 (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElemen_ea_1400292F9.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14002939F (_ATL--CAtlMap_IUnknown_____ptr64_CpuManager--DeviceRegistrations--ListValue_ATL--CE_ea_14002939F.c)
 *     ?AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x1400298C8 (-AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002EEB8 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002F4A0 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14002FC0C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     _ATL::CAtlMap_unsigned___int64_ATL::CAtlList_CDisplayNode_____ptr64_ATL::CElementTraits_CDisplayNode_____ptr64____ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_ATL::CAtlList_CDisplayNode_____ptr64_ATL::CElementTraits_CDisplayNode_____ptr64_______::NewNode_::_1_::catch$0 @ 0x140033FCE (_ATL--CAtlMap_unsigned___int64_ATL--CAtlList_CDisplayNode_____ptr64_ATL--CElementTr_ea_140033FCE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
