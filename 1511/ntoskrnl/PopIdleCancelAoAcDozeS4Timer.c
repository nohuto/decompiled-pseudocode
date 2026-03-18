/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x140107AA0
 * Callers:
 *     PopIdleGlobalUserPresenceCallback @ 0x1404F32A4 (PopIdleGlobalUserPresenceCallback.c)
 *     PdcPoCurrentPdcPhase @ 0x1406376E0 (PdcPoCurrentPdcPhase.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14063C8C8 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x14063A7A4 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_1402DEB04 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    byte_1402DEB04 = 0;
    v2 = 1;
  }
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
