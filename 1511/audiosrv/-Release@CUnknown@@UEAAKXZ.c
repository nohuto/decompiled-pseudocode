/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x180032A30
 * Callers:
 *     s_pbmRegisterAppManagerNotification @ 0x180002870 (s_pbmRegisterAppManagerNotification.c)
 *     PbmGetSoundLevel @ 0x180002E2C (PbmGetSoundLevel.c)
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x180003010 (s_pbmRegisterPlaybackManagerNotifications.c)
 *     PbmCastingAppStateChanged @ 0x1800030AC (PbmCastingAppStateChanged.c)
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0 (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     PbmIsPlaying @ 0x1800036EC (PbmIsPlaying.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001F6CC (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180028F10 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002F270 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x180030150 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 *     ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x1800329F0 (-Release@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800352A8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x180038E70 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800753A0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180075AD0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180076520 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     s_pbmRegisterAppClosureNotification @ 0x1800915F0 (s_pbmRegisterAppClosureNotification.c)
 *     s_pbmUnregisterAppClosureNotification @ 0x180091670 (s_pbmUnregisterAppClosureNotification.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x1800916E0 (s_pbmUnregisterAppManagerNotification.c)
 *     s_pbmUnregisterPlaybackManagerNotifications @ 0x180091750 (s_pbmUnregisterPlaybackManagerNotifications.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18009C9F8 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18009CB58 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18009DA84 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 *     PbmPlayToStreamStateChanged @ 0x18009E13C (PbmPlayToStreamStateChanged.c)
 *     PbmSetSmtcSubscriptionState @ 0x18009E200 (PbmSetSmtcSubscriptionState.c)
 *     s_SetScreenReaderState @ 0x18009E2C0 (s_SetScreenReaderState.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18009E378 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18009FFE8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A33E0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A4320 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180029F40 (--_ECProcess@@MEAAPEAXI@Z.c)
 *     ??_ECSharedNotificationData@CDuckingNotification@@UEAAPEAXI@Z @ 0x180032A00 (--_ECSharedNotificationData@CDuckingNotification@@UEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CUnknown::Release(CUnknown *this)
{
  unsigned __int32 v2; // esi
  CProcess *(__fastcall *v4)(CProcess *, char); // rbx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 32LL))(this);
    v4 = *(CProcess *(__fastcall **)(CProcess *, char))(*(_QWORD *)this + 24LL);
    if ( v4 == CDuckingNotification::CSharedNotificationData::`vector deleting destructor' )
    {
      CDuckingNotification::CSharedNotificationData::`vector deleting destructor'(this, 1);
    }
    else if ( v4 == CProcess::`vector deleting destructor' )
    {
      CProcess::`vector deleting destructor'(this, 1);
    }
    else
    {
      v4(this, 1);
    }
  }
  return v2;
}
