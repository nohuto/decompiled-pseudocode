/*
 * XREFs of IopEnableTimer @ 0x1401C4C54
 * Callers:
 *     IoStartTimer @ 0x1401C92F8 (IoStartTimer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400EFC00 (KeSetCoalescableTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceIoTimerEvent @ 0x140225D1C (EtwTraceIoTimerEvent.c)
 */

void __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di
  int v3; // edx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    v3 = IopTimerCount;
    if ( !IopTimerCount )
    {
      KeSetCoalescableTimer(&IopTimer, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &IopTimerDpc);
      v3 = IopTimerCount;
    }
    IopTimerCount = v3 + 1;
    *(_WORD *)(a1 + 2) = 1;
  }
  KeReleaseSpinLock(&IopTimerLock, v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
}
