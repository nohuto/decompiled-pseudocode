/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180019420 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18004F23C (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800649A0 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A538 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18007C26C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18007C714 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x18008B210 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObjec.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z @ 0x18008B5A0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z.c)
 * Callees:
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180017BD0 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  ULONG (__stdcall *AddRef)(IUnknown *); // rax

  if ( !a1 )
    return 0LL;
  if ( a2 )
  {
    AddRef = a2->lpVtbl->AddRef;
    if ( (char *)AddRef == (char *)CVolumeStrip::AddRef )
      CVolumeStrip::AddRef((CVolumeStrip *)a2);
    else
      ((void (__fastcall *)(struct IUnknown *))AddRef)(a2);
  }
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  *a1 = a2;
  return a2;
}
