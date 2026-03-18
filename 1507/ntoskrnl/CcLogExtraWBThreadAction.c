/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1401DC9D8
 * Callers:
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1401DE570 (CcPerfLogExtraWBThreadAction.c)
 */

__int64 __fastcall CcLogExtraWBThreadAction(int a1)
{
  KIRQL v2; // al
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v2 = KeAcquireQueuedSpinLock(5uLL);
  v3 = CcGlobalDirtyPageStatistics;
  v4 = CcGlobalDirtyPageThresholds;
  v5 = CcActiveExtraWriteBehindThreads;
  KeReleaseQueuedSpinLock(5uLL, v2);
  return CcPerfLogExtraWBThreadAction(a1, v5, v3, v4, *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5504LL));
}
