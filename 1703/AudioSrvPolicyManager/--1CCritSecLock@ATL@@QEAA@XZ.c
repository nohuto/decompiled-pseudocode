/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18000A370
 * Callers:
 *     _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$0 @ 0x180021C4A (_CWindowsPolicyManager--UnregisterSession_--_1_--dtor$0.c)
 *     _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$1 @ 0x180021C56 (_CWindowsPolicyManager--UnregisterSession_--_1_--dtor$1.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x180021C6E (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CDuckingManager::QueueDuckingWorkItem_::_1_::dtor$1 @ 0x180021EE1 (_CDuckingManager--QueueDuckingWorkItem_--_1_--dtor$1.c)
 *     _CDuckingManager::GetDuckableSessionsList_::_1_::dtor$0 @ 0x180021F21 (_CDuckingManager--GetDuckableSessionsList_--_1_--dtor$0.c)
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x18002224A (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$0 @ 0x1800222BE (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$1 @ 0x1800222CA (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x1800222D6 (_CStreamClassPolicyGains--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x1800222E2 (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x1800222EE (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$0 @ 0x1800222FA (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$1 @ 0x180022306 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$1.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$2 @ 0x180022312 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$2.c)
 *     _CApplication::CleanupBCMStartupLatencyGracePeriod_::_1_::dtor$0 @ 0x18002232A (_CApplication--CleanupBCMStartupLatencyGracePeriod_--_1_--dtor$0.c)
 *     _CApplication::CleanupBCMStartupLatencyGracePeriod_::_1_::dtor$1 @ 0x180022336 (_CApplication--CleanupBCMStartupLatencyGracePeriod_--_1_--dtor$1.c)
 *     _CApplication::RegisterAppVolumePolicyChange_::_1_::dtor$0 @ 0x180022342 (_CApplication--RegisterAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _CProcess::AddSession_::_1_::dtor$0 @ 0x180022553 (_CProcess--AddSession_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$0 @ 0x1800225C7 (_CProcess--RecalculateVolume_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x1800225D3 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x18002265C (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$0 @ 0x180022680 (_CApplicationManager--RpcGetProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveProcess_::_1_::dtor$0 @ 0x1800226C3 (_CApplicationManager--RemoveProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180022703 (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveApplication_::_1_::dtor$0 @ 0x180022746 (_CApplicationManager--RemoveApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyPBMPolicy_::_1_::dtor$0 @ 0x180022786 (_CApplicationManager--ApplyPBMPolicy_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$0 @ 0x180022792 (_CApplicationManager--ProcessTerminated_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x18002279E (_CApplicationManager--ProcessTerminated_--_1_--dtor$1.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$2 @ 0x1800227AA (_CApplicationManager--ProcessTerminated_--_1_--dtor$2.c)
 *     _CApplicationManager::GetApplicationPBMStatus_::_1_::dtor$0 @ 0x1800227B6 (_CApplicationManager--GetApplicationPBMStatus_--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$0 @ 0x1800227C2 (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$0 @ 0x1800227DA (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$0 @ 0x1800227F2 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$1 @ 0x1800227FE (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$1.c)
 *     _CApplicationManager::SendBackgroundStreamStateChangedNotifiction_::_1_::dtor$0 @ 0x18002280A (_CApplicationManager--SendBackgroundStreamStateChangedNotifiction_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x180022822 (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x180022C42 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
