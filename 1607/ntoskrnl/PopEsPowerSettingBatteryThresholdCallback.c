/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x1405814B8
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140544660 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
    dword_140303D90 = *a2;
    if ( (unsigned int)dword_140303D90 > 0x64 )
      dword_140303D90 = 100;
    PopReleaseRwLock(&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
