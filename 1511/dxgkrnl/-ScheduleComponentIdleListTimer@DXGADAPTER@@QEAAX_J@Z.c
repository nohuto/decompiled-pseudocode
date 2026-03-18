/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00029A0
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0002AC4 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C0002C94 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 2461) )
  {
    *((_BYTE *)this + 2461) = 1;
    KeSetTimer((PKTIMER)((char *)this + 2576), (LARGE_INTEGER)-a2, (PKDPC)((char *)this + 2640));
  }
}
