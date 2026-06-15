/*
 * XREFs of WPP_SF_ @ 0x140027424
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002280 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003824 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140005FF0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0 (-Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000EDF8 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F4F0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14001037C (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x1400103B0 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014944 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B24 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x140015150 (-InitiateShutdownW@CAudioDGModule@@QEAAJXZ.c)
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140015B50 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140015BC0 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140016374 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400165B0 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016640 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140017CC4 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140017DDC (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?Cleanup@CSystemAudioDeviceShared@@MEAAXXZ @ 0x14002BEB0 (-Cleanup@CSystemAudioDeviceShared@@MEAAXXZ.c)
 *     ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520 (-DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D370 (-StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D690 (-StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002EEB8 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002F4A0 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14002FC0C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032130 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K@Z @ 0x140032300 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K@Z.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140032BD0 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?StopStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032C70 (-StopStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140037990 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x140037E10 (-PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x14003A530 (-ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14003CF44 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003D004 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}
