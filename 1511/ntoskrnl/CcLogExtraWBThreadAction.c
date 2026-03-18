/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1401A8C1C
 * Callers:
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1401A9C00 (CcPerfLogExtraWBThreadAction.c)
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
  return CcPerfLogExtraWBThreadAction(a1, v5, v3, v4, *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5888LL));
}
