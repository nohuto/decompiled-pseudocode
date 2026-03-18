/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x14002A78C
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  int v1; // eax

  LOBYTE(v1) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1498LL);
  if ( (_BYTE)v1 == 2 && *(char *)(a1 + 195) < 16 )
  {
    v1 = *(_DWORD *)(a1 + 120);
    if ( (v1 & 2) == 0 )
      LOBYTE(v1) = KiScheduleNextForegroundBoost();
  }
  return v1;
}
