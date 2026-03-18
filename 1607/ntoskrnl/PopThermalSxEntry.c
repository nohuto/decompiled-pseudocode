/*
 * XREFs of PopThermalSxEntry @ 0x140124ACC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140124B6C (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyEndTracking @ 0x140124C80 (PopThermalStandbyEndTracking.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14053283C (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopThermalSxEntry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 i; // rsi
  __int64 v4; // rdx

  PopAcquirePolicyLock();
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock(v1, v0, v2);
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 416));
    LOBYTE(v4) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 488, v4);
    PopTraceThermalZonePassiveHistogram(i);
    *(_BYTE *)(i + 488) = 1;
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
}
