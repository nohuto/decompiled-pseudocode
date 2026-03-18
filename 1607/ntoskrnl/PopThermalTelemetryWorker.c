/*
 * XREFs of PopThermalTelemetryWorker @ 0x14020724C
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140124B6C (PopTraceThermalZonePassiveHistogram.c)
 *     PopCoolingTelemetryWorker @ 0x140201C7C (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14053283C (PopThermalUpdatePassiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  __int64 i; // rdi
  __int64 v1; // rdx

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 416));
    LOBYTE(v1) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 488, v1);
    PopTraceThermalZonePassiveHistogram(i);
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  return PopOkayToQueueNextWorkItem(&unk_140302EC8);
}
