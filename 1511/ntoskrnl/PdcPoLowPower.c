/*
 * XREFs of PdcPoLowPower @ 0x140141138
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLowPower(unsigned __int8 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  PopAcquirePolicyLock();
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH, 4LL, &v2);
  PopReleasePolicyLock();
  return 0LL;
}
