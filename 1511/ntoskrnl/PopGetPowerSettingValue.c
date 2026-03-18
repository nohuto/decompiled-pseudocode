/*
 * XREFs of PopGetPowerSettingValue @ 0x1400F0410
 * Callers:
 *     PopScanIdleList @ 0x1400990D8 (PopScanIdleList.c)
 *     PopBatteryUpdateAlarms @ 0x14053DF34 (PopBatteryUpdateAlarms.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x1404493B4 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 PowerSettingConfiguration; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ecx

  ExAcquireFastMutex(&PopSettingLock);
  if ( a3 > 1 )
    a3 = dword_1402DE28C;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( PowerSettingConfiguration && (v11 = *(_QWORD *)(PowerSettingConfiguration + 8LL * (int)a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( v12 > 4 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(v11 + 12), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v10;
}
