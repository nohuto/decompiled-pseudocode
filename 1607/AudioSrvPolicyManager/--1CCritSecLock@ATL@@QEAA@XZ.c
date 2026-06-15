/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18000A5F0
 * Callers:
 *     _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$0 @ 0x180024D8A (_CWindowsPolicyManager--UnregisterSession_--_1_--dtor$0.c)
 *     _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$1 @ 0x180024D96 (_CWindowsPolicyManager--UnregisterSession_--_1_--dtor$1.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x180024DBA (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CDuckingManager::QueueDuckingWorkItem_::_1_::dtor$1 @ 0x18002504C (_CDuckingManager--QueueDuckingWorkItem_--_1_--dtor$1.c)
 *     _CDuckingManager::GetDuckableSessionsList_::_1_::dtor$0 @ 0x180025092 (_CDuckingManager--GetDuckableSessionsList_--_1_--dtor$0.c)
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x1800253BD (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x18002543D (_CStreamClassPolicyGains--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateActiveMediaAppForSession_::_1_::dtor$0 @ 0x18002544F (_CApplicationManager--UpdateActiveMediaAppForSession_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x180025461 (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x180025473 (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$0 @ 0x180025485 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$1 @ 0x180025491 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$1.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$2 @ 0x18002549D (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$2.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$0 @ 0x1800254BB (_CApplicationManager--ProcessTerminated_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x1800254C7 (_CApplicationManager--ProcessTerminated_--_1_--dtor$1.c)
 *     _CProcess::AddSession_::_1_::dtor$0 @ 0x18002568B (_CProcess--AddSession_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$0 @ 0x18002570B (_CProcess--RecalculateVolume_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x180025717 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1800257A1 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$0 @ 0x1800257D1 (_CApplicationManager--RpcGetProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveProcess_::_1_::dtor$0 @ 0x18002581A (_CApplicationManager--RemoveProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180025860 (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveApplication_::_1_::dtor$0 @ 0x1800258A9 (_CApplicationManager--RemoveApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$0 @ 0x1800258EF (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$1 @ 0x1800258FB (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$1.c)
 *     _CApplicationManager::OnScreenReaderStateChanged_::_1_::dtor$0 @ 0x18002590D (_CApplicationManager--OnScreenReaderStateChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$0 @ 0x18002591F (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$0 @ 0x18002593D (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$0 @ 0x18002595B (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$1 @ 0x180025967 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$1.c)
 *     _CApplicationManager::SendBackgroundStreamStateChangedNotifiction_::_1_::dtor$0 @ 0x180025979 (_CApplicationManager--SendBackgroundStreamStateChangedNotifiction_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x180025997 (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _TsSessionLaunchBackgroundTask_::_1_::dtor$0 @ 0x180025CE6 (_TsSessionLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x180025E3D (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
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
