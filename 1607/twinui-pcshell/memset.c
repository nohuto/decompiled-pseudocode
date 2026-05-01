/*
 * XREFs of memset @ 0x18002F32C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001240 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     memcpy_s @ 0x180001338 (memcpy_s.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180002820 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     McGenControlCallbackV2 @ 0x180003BE0 (McGenControlCallbackV2.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000476C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180008D30 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180009440 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180009674 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18001331C (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ??$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180014BD4 (--$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ??$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180014C84 (--$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ??$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAPEBGAEA_N@Z @ 0x180014D44 (--$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationC.c)
 *     ??$Start@$$V@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180014F34 (--$Start@$$V@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA-AV0.c)
 *     ??$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI0@Z @ 0x1800150F0 (--$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ??$Start@AEAPEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAPEBG@Z @ 0x1800151C0 (--$Start@AEAPEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ??$Start@I@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180015280 (--$Start@I@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@S.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001F040 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ??$Start@PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0AEBQEAUHWND__@@@Z @ 0x18001F304 (--$Start@PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0AEBQEAU.c)
 *     ??$Start@PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001F3D8 (--$Start@PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 *     ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001F4A8 (--$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 *     ??$Start@PEBGPEBGI@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAI@Z @ 0x18001FB70 (--$Start@PEBGPEBGI@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@SA-AV01@$$QEA.c)
 *     ??$Start@PEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001FC44 (--$Start@PEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0@Z.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x18001FE50 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 *     ??$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAI$$QEA_N2AEA_N@Z @ 0x18001FF30 (--$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA-.c)
 *     ??$Start@PEBGPEBG_N@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEA_N@Z @ 0x180020120 (--$Start@PEBGPEBG_N@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA-AV.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1800201F4 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800225AC (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180025DE4 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180025F24 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18002796C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorT.c)
 *     ??$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG00@Z @ 0x180027A50 (--$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG00@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180028150 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002B68C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002C8A0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __scrt_fastfail @ 0x18002EC8C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return _o_memset(a1, Val, Size);
}
