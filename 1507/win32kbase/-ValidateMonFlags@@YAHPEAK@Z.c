/*
 * XREFs of ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C001116C
 * Callers:
 *     OriginFromMonFlags @ 0x1C0011130 (OriginFromMonFlags.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00A64E0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00A65E0 (LogicalToPhysicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C00A66C0 (PhysicalToLogicalDPIMonitorPoint.c)
 * Callees:
 *     GetMonitorFlags @ 0x1C00560B0 (GetMonitorFlags.c)
 */

__int64 __fastcall ValidateMonFlags(unsigned int *a1)
{
  if ( (*a1 & 0xE0) == 0 )
    *a1 |= GetMonitorFlags(0LL);
  if ( (*a1 & 3) == 0 )
    *a1 |= 2u;
  return ((unsigned __int8)~*(_BYTE *)a1 >> 5) & 1;
}
