/*
 * XREFs of ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0055EDC
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z @ 0x1C0069970 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z.c)
 * Callees:
 *     GetMonitorFlags @ 0x1C00560B0 (GetMonitorFlags.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0056280 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0056470 (PhysicalToLogicalDPIRect.c)
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
