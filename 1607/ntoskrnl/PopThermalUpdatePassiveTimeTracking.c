/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140532D7C
 * Callers:
 *     PopThermalSxEntry @ 0x14012503C (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x140201AA8 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x140207078 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x14066B930 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BD0C (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 16) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
