/*
 * XREFs of KiReadyDeferredReadyList @ 0x1400D3558
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x14000C7E0 (KiAbApplyWakeupBoost.c)
 *     KiAbDeferredProcessingWorker @ 0x14006BA54 (KiAbDeferredProcessingWorker.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400CABB4 (KiProcessPendingForegroundBoosts.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 */

int __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _BYTE *v6; // rdx
  int result; // eax

  v4 = *a2;
  while ( v4 )
  {
    v6 = v4 - 27;
    v4 = (_QWORD *)*v4;
    result = KiDeferredReadyThread(a1, v6, a3, a4);
  }
  return result;
}
