/*
 * XREFs of ExTraceTimerResolution @ 0x14052BA28
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     PoTraceSystemTimerResolution @ 0x1403E9EB0 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EA8B0 (ExAcquireTimeRefreshLock.c)
 *     PoRundownSystemTimer @ 0x14052BA80 (PoRundownSystemTimer.c)
 */

void ExTraceTimerResolution()
{
  __int64 *i; // rbx

  ExAcquireTimeRefreshLock(1u);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 206));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
