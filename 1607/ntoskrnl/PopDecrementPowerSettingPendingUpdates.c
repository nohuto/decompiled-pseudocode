/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x14000A130
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1403F5FEC (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14000A1A4 (PopDeepSleepClearDisengageReason.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopDecrementPowerSettingPendingUpdates(char a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( a1 )
  {
    _InterlockedExchangeAdd(&PopPendingPowerSettingUpdates, -PopPendingPowerSettingUpdatesQueued);
    PopPendingPowerSettingUpdatesQueued = 0;
  }
  else
  {
    _InterlockedDecrement(&PopPendingPowerSettingUpdates);
  }
  if ( !PopPendingPowerSettingUpdates )
  {
    PopPendingPowerSettingUpdateTime = 0LL;
    PopDeepSleepClearDisengageReason(3LL);
  }
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v2);
}
