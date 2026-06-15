/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500
 * Callers:
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$0 @ 0x18004B110 (_CAudioStream--RecalculateVolume_--_1_--dtor$0.c)
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180067E50 (-DeviceArrivalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x180067ED9 (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180067EF0 (-DeviceRemovalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x180067FB3 (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     ?QueryRemoveEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180069190 (-QueryRemoveEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x18006F180 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x18006F27B (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x18006F290 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x18006F4B0 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180071AA0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180073570 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180074DC4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x18007CC54 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x18007CEA7 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18007D040 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x18007D270 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 *     ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x18009A3C0 (--_GDEVICE_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
