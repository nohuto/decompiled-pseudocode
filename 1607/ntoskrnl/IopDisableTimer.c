/*
 * XREFs of IopDisableTimer @ 0x1401C4A50
 * Callers:
 *     IoStopTimer @ 0x1401C931C (IoStopTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceIoTimerEvent @ 0x140225D1C (EtwTraceIoTimerEvent.c)
 */

void __fastcall IopDisableTimer(__int64 a1)
{
  BOOL v2; // ebx
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --IopTimerCount == 0;
  }
  KeReleaseSpinLock(&IopTimerLock, v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    KeCancelTimer(&IopTimer);
}
