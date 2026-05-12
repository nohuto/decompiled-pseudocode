/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C0023C38
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C0025B50 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0026BB0 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( *(char *)(a1 + 108) >= 0 )
    return 3LL;
  else
    return 2 - (unsigned int)((*(_BYTE *)(a1 + 109) & 1) != 0);
}
