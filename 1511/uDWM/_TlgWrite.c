/*
 * XREFs of _TlgWrite @ 0x18003E74C
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x18000FD84 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x18000FEC0 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000FF70 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800100F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180041054 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800759BC (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180076E90 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800776BC (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180077854 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180077DBC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180077E8C (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180077F90 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078DA4 (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180078E80 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BB54 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BC84 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BDB4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BEE4 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18007D77C (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007DD60 (-NotifyFailure@-$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
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
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v10 = *(_QWORD *)((char *)pEventMetadata + 3);
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
