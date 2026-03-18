/*
 * XREFs of ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00B91F4
 * Callers:
 *     LogicalToPhysicalDPIPoint @ 0x1C0035330 (LogicalToPhysicalDPIPoint.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0037BE0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0037DE0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0038010 (PhysicalToLogicalDPIRect.c)
 * Callees:
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 */

__int64 __fastcall DpiAwarenessContextFromMonitorFlags(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  ValidateMonFlags(&v2);
  if ( (v2 & 0x40) != 0 )
    return 16LL;
  else
    return 18 - (unsigned int)((v2 & 0x80u) != 0);
}
