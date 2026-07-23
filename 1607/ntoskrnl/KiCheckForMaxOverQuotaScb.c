/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1400CE188
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KiFindReadyThread @ 0x1400CCDFC (KiFindReadyThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CDE50 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
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
