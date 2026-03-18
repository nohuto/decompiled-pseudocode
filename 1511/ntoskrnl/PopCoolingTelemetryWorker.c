/*
 * XREFs of PopCoolingTelemetryWorker @ 0x1401E9260
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1404F742C (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((__int64)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) && *(_QWORD *)(i + 136) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          LOBYTE(v1) = *((_BYTE *)j + 16);
          PopThermalUpdatePassiveTimeTracking(j + 5, v1);
          PopTraceThermalRequestPassiveHistogram(j);
        }
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
}
