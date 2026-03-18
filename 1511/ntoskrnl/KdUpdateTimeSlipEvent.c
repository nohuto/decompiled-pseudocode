/*
 * XREFs of KdUpdateTimeSlipEvent @ 0x140001BA0
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall KdUpdateTimeSlipEvent(void *a1)
{
  KIRQL v2; // di

  if ( !KdPitchDebugger )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      ObfDereferenceObjectWithTag(KdpTimeSlipEvent, 0x746C6644u);
    KdpTimeSlipEvent = a1;
    KeReleaseSpinLock(&KdpTimeSlipEventLock, v2);
  }
}
