/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400022F4 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140002A38 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x14000362C (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140003860 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003BA0 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003C90 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400058B0 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400059A0 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005A40 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z @ 0x140005AF0 (-ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140005E40 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400067AC (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006D40 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006F20 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006FE0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400070B0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x1400072C0 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x1400076A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140007990 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x1400094A0 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x1400097B0 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140009860 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140009C40 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140009CF0 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140009E20 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140009F50 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140009FB0 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140017570 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
