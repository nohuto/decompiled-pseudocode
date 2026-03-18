/*
 * XREFs of PopInitilizeAcDcSettings @ 0x14015F24C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // di
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *PowerSettingConfiguration; // rax
  unsigned __int8 v6; // bl
  signed __int32 v7; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 0LL, 4LL, &v8);
  v8 = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 1LL, 4LL, &v8);
  v0 = 0;
  v2 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v1);
  v3 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  qword_14032EFE8 = 0LL;
  v6 = dword_14032F010;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v7 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v7);
  __writecr8(v6);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(0x80u);
    PopSetNotificationWork(0x20u);
  }
}
