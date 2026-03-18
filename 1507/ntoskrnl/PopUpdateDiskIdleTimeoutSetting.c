/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1405A6C70
 * Callers:
 *     PopHardDiskPowerSettingCallback @ 0x140598D80 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405C22C8 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopCoalescingInitialize @ 0x1407D977C (PopCoalescingInitialize.c)
 * Callees:
 *     <none>
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( PopCoalescingState )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4u, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
