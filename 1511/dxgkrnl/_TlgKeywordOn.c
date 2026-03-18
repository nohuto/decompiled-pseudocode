/*
 * XREFs of _TlgKeywordOn @ 0x1C000AC10
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0029FFC (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C002A48C (TraceLoggingWriteMiracastSessionStop.c)
 *     TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C002AB3C (TraceLoggingWriteMiracastStartSessionTotalTimeMs.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@II@Z @ 0x1C00AC884 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@II@Z.c)
 *     ?RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00D5BBC (-RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00D6934 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     ?DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00DB16C (-DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEA.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00E1F1C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (keyword & qword_1C0046840) != 0 && (keyword & qword_1C0046848) == qword_1C0046848;
}
