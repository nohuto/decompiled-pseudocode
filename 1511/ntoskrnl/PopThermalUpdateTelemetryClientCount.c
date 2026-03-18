/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140142C6C
 * Callers:
 *     PopThermalZoneAdd @ 0x14054C0D8 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14054C3E0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140633730 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((__int64)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[1] = -1LL;
      v2[0] = 0LL;
      KeSetTimer2(PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((signed __int64 *)&PopThermalTelemetryLock);
}
