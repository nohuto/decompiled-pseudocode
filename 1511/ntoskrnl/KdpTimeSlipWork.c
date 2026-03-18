/*
 * XREFs of KdpTimeSlipWork @ 0x1406AC880
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403A6728 (ExUpdateSystemTimeFromCmos.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1404C48E4 (ExReleaseTimeRefreshLock.c)
 */

BOOLEAN KdpTimeSlipWork()
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
  return KeSetTimer(&KdpTimeSlipTimer, (LARGE_INTEGER)-1800000000LL, &KdpTimeSlipDpc);
}
