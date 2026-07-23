/*
 * XREFs of PdcPoLowPower @ 0x14014ADBC
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
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
