/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140201C7C
 * Callers:
 *     PopThermalTelemetryWorker @ 0x14020724C (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209C54 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14053283C (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) && *(_QWORD *)(i + 136) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32));
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
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
