/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14020D310
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1403F6B18 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x140675090 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140675104 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleChooseDozeS4Time @ 0x14020D3D8 (PopIdleChooseDozeS4Time.c)
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PopIdleIsHibernateEnabled @ 0x1403F4580 (PopIdleIsHibernateEnabled.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14067295C (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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
    if ( !byte_140303304 )
    {
      KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v5, 0LL, 0LL);
      v0 = 1;
      dword_140303308 = v2;
      byte_140303304 = 1;
    }
    KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
    if ( v0 )
      PopTraceSystemIdleS0LowPowerDozeTimerArmed(v2, v5);
  }
}
