/*
 * XREFs of WPP_SF_ @ 0x140027D74
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400050F0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140006230 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140007220 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x1400072C0 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140007E54 (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140007E84 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140008844 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400088EC (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000DA20 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000FFE0 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140014D10 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140014D80 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400154F8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015B0C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015E50 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140015F7C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x140018730 (-PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ.c)
 *     ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x140027514 (-InitiateShutdownW@CAudioDGModule@@QEAAJXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140027604 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002F0C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140031C70 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K@Z @ 0x140031E60 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K@Z.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140032D10 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140032F30 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?StopStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032FD0 (-StopStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140037B30 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x14003A550 (-ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14003C41C (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14003C52C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14003C5EC (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003C74C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}
