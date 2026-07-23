/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140670738
 * Callers:
 *     PopThermalPowerSettingCallback @ 0x140131FE4 (PopThermalPowerSettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 */

void PopThermalZoneUpdateCoolingPolicy()
{
  __int64 i; // rdi

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 416));
    IoCancelIrp(*(PIRP *)(i + 56));
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
}
