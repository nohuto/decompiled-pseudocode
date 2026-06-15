/*
 * XREFs of ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180003EC0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800064D0 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800067B0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180006E94 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180007050 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180007230 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800073E0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x180007828 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180007A74 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180007EB0 (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800081CC (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000851C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000874C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008974 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008AB8 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008C00 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000A6A8 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AB60 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AC88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000B9B0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18000BB50 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000BD20 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000BF74 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000C200 (-DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000CAF4 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CE00 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D36C (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000D724 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E0F8 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E1D0 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18000E878 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000EB20 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000EC6C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18000F0D8 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18000F2F0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180010C18 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180010E64 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011110 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800111F8 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800112CC (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800113A0 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x180011460 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180011F30 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012180 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x1800122B4 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800126B8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180013AD0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180013EA0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001419C (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001436C (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800144B0 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180014738 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180014A60 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180014F74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180015258 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180015360 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x1800154A0 (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800155B0 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800156DC (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x1800158D0 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180015D3C (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180015FB4 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001612C (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x1800162A4 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180016760 (PbmAllowMediaPlaybackForApp.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180017280 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180017AD8 (-CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180017D78 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180018090 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18001AE14 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001B400 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001B910 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001BF20 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001C048 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001D23C (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001D7EC (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001D8A0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x18001DD5C (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001DF00 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x18001E32C (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18001E4A0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18001E6B4 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x18001E7D0 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 * Callees:
 *     __security_check_cookie @ 0x180020A40 (__security_check_cookie.c)
 */

void __fastcall AudPolicyLogError(const char *a1, int a2, int a3)
{
  const unsigned __int16 *v4; // rcx
  __int64 v5; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  void *v8; // [rsp+50h] [rbp-9h]
  int v9; // [rsp+58h] [rbp-1h]
  int v10; // [rsp+5Ch] [rbp+3h]
  const unsigned __int16 *v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+6Ch] [rbp+13h]
  int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF
  int v19; // [rsp+D0h] [rbp+77h] BYREF

  if ( a3 < 0 )
  {
    v19 = a3;
    v18 = a2;
    if ( (unsigned int)dword_180031010 > 3 && (byte_180031020 & 4) != 0 && (qword_180031028 & 4) == qword_180031028 )
    {
      v4 = &word_180026AC0;
      LODWORD(v5) = 0;
      if ( a1 )
      {
        v4 = (const unsigned __int16 *)a1;
        v5 = -1LL;
        do
          ++v5;
        while ( a1[v5] );
      }
      v11 = v4;
      v12 = v5 + 1;
      v14 = &v18;
      v16 = &v19;
      v13 = 0;
      v15 = 4LL;
      v17 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 3;
      UserData.Ptr = (ULONGLONG)off_180031018;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18002A811 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 4LL;
      UserData.Size = *(unsigned __int16 *)off_180031018;
      v8 = &unk_18002A81C;
      UserData.Reserved = 2;
      v9 = 35;
      v10 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
}
