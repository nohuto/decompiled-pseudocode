/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x14002A6EC
 * Callers:
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiFindReadyThread @ 0x140096A08 (KiFindReadyThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 392);
    if ( !a1 )
      return 0;
  }
  return 1;
}
