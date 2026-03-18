/*
 * XREFs of ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00AACC0
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C00482E0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0048470 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0048680 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0048930 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C00488F0 (-ValidateMonFlags@@YAHPEAK@Z.c)
 */

__int64 __fastcall DpiAwarenessFromMonitorFlags(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  ValidateMonFlags(&v2);
  if ( (v2 & 0x40) != 0 )
    return 0LL;
  else
    return 2 - (unsigned int)((v2 & 0x80u) != 0);
}
