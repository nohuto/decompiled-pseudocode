/*
 * XREFs of PopThermalPowerSettingCallback @ 0x140131A74
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670654 (PopThermalZoneUpdateCoolingPolicy.c)
 */

__int64 __fastcall PopThermalPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v6; // r9
  int v7; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalLock);
  v6 = *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_SYSTEM_COOLING_POLICY.Data4 - a1[1];
  if ( v6 || a3 != 4 )
  {
    v7 = dword_140303E48;
  }
  else
  {
    v7 = *a2;
    dword_140303E48 = *a2;
  }
  if ( PopPlatformAoAc && !PopConsoleDisplayState )
    v7 = 1;
  if ( v7 != PopCoolingMode )
  {
    PopCoolingMode = v7;
    PopThermalZoneUpdateCoolingPolicy();
  }
  PopReleaseRwLock(&PopThermalLock);
  return 0LL;
}
