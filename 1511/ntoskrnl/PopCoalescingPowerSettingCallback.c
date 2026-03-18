/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x14054AE3C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140530318 (PopUpdateDiskIdleTimeoutSetting.c)
 */

__int64 __fastcall PopCoalescingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  int v8; // eax

  v6 = -1073741811;
  PopAcquirePolicyLock();
  v7 = *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    PopDppeCoalescingSpindownTimeout = *a2;
    v8 = PopDppeCoalescingSpindownTimeout;
    if ( !PopDppeCoalescingSpindownTimeout )
      v8 = -1;
    if ( v8 != PopDiskCoalescingTimeout )
    {
      PopDiskCoalescingTimeout = v8;
      PopUpdateDiskIdleTimeoutSetting();
    }
    PopCheckResiliencyScenarios();
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}
