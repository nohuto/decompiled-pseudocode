/*
 * XREFs of PopThermalTraceRundownEvents @ 0x1401EE73C
 * Callers:
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1401F07E8 (PopDiagTraceThermalZoneRundown.c)
 */

void PopThermalTraceRundownEvents()
{
  __int64 i; // rbx
  char v1; // al

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    v1 = *(_BYTE *)(i + 65);
    if ( (v1 & 2) != 0 )
      PopDiagTraceThermalZoneRundown(
        *(PDEVICE_OBJECT *)(i + 48),
        v1 & 1,
        *(_DWORD *)(i + 80),
        *(_BYTE *)(i + 72),
        *(_BYTE *)(i + 73));
  }
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
