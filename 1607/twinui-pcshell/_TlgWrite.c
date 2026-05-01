/*
 * XREFs of _TlgWrite @ 0x180001134
 * Callers:
 *     _lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_::operator() @ 0x180003E2C (_lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_--operator().c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18000D3E8 (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?PrelaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18000D464 (-PrelaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18000D4E0 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StopActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000D560 (-StopActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXI@Z @ 0x18000D974 (-StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITeleme.c)
 *     ?StopActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000DAE0 (-StopActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x18000DED4 (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ?StopActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000E090 (-StopActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelem.c)
 *     ?StartActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXII@Z @ 0x18000E484 (-StartActivity@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?StopActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000E600 (-StopActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG@Z @ 0x18000E9F4 (-StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StopActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000EB90 (-StopActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXI@Z @ 0x18000EF84 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?StopActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000F0F0 (-StopActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000F4E4 (-StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?StopActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18000F630 (-StopActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAX.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000FA24 (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011150 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040 (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800123F0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800128C0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180014480 (-NotifyFailure@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18001830C (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800189A4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180018C44 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18001B400 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001F040 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x18001F22C (--$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z.c)
 *     ??$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F578 (--$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F69C (--$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z @ 0x18001F7C0 (--$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z.c)
 *     ??$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F928 (--$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001FA4C (--$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEA.c)
 *     ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x18001FD14 (--$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEB.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x1800202D4 (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAE.c)
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x180020444 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x180021190 (-StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x18002135C (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18002173C (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18002192C (-StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180021AF8 (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x180021CC8 (-StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z.c)
 *     ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180021E84 (-StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180022038 (-StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180022284 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x1800226C4 (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180022AB0 (-StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180022E80 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180023280 (-StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180023624 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180023ABC (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180023EB0 (-StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180024280 (-StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180024674 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180024A60 (-StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180024EC0 (-StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180025290 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?NotifyFailure@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800253B0 (-NotifyFailure@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800256E0 (-StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800261A8 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180026320 (-NotifyFailure@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800268F0 (-StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026D5C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18002796C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorT.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x180027F28 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800283E0 (-StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800287A8 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180028A08 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, pActivityId, pRelatedActivityId, cData, pData);
}
