/*
 * XREFs of ??1?$CComPtr@UIAudioSessionInfo@@@ATL@@QEAA@XZ @ 0x1800053FC
 * Callers:
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x18002231E (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x1800223DB (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$5 @ 0x1800223EE (_CProcess--CProcess_--_1_--dtor$5.c)
 *     _CProcess::_CProcess_::_1_::dtor$4 @ 0x1800224CE (_CProcess--_CProcess_--_1_--dtor$4.c)
 *     _CProcess::_CProcess_::_1_::dtor$5 @ 0x1800224E1 (_CProcess--_CProcess_--_1_--dtor$5.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x1800225DF (_CProcess--RecalculateVolume_--_1_--dtor$2.c)
 *     _CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor$0 @ 0x180022668 (_CApplicationManager--GetProcessFromSessionInfo_--_1_--dtor$0.c)
 *     _CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor$1 @ 0x180022674 (_CApplicationManager--GetProcessFromSessionInfo_--_1_--dtor$1.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$1 @ 0x1800227CE (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$1.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x1800227E6 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x1800228D6 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$1 @ 0x1800228E2 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$1.c)
 *     _CEndpointVolumeState::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800228FA (_CEndpointVolumeState--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$5 @ 0x180022963 (_TSSession--_TSSession_--_1_--dtor$5.c)
 *     _TSSession::_TSSession_::_1_::dtor$6 @ 0x180022976 (_TSSession--_TSSession_--_1_--dtor$6.c)
 *     _TSSession::_TSSession_::_1_::dtor$7 @ 0x180022989 (_TSSession--_TSSession_--_1_--dtor$7.c)
 *     _TsSessionIdAddEndpointVolumeReference_::_1_::dtor$2 @ 0x180022B73 (_TsSessionIdAddEndpointVolumeReference_--_1_--dtor$2.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$0 @ 0x180022C2A (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
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
