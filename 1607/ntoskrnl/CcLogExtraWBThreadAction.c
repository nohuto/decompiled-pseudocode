/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1401B1630
 * Callers:
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1401B2944 (CcPerfLogExtraWBThreadAction.c)
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
  return CcPerfLogExtraWBThreadAction(a1, v5, v3, v4, *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL));
}
