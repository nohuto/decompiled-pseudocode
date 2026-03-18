/*
 * XREFs of GetMonitorFlags @ 0x1C00482A0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0047D40 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0048084 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C00481A0 (TransformPointBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00482E0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0048470 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0048680 (PhysicalToLogicalDPIRect.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C00488F0 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0048930 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorFlags(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  int v2; // eax

  CurrentProcessWin32Process = a1;
  if ( !a1 )
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  v2 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( (v2 & 0x6000) != 0 )
    return (v2 & 0x2000) != 0 ? 128 : 32;
  else
    return 64LL;
}
