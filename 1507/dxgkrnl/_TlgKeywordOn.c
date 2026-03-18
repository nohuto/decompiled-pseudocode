/*
 * XREFs of _TlgKeywordOn @ 0x1C000A1C8
 * Callers:
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C002A394 (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C002A824 (TraceLoggingWriteMiracastSessionStop.c)
 *     TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C002AED4 (TraceLoggingWriteMiracastStartSessionTotalTimeMs.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00784E4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     ?RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00940F4 (-RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_.c)
 *     ?DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C0095B44 (-DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEA.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@I@Z @ 0x1C00AB910 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@I@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (keyword & qword_1C0046840) != 0 && (keyword & qword_1C0046848) == qword_1C0046848;
}
