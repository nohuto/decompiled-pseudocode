/*
 * XREFs of ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400035A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140006B08 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140007190 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140029280 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400294B0 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140029680 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140029E40 (-UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140029EF0 (-UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140029F90 (-UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x14002A748 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K@Z @ 0x14002BF70 (-GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K@Z.c)
 *     ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x14002C030 (-GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002C120 (-GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x14002C1F0 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x14002C460 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z.c)
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x14002C520 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 *     ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14002C670 (-ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14002E818 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002F0C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140031150 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140031BA8 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140031C70 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

ATL::CCritSecLock *__fastcall ATL::CCritSecLock::CCritSecLock(
        ATL::CCritSecLock *this,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)this);
  return this;
}
