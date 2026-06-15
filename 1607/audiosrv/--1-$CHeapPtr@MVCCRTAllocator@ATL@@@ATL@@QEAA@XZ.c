/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800524E0 (-DeviceArrivalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x180052573 (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180052590 (-DeviceRemovalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x1800525F6 (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     ?QueryRemoveEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180053510 (-QueryRemoveEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x180058950 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x180058A4E (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180058A60 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x180058C42 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BC20 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x180064490 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x180064684 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800646FC (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x1800648D2 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 *     ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x180082BA0 (--_GDEVICE_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
