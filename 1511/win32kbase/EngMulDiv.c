/*
 * XREFs of EngMulDiv @ 0x1C0048860
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C0047150 (NtUserGetDpiForMonitor.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C004812C (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00482E0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0048470 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0048680 (PhysicalToLogicalDPIRect.c)
 *     ScaleDPIRect @ 0x1C0048E30 (ScaleDPIRect.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     InitLoadResources @ 0x1C006B5DC (InitLoadResources.c)
 *     ScaleDPIPt @ 0x1C00AAF78 (ScaleDPIPt.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B7BC8 (-vMakeIso@DC@@QEAAXXZ.c)
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
