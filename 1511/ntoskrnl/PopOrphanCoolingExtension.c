/*
 * XREFs of PopOrphanCoolingExtension @ 0x140633730
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x140633430 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x14013F194 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1404F742C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x14054E6B4 (PopDiagTraceThermalRequest.c)
 */

void __fastcall PopOrphanCoolingExtension(signed __int64 *a1)
{
  __int64 i; // rbx
  signed __int64 v3; // rcx
  signed __int64 **v4; // rax

  PopAcquireRwLockExclusive((__int64)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((__int64)(a1 + 4));
  if ( a1[6] )
  {
    for ( i = a1[2]; (signed __int64 *)i != a1 + 2; i = *(_QWORD *)i )
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
    v4 = (signed __int64 **)a1[1];
    if ( *(signed __int64 **)(*a1 + 8) != a1 || *v4 != a1 )
      __fastfail(3u);
    *v4 = (signed __int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock(a1 + 4);
  PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
}
