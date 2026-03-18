/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140670654
 * Callers:
 *     PopThermalPowerSettingCallback @ 0x140131A74 (PopThermalPowerSettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     IoCancelIrp @ 0x1400A2054 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
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
