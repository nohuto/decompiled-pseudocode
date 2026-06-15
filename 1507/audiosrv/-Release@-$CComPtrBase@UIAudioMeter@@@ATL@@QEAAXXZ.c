/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70
 * Callers:
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x180001A00 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x18006CB40 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x18006CF00 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x18006D0E0 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800819AC (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x180081C78 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioMeter>::Release(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
