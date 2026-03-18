/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140530318
 * Callers:
 *     PopHardDiskPowerSettingCallback @ 0x14053D7D0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14054AE3C (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopCoalescingInitialize @ 0x140765FF0 (PopCoalescingInitialize.c)
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
