/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1400D02E8
 * Callers:
 *     KiDirectSwitchThread @ 0x140052C70 (KiDirectSwitchThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005BD20 (KiSearchForNewThreadOnProcessor.c)
 *     KiSchedulerApc @ 0x1400CB720 (KiSchedulerApc.c)
 *     KiFindReadyThread @ 0x1400CEF5C (KiFindReadyThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CFFB0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D20C0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
