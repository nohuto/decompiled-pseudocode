/*
 * XREFs of ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F230 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F460 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400117A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140028770 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400289A0 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140028B70 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x1400293D0 (-UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140029480 (-UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140029520 (-UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?GetFormat@CSystemAudioDeviceSharedNew@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002DF20 (-GetFormat@CSystemAudioDeviceSharedNew@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedNew@@UEAAJ_KPEA_J@Z @ 0x14002E160 (-GetLatency@CSystemAudioDeviceSharedNew@@UEAAJ_KPEA_J@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140031610 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140032068 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032130 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140032D94 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
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
