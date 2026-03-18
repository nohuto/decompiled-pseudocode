/*
 * XREFs of EngMulDiv @ 0x1C0038200
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0037CB0 (PhysicalToLogicalDPIMonitorPoint.c)
 *     ScaleDPIRect @ 0x1C0037F30 (ScaleDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0038010 (PhysicalToLogicalDPIRect.c)
 *     InitLoadResources @ 0x1C0056CFC (InitLoadResources.c)
 *     NtUserGetDpiForMonitor @ 0x1C0057FA0 (NtUserGetDpiForMonitor.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0059178 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     ScaleDPIPt @ 0x1C00B9538 (ScaleDPIPt.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C30E0 (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v3; // r10d
  int v4; // r9d
  unsigned __int64 v5; // rax

  v3 = c;
  v4 = 1;
  if ( a < 0 )
  {
    v4 = -1;
    a = -a;
  }
  if ( b < 0 )
  {
    v4 = -v4;
    b = -b;
  }
  if ( !c )
    goto LABEL_11;
  if ( c < 0 )
  {
    v4 = -v4;
    v3 = -c;
  }
  v5 = (b * (__int64)a + v3 / 2) / v3;
  if ( v5 <= 0x7FFFFFFF )
  {
    if ( v4 <= 0 )
      LODWORD(v5) = -(int)v5;
  }
  else
  {
LABEL_11:
    LODWORD(v5) = 0x80000000;
    if ( v4 > 0 )
      LODWORD(v5) = 0x7FFFFFFF;
  }
  return v5;
}
