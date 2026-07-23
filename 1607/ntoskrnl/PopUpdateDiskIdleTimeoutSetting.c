/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14056F8AC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140205380 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x14056DBF8 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140580E08 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x1407B2BF4 (PopCoalescingInitialize.c)
 * Callees:
 *     <none>
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc((__int64)&GUID_DISK_IDLE_TIMEOUT, 4u, (__int64)&PopCurrentDiskIdleTimeout);
  }
  return result;
}
