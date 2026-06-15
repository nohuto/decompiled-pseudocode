/*
 * XREFs of ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140006840 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140027DF0 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140028010 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x1400281D0 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140028B30 (-UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140028BC0 (-UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140028C50 (-UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x1400293D8 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z @ 0x14002A9A0 (-GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z.c)
 *     ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x14002AA70 (-GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002AB70 (-GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x14002AC30 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x14002AE30 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z.c)
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x14002AF00 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 *     ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14002B220 (-ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14002D104 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002F170 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140030014 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140031890 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
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
