/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8
 * Callers:
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x1800020E0 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180028740 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180035590 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18004F23C (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x180055410 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x180055750 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x180064490 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800646FC (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CComPtrBase<IAudioMeter>::Release(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
