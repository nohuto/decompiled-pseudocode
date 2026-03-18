/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x140091F48
 * Callers:
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140456D10 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopIncrementPowerSettingPendingUpdates(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  _InterlockedIncrement(&PopPendingPowerSettingUpdates);
  if ( a1 )
    ++PopPendingPowerSettingUpdatesQueued;
  if ( PopPendingPowerSettingUpdates == 1 )
    PopPendingPowerSettingUpdateTime = MEMORY[0xFFFFF78000000008];
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v2);
}
