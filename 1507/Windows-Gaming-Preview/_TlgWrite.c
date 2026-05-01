/*
 * XREFs of _TlgWrite @ 0x1800010DC
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180020014 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800202B4 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020870 (-StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180020CA8 (-StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020E00 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021214 (-StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180021360 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021774 (-StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ @ 0x1800218C0 (-NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ.c)
 *     ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x1800239BC (-Stop@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$0A@$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180023B30 (-NotifyFailure@-$ActivityBase@$0A@$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ??$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z @ 0x18002442C (--$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024578 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
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
