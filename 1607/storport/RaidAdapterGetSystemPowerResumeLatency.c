/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C0027040
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C0018A10 (RaidPowerSettingCallback.c)
 *     RaidCoalescingCallback @ 0x1C00295F0 (RaidCoalescingCallback.c)
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
