/*
 * XREFs of _CxxThrowException_0 @ 0x140019A9C
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000E1C0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140012120 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14001B319 (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001B319.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001B34A (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001B34A.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14001B380 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--ListValue_ATL--C.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001B3B1 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_14001B3B1.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14002900A (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElementTraits_unsig.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140029139 (_ATL--CAtlMap_IUnknown_____ptr64_CpuManager--DeviceRegistrations--ListValue_ATL--CElementTraits_.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140029D69 (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElemen_ea_140029D69.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140029E0F (_ATL--CAtlMap_IUnknown_____ptr64_CpuManager--DeviceRegistrations--ListValue_ATL--CE_ea_140029E0F.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     _ATL::CAtlMap_unsigned___int64_ATL::CAtlList_CDisplayNode_____ptr64_ATL::CElementTraits_CDisplayNode_____ptr64____ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_ATL::CAtlList_CDisplayNode_____ptr64_ATL::CElementTraits_CDisplayNode_____ptr64_______::NewNode_::_1_::catch$0 @ 0x140034222 (_ATL--CAtlMap_unsigned___int64_ATL--CAtlList_CDisplayNode_____ptr64_ATL--CElementTr_ea_140034222.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
