/*
 * XREFs of _MonitorFromPoint_0 @ 0x1C00024B8
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C00560F0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00566E0 (LogicalToPhysicalDPIPoint.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00A65E0 (LogicalToPhysicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C00A66C0 (PhysicalToLogicalDPIMonitorPoint.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MonitorFromPoint_0()
{
  return _MonitorFromPoint();
}
