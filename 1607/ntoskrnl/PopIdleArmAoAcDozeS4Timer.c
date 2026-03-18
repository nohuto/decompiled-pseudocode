/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14020D4E4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x140674FAC (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140675020 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleChooseDozeS4Time @ 0x14020D5AC (PopIdleChooseDozeS4Time.c)
 *     PopFilterCapabilities @ 0x1403F3CF4 (PopFilterCapabilities.c)
 *     PopIdleIsHibernateEnabled @ 0x1403F56BC (PopIdleIsHibernateEnabled.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x140672878 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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
  if ( (unsigned __int8)PopIdleIsHibernateEnabled(v3) && (unsigned __int8)PopIdleChooseDozeS4Time(&v5, &v4) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
    v2 = v4;
    if ( !byte_1403033C4 )
    {
      KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v5, 0LL, 0LL);
      v0 = 1;
      dword_1403033C8 = v2;
      byte_1403033C4 = 1;
    }
    KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
    if ( v0 )
      PopTraceSystemIdleS0LowPowerDozeTimerArmed(v2, v5);
  }
}
