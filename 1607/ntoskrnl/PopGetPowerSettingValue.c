/*
 * XREFs of PopGetPowerSettingValue @ 0x1400089A8
 * Callers:
 *     PopScanIdleList @ 0x140009938 (PopScanIdleList.c)
 *     PopBackgroundActivityPolicyCallback @ 0x140201E64 (PopBackgroundActivityPolicyCallback.c)
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 *     PopBatteryUpdateAlarms @ 0x14056DCFC (PopBatteryUpdateAlarms.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F853C (PopFindPowerSettingConfiguration.c)
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
    a3 = dword_140303E0C;
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
