/*
 * XREFs of ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0048084
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0047D40 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z @ 0x1C00842D0 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z.c)
 * Callees:
 *     GetMonitorFlags @ 0x1C00482A0 (GetMonitorFlags.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0048470 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0048680 (PhysicalToLogicalDPIRect.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpacesPerMonitor(
        struct tagRECT *a1,
        struct tagRECT *a2,
        struct tagPROCESSINFO *a3,
        struct tagPROCESSINFO *a4,
        struct tagMONITOR *a5)
{
  unsigned int MonitorFlags; // eax
  unsigned int v9; // eax

  MonitorFlags = GetMonitorFlags(a4);
  LODWORD(a2) = LogicalToPhysicalDPIRect(a1, a2, MonitorFlags, &a5);
  v9 = GetMonitorFlags(a3);
  return (unsigned int)a2 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, v9, &a5);
}
