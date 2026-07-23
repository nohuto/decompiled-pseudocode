/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x140009CB0
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1403F4EB0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140009D24 (PopDeepSleepClearDisengageReason.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
