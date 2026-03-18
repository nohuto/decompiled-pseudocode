/*
 * XREFs of MonitorFlagsFromDpiAwarenessContext @ 0x1C0037BB0
 * Callers:
 *     LogicalToPhysicalDPIPoint @ 0x1C0035330 (LogicalToPhysicalDPIPoint.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0037B00 (TransformPointBetweenCoordinateSpaces.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00588F0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C0058AF4 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFlagsFromDpiAwarenessContext(char a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx

  v1 = 0;
  v2 = a1 & 0xF;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 32;
    }
    else
    {
      return 128;
    }
  }
  else
  {
    return 64;
  }
  return v1;
}
