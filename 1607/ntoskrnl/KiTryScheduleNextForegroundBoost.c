/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x1400F2E64
 * Callers:
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 && *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 2) == 0 )
    KiScheduleNextForegroundBoost(a1);
}
