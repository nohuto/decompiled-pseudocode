/*
 * XREFs of EditionGetCurrentMonitorTopology @ 0x14025FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x14015FD84 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 */

struct CMonitorTopology *__fastcall EditionGetCurrentMonitorTopology(struct CMonitorTopology **a1, __int64 a2)
{
  struct CMonitorTopology *result; // rax

  result = CTopologyManager::GetCurrent((__int64)a1, a2);
  *a1 = result;
  return result;
}
