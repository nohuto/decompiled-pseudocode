/*
 * XREFs of PopThermalSxEntry @ 0x14011A0E0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14011A180 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyEndTracking @ 0x14011A294 (PopThermalStandbyEndTracking.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1404F742C (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopThermalSxEntry()
{
  __int64 i; // rsi
  __int64 v1; // rdx

  PopAcquirePolicyLock();
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock();
  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 416);
    LOBYTE(v1) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 488, v1);
    PopTraceThermalZonePassiveHistogram(i);
    *(_BYTE *)(i + 488) = 1;
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
