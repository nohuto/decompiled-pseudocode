/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C000354C
 * Callers:
 *     VidSchFlushContext @ 0x1C002F270 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C0076534 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C00035A0 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(struct _KTIMER *DeferredContext)
{
  KIRQL v2; // bl

  if ( !KeCancelTimer(DeferredContext + 8) )
    KeFlushQueuedDpcs();
  v2 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, DeferredContext, 0LL, 0LL);
  KeLowerIrql(v2);
}
