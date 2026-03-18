/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406376E0 (PdcPoCurrentPdcPhase.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14063C8C8 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleChooseDozeS4Time @ 0x1401F3AE0 (PopIdleChooseDozeS4Time.c)
 *     PopIdleIsDozeS4Enabled @ 0x140457388 (PopIdleIsDozeS4Enabled.c)
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14063A6F4 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

void PopIdleArmAoAcDozeS4Timer()
{
  char v0; // bl
  KIRQL v1; // si
  unsigned int v2; // edi
  _BYTE v3[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+80h] [rbp+8h] BYREF
  __int64 v5; // [rsp+88h] [rbp+10h] BYREF

  PopFilterCapabilities(&PopCapabilities, v3);
  v0 = 0;
  if ( (unsigned __int8)PopIdleIsDozeS4Enabled(v3) && (unsigned __int8)PopIdleChooseDozeS4Time(&v5, &v4) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
    v2 = v4;
    if ( !byte_1402DEB04 )
    {
      KeSetTimer2(PopIdleAoAcDozeS4Timer, v5, 0LL, 0LL);
      v0 = 1;
      dword_1402DEB08 = v2;
      byte_1402DEB04 = 1;
    }
    KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
    if ( v0 )
      PopTraceSystemIdleS0LowPowerDozeTimerArmed(v2, v5);
  }
}
