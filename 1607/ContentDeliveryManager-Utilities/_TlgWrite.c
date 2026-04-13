/*
 * XREFs of _TlgWrite @ 0x1800011F0
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18001C4A4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18001C744 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001CD60 (-StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18001D290 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001D470 (-StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18001D888 (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001DA60 (-StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@M.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18001DE78 (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800237C0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAA.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180023E18 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_Tl.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180023FB0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800245D8 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180025F28 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180029F84 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180029FD8 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800324C0 (--$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ??$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800325F8 (--$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeli.c)
 *     ?StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180033F20 (-StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgrou.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x180034338 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXII@Z @ 0x18003446C (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180036710 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopActivity@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003B6B0 (-StopActivity@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Backgr.c)
 *     ?StartActivity@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBG0@Z @ 0x18003BAC8 (-StartActivity@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Backg.c)
 *     ?StopActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003BC90 (-StopActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Bac.c)
 *     ?StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBG0@Z @ 0x18003C0A8 (-StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Ba.c)
 *     ?StopActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003C270 (-StopActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI_N@Z @ 0x18003C688 (-StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 *     ?StopActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003C830 (-StopActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 *     ?StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI@Z @ 0x18003CC48 (-StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDe.c)
 *     ?StopActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003CDE0 (-StopActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG_N1@Z @ 0x18003D1F8 (-StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Con.c)
 *     ?StopActivity@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003D3B0 (-StopActivity@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@Con.c)
 *     ?StartActivity@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003D7C8 (-StartActivity@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?StopActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003D950 (-StopActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?StartActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003DD68 (-StartActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ?StopActivity@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003DEF0 (-StopActivity@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background.c)
 *     ?StartActivity@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003E2DC (-StartActivity@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Backgroun.c)
 *     ?StopActivity@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003E460 (-StopActivity@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 *     ?StartActivity@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG_N1@Z @ 0x18003E878 (-StartActivity@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDe.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041564 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180041860 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_180041860.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$AppServiceConnectionStatus@HAEAI@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX$$QEAHAEAI@Z @ 0x180042D00 (--$AppServiceConnectionStatus@HAEAI@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryM.c)
 *     ??$AppServiceResponseStatus@HAEAI@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX$$QEAHAEAI@Z @ 0x180042EAC (--$AppServiceResponseStatus@HAEAI@RequestSubscribedContentFromAppServiceActivity@ContentDelivery.c)
 *     ??$SubscribedContentFileTokensRedeemed@PEBGPEBG_NAEAI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG0$$QEA_NAEAI@Z @ 0x1800431F4 (--$SubscribedContentFileTokensRedeemed@PEBGPEBG_NAEAI@ContentDeliveryManagerTelemetry@Background.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180043C9C (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
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
