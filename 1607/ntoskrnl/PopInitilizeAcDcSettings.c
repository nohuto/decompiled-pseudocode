/*
 * XREFs of PopInitilizeAcDcSettings @ 0x140139B7C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F853C (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 0LL, 4LL, &v2);
  v2 = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 1LL, 4LL, &v2);
  v0 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(0x80u);
    PopSetNotificationWork(0x20u);
  }
}
