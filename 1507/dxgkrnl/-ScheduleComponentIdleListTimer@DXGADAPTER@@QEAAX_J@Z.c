/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C001A718
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C001A158 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C001ABEC (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 2445) )
  {
    *((_BYTE *)this + 2445) = 1;
    KeSetTimer((PKTIMER)this + 40, (LARGE_INTEGER)-a2, (PKDPC)this + 41);
  }
}
