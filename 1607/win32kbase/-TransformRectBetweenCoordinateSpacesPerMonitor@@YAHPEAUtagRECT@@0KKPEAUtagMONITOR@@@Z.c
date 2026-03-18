/*
 * XREFs of ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C0058AF4
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00588F0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00B92C8 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z.c)
 * Callees:
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C0037BB0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0037DE0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0038010 (PhysicalToLogicalDPIRect.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpacesPerMonitor(
        __m128i *a1,
        struct tagRECT *a2,
        char a3,
        char a4,
        struct tagMONITOR *a5)
{
  unsigned int v8; // eax
  unsigned int v9; // eax

  v8 = MonitorFlagsFromDpiAwarenessContext(a4);
  LODWORD(a2) = LogicalToPhysicalDPIRect(a1, (__int64)a2, v8, (__int64 *)&a5);
  v9 = MonitorFlagsFromDpiAwarenessContext(a3);
  return (unsigned int)a2 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, v9, (__int64 *)&a5);
}
