/*
 * XREFs of ??1?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x18000EFF0
 * Callers:
 *     _CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor$1 @ 0x180068B64 (_CAudioSrv--ProcessAwayModeStateChange_--_1_--dtor$1.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     _CreateSaDevice_::_1_::dtor$4 @ 0x18008C679 (_CreateSaDevice_--_1_--dtor$4.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$1 @ 0x18009E6B9 (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$1.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x18009F5F7 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

unsigned int __fastcall ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>(CVolumeStrip **a1)
{
  unsigned int (__fastcall *v1)(CVolumeStrip *__hidden); // rdi
  unsigned int result; // eax

  if ( *a1 )
  {
    v1 = *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CVolumeStrip::Release )
      return CVolumeStrip::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
