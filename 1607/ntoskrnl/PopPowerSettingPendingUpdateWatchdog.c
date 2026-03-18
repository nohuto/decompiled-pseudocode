/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x140205788
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x14067513C (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall PopPowerSettingPendingUpdateWatchdog(unsigned __int64 a1)
{
  bool v2; // bl
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( PopPendingPowerSettingUpdateTime )
    v2 = MEMORY[0xFFFFF78000000008] - PopPendingPowerSettingUpdateTime >= a1;
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v3);
  return v2;
}
