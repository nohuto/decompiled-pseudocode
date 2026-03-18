/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140565CEC
 * Callers:
 *     PopThermalSxEntry @ 0x14014822C (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x14023690C (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x14023CB00 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1406B1EC4 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406B296C (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
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
    v2 = 20;
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
