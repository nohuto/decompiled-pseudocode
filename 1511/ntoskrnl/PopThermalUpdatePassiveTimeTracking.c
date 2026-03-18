/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x1404F742C
 * Callers:
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x1401E9260 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140633354 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140633730 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
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
