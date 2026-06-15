/*
 * XREFs of ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002BFC0
 * Callers:
 *     ??$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUApplicationStateChangedContext@@@Z0@Z @ 0x180001EC4 (--$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180003D58 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationManager@@EAAJPEAU_ActiveMediaAppsNotificationContext@@@Z0@Z @ 0x180004FF0 (--$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationMana.c)
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x180005688 (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002BDE8 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002BE74 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x18002D20C (--$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EA.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18002D360 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SESSIONMUTECHANGES@@@Z0@Z @ 0x18003FC2C (--$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SE.c)
 *     ??$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUSessionDisplayStateChangedContext@@@Z0@Z @ 0x18009E974 (--$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManage.c)
 *     ??$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUScreenReaderStateChangedContext@@@Z0@Z @ 0x1800A0BCC (--$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@.c)
 *     ??$QueueApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_CastingAppStateChangedContext@@@Z0@Z @ 0x1800A0C80 (--$QueueApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ??$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_PlayToStreamStateChangedContext@@@Z0@Z @ 0x1800A0D34 (--$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager.c)
 * Callees:
 *     <none>
 */

signed int __fastcall CSyncWorkItem::QueueWorkItem(ULONG_PTR dwCompletionKey)
{
  signed int result; // eax

  if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, dwCompletionKey, 0LL) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
