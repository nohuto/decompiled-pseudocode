/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140638208
 * Callers:
 *     PopThermalPowerSettingCallback @ 0x140126CDC (PopThermalPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 */

void PopThermalZoneUpdateCoolingPolicy()
{
  __int64 i; // rdi

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 416);
    IoCancelIrp(*(PIRP *)(i + 56));
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
