/*
 * XREFs of ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C00A650C
 * Callers:
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00A65E0 (LogicalToPhysicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C00A66C0 (PhysicalToLogicalDPIMonitorPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalDpiFromMonFlags(char a1)
{
  if ( (a1 & 0x40) != 0 )
    return 96LL;
  else
    return *((unsigned __int16 *)gpsi + 3643);
}
