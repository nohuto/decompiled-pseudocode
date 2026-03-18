/*
 * XREFs of KdUpdateTimeSlipEvent @ 0x1401D1844
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
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
