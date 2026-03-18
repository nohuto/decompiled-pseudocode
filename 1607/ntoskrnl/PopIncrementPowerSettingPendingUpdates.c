/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x14000A0C0
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1403F5FEC (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14000A20C (PopDeepSleepSetDisengageReason.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
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
