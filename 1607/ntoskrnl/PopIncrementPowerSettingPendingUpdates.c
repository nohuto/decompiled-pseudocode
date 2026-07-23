/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x140009C40
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1403F4EB0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140009D8C (PopDeepSleepSetDisengageReason.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopIncrementPowerSettingPendingUpdates(char a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  _InterlockedIncrement(&PopPendingPowerSettingUpdates);
  if ( a1 )
    ++PopPendingPowerSettingUpdatesQueued;
  if ( PopPendingPowerSettingUpdates == 1 )
  {
    PopPendingPowerSettingUpdateTime = MEMORY[0xFFFFF78000000008];
    PopDeepSleepSetDisengageReason(3LL);
  }
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v2);
}
