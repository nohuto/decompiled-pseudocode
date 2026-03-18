/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x14058100C
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140544120 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
    dword_140303E50 = *a2;
    if ( (unsigned int)dword_140303E50 > 0x64 )
      dword_140303E50 = 100;
    PopReleaseRwLock(&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
