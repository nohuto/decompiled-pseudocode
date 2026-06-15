/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990
 * Callers:
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140001D84 (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002000 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140002110 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002310 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002410 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002B20 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140002EC0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140003830 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140003AE0 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140003B70 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140003F00 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140003F90 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400040C0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x1400041F0 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004240 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005470 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005550 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400055F0 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z @ 0x1400056A0 (-ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400058F0 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400060A4 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006120 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006440 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006600 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400066A0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006760 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140006960 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140006D20 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14001614C (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140016AD0 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
