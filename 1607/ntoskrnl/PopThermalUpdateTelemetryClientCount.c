/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140144FE0
 * Callers:
 *     PopThermalZoneAdd @ 0x14056C254 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14056C5C0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14066BA80 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BC28 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[1] = -1LL;
      v2[0] = 0LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock(&PopThermalTelemetryLock);
}
