/*
 * XREFs of ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C00F12D0
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C00F122C (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_ValidateMonitorOrientation(DXGMONITOR *this, int a2)
{
  if ( *((char *)this + 24) < 0 )
    return a2 == 0;
  else
    return (a2 & 0xFFFFFFFD) == 0;
}
