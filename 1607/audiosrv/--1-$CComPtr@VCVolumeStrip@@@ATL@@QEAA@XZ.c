/*
 * XREFs of ??1?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x1800506F0
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B7C0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     _CPerEndpointVolumeAudioSession::GetVolumeStrip_::_1_::dtor$1 @ 0x180039A3C (_CPerEndpointVolumeAudioSession--GetVolumeStrip_--_1_--dtor$1.c)
 *     _CreateSaDevice_::_1_::dtor$4 @ 0x18003C4B0 (_CreateSaDevice_--_1_--dtor$4.c)
 *     _CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor$1 @ 0x180052F38 (_CAudioSrv--ProcessAwayModeStateChange_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>(CVolumeStrip **a1)
{
  CVolumeStrip *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CVolumeStrip::Release )
      CVolumeStrip::Release(v1);
    else
      v2();
  }
}
