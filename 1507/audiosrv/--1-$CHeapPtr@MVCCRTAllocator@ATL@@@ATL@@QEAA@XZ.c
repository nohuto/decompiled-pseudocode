/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180067ECC
 * Callers:
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$0 @ 0x180046DC0 (_CAudioStream--RecalculateVolume_--_1_--dtor$0.c)
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180069480 (-DeviceArrivalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x180069509 (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180069520 (-DeviceRemovalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x1800695E3 (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     ?QueryRemoveEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x18006A650 (-QueryRemoveEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x180070AB0 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x180070BAB (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180070BC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x180070DE0 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180078350 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180079A2C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800819AC (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x180081BFF (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x180081C78 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x180081EA8 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 *     ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x18009D550 (--_GDEVICE_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
