/*
 * XREFs of PdcPoLowPower @ 0x14016ED90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
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
