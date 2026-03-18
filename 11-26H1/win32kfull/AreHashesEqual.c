/*
 * XREFs of AreHashesEqual @ 0x140160474
 * Callers:
 *     ?AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z @ 0x14015BB74 (-AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z.c)
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401603D8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     ?ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z @ 0x140212E70 (-ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z.c)
 *     ?ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z @ 0x140260044 (-ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreHashesEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20;
}
