/*
 * XREFs of PopOrphanCoolingExtension @ 0x14066BD0C
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x14066BA0C (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140145550 (PopThermalUpdateTelemetryClientCount.c)
 *     PopGetDope @ 0x1401455C4 (PopGetDope.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209A80 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x14052E238 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140532D7C (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopOrphanCoolingExtension(unsigned __int64 *a1)
{
  __int64 i; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 **v4; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive(a1 + 4);
  if ( a1[6] )
  {
    for ( i = a1[2]; (unsigned __int64 *)i != a1 + 2; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 18) )
      {
        *(_BYTE *)(i + 18) = 0;
        if ( a1[17] )
        {
          PopThermalUpdatePassiveTimeTracking(i + 40, *(_BYTE *)(i + 16));
          PopTraceThermalRequestPassiveHistogram(i);
          PopThermalUpdateTelemetryClientCount(0);
        }
        PopDiagTraceThermalRequest(i, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
      }
    }
    *(_QWORD *)(PopGetDope(a1[6]) + 64) = 0LL;
    v3 = *a1;
    v4 = (unsigned __int64 **)a1[1];
    if ( *(unsigned __int64 **)(*a1 + 8) != a1 || *v4 != a1 )
      __fastfail(3u);
    *v4 = (unsigned __int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((signed __int64 *)a1 + 4);
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
