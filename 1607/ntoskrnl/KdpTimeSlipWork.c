/*
 * XREFs of KdpTimeSlipWork @ 0x1406F3064
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EA8B0 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1404D08F4 (ExReleaseTimeRefreshLock.c)
 */

__int64 KdpTimeSlipWork()
{
  KIRQL v0; // bl

  if ( ExAcquireTimeRefreshLock(0) )
  {
    ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    v0 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      KeSetEvent((PRKEVENT)KdpTimeSlipEvent, 0, 0);
    KeReleaseSpinLock(&KdpTimeSlipEventLock, v0);
  }
  return KiSetTimerEx((__int64)&KdpTimeSlipTimer, -1800000000LL, 0, 0, (__int64)&KdpTimeSlipDpc);
}
