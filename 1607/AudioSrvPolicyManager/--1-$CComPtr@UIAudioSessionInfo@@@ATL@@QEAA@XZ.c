/*
 * XREFs of ??1?$CComPtr@UIAudioSessionInfo@@@ATL@@QEAA@XZ @ 0x180006124
 * Callers:
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x1800254A9 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x180025527 (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$5 @ 0x18002553A (_CProcess--CProcess_--_1_--dtor$5.c)
 *     _CProcess::_CProcess_::_1_::dtor$4 @ 0x180025613 (_CProcess--_CProcess_--_1_--dtor$4.c)
 *     _CProcess::_CProcess_::_1_::dtor$5 @ 0x180025626 (_CProcess--_CProcess_--_1_--dtor$5.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x180025723 (_CProcess--RecalculateVolume_--_1_--dtor$2.c)
 *     _CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor$0 @ 0x1800257B3 (_CApplicationManager--GetProcessFromSessionInfo_--_1_--dtor$0.c)
 *     _CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor$1 @ 0x1800257BF (_CApplicationManager--GetProcessFromSessionInfo_--_1_--dtor$1.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$1 @ 0x18002592B (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$1.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x180025949 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x180025A66 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$1 @ 0x180025A72 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$1.c)
 *     _CEndpointVolumeState::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x180025A90 (_CEndpointVolumeState--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$5 @ 0x180025AFF (_TSSession--_TSSession_--_1_--dtor$5.c)
 *     _TSSession::_TSSession_::_1_::dtor$6 @ 0x180025B12 (_TSSession--_TSSession_--_1_--dtor$6.c)
 *     _TSSession::_TSSession_::_1_::dtor$7 @ 0x180025B25 (_TSSession--_TSSession_--_1_--dtor$7.c)
 *     _TsSessionIdAddEndpointVolumeReference_::_1_::dtor$2 @ 0x180025D4A (_TsSessionIdAddEndpointVolumeReference_--_1_--dtor$2.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$0 @ 0x180025E1F (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x180025E2B (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
