/*
 * XREFs of _TlgWrite @ 0x180001090
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180020F94 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180021234 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x1800217D0 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021BB8 (-StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180021D10 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x1800220D4 (-StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800239D0 (-NotifyFailure@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180023F78 (-Stop@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?ReportStopActivity@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180024258 (-ReportStopActivity@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTa.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024A2C (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
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
