/*
 * XREFs of EngMulDiv @ 0x1C0056650
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C000DAD0 (NtUserGetDpiForMonitor.c)
 *     ScaleDPIRect @ 0x1C0055D90 (ScaleDPIRect.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0055F40 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00560F0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0056280 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0056470 (PhysicalToLogicalDPIRect.c)
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 *     InitLoadResources @ 0x1C00594A8 (InitLoadResources.c)
 *     ScaleDPIPt @ 0x1C00A6798 (ScaleDPIPt.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B5598 (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v3; // r9d
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // rax

  v3 = b;
  v4 = 1;
  if ( a < 0 )
  {
    v4 = -1;
    a = -a;
  }
  if ( b < 0 )
  {
    v4 = -v4;
    v3 = -b;
  }
  if ( !c )
    goto LABEL_15;
  if ( c < 0 )
  {
    v4 = -v4;
    c = -c;
  }
  v5 = c;
  v6 = c / 2 + v3 * (__int64)a;
  v7 = v5 == 96 ? v6 / 96 : v6 / v5;
  if ( v7 <= 0x7FFFFFFF )
  {
    if ( v4 <= 0 )
      LODWORD(v7) = -(int)v7;
  }
  else
  {
LABEL_15:
    LODWORD(v7) = 0x80000000;
    if ( v4 > 0 )
      LODWORD(v7) = 0x7FFFFFFF;
  }
  return v7;
}
