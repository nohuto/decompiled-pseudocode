/*
 * XREFs of _TlgWrite @ 0x180004560
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x180006FA8 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x1800070E4 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180007270 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800073F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18006D914 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18006ECD0 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18006F484 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18006F61C (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18006FB84 (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x18006FC54 (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18006FD60 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180070B0C (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180070BE0 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073984 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073AB4 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073BE4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073D14 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800756EC (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180075D20 (-NotifyFailure@-$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18009EB18 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
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
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v9[2] = *(_DWORD *)((char *)pEventMetadata + 3);
  v9[3] = *(_DWORD *)((char *)pEventMetadata + 7);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, LPCGUID, LPCGUID, UINT32, EVENT_DATA_DESCRIPTOR *))EtwEventWriteTransfer)(
           *((_QWORD *)hProvider + 4),
           v9,
           pActivityId,
           pRelatedActivityId,
           cData,
           pData);
}
