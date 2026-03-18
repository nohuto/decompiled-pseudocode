/*
 * XREFs of KiReadyDeferredReadyList @ 0x14007DD80
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140031F04 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x140032408 (KiAbApplyWakeupBoost.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiProcessPendingForegroundBoosts @ 0x140095818 (KiProcessPendingForegroundBoosts.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2)
{
  _QWORD *i; // rbx
  _QWORD *v4; // rdx
  __int64 result; // rax

  for ( i = *a2; i; result = KiDeferredReadyThread(a1, v4) )
  {
    v4 = i - 27;
    i = (_QWORD *)*i;
  }
  return result;
}
