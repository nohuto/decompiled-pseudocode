/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0
 * Callers:
 *     PbmIsPlaying @ 0x180003A80 (PbmIsPlaying.c)
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x180003B30 (s_pbmRegisterPlaybackManagerNotifications.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180003EF0 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     PbmGetSoundLevel @ 0x180004E2C (PbmGetSoundLevel.c)
 *     s_pbmRegisterAppManagerNotification @ 0x180004ED0 (s_pbmRegisterAppManagerNotification.c)
 *     PbmSetSmtcSubscriptionState @ 0x18000557C (PbmSetSmtcSubscriptionState.c)
 *     ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180007D90 (-Release@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180011150 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180013698 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001CC58 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002BF00 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18002D100 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x1800316C4 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180079F60 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007A690 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x18007B290 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     s_pbmRegisterAppClosureNotification @ 0x180093DD0 (s_pbmRegisterAppClosureNotification.c)
 *     s_pbmUnregisterAppClosureNotification @ 0x180093E40 (s_pbmUnregisterAppClosureNotification.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x180093EB0 (s_pbmUnregisterAppManagerNotification.c)
 *     s_pbmUnregisterPlaybackManagerNotifications @ 0x180093F20 (s_pbmUnregisterPlaybackManagerNotifications.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18009FAB0 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x1800A0898 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800A0E5C (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     PbmCastingAppStateChanged @ 0x1800A0FBC (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x1800A1080 (PbmPlayToStreamStateChanged.c)
 *     s_SetScreenReaderState @ 0x1800A1150 (s_SetScreenReaderState.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1800A1208 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A2D88 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A60B0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A6EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ??_ECSharedNotificationData@CDuckingNotification@@UEAAPEAXI@Z @ 0x180007DA0 (--_ECSharedNotificationData@CDuckingNotification@@UEAAPEAXI@Z.c)
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180011F20 (--_ECProcess@@MEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CUnknown::Release(CUnknown *this)
{
  unsigned __int32 v2; // esi
  CDuckingNotification::CSharedNotificationData *(__fastcall *v4)(CDuckingNotification::CSharedNotificationData *, char); // rbx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 32LL))(this);
    v4 = *(CDuckingNotification::CSharedNotificationData *(__fastcall **)(CDuckingNotification::CSharedNotificationData *, char))(*(_QWORD *)this + 24LL);
    if ( v4 == CDuckingNotification::CSharedNotificationData::`vector deleting destructor' )
    {
      CDuckingNotification::CSharedNotificationData::`vector deleting destructor'(this, 1);
    }
    else if ( (char *)v4 == (char *)CProcess::`vector deleting destructor' )
    {
      CProcess::`vector deleting destructor'(this, 1u);
    }
    else
    {
      v4(this, 1);
    }
  }
  return v2;
}
