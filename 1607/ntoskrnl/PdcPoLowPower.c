/*
 * XREFs of PdcPoLowPower @ 0x14014A84C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F5BE4 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLowPower(unsigned __int8 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  PopAcquirePolicyLock();
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH, 4LL, &v5);
  PopReleasePolicyLock(v2, v1, v3);
  return 0LL;
}
