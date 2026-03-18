/*
 * XREFs of ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C00488F0
 * Callers:
 *     OriginFromMonFlags @ 0x1C00480F0 (OriginFromMonFlags.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0048470 (LogicalToPhysicalDPIRect.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00AACC0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00AADC0 (LogicalToPhysicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C00AAEA0 (PhysicalToLogicalDPIMonitorPoint.c)
 * Callees:
 *     GetMonitorFlags @ 0x1C00482A0 (GetMonitorFlags.c)
 */

__int64 __fastcall ValidateMonFlags(unsigned int *a1)
{
  if ( (*a1 & 0xE0) == 0 )
    *a1 |= GetMonitorFlags(0LL);
  if ( (*a1 & 3) == 0 )
    *a1 |= 2u;
  return ((unsigned __int8)~*(_BYTE *)a1 >> 5) & 1;
}
