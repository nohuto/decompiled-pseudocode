/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x14054B364
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopEsWorkItemSchedule @ 0x14050CF68 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((__int64)&PopEsLock);
    dword_1402DE2D0 = *a2;
    if ( (unsigned int)dword_1402DE2D0 > 0x64 )
      dword_1402DE2D0 = 100;
    PopReleaseRwLock((signed __int64 *)&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
