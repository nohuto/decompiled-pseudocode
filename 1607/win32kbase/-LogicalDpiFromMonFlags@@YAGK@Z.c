/*
 * XREFs of ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C00B92AC
 * Callers:
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00B9420 (LogicalToPhysicalDPIMonitorPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalDpiFromMonFlags(char a1)
{
  if ( (a1 & 0x40) != 0 )
    return 96LL;
  else
    return *((unsigned __int16 *)gpsi + 4339);
}
