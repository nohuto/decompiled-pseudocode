/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x1401121A4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x14052E89C (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x140674FAC (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140675020 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x140672928 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_1403033C4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    byte_1403033C4 = 0;
    v2 = 1;
  }
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
