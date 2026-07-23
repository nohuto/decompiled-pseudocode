/*
 * XREFs of KiReadyDeferredReadyList @ 0x1400D13F8
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x14000C360 (KiAbApplyWakeupBoost.c)
 *     KiAbDeferredProcessingWorker @ 0x14006B5D4 (KiAbDeferredProcessingWorker.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400C8A54 (KiProcessPendingForegroundBoosts.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
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
