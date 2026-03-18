/*
 * XREFs of PopThermalTelemetryWorker @ 0x1401EE6AC
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14011A180 (PopTraceThermalZonePassiveHistogram.c)
 *     PopCoolingTelemetryWorker @ 0x1401E9260 (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1404F742C (PopThermalUpdatePassiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  __int64 i; // rdi
  __int64 v1; // rdx

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 416);
    LOBYTE(v1) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 488, v1);
    PopTraceThermalZonePassiveHistogram(i);
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  return PopOkayToQueueNextWorkItem(&unk_1402DD908);
}
