/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x140091FA4
 * Callers:
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140456D10 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopDecrementPowerSettingPendingUpdates(char a1)
{
  KIRQL v2; // dl

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
    PopPendingPowerSettingUpdateTime = 0LL;
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v2);
}
