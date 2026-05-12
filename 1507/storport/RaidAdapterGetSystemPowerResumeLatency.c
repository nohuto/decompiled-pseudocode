/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C00214BC
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C00236F0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0024730 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
