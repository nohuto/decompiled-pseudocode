/*
 * XREFs of PdcPoReportLidState @ 0x1406B76A0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  v3 = a1 != 0;
  ExNotifyCallback(ExCbPowerState, (PVOID)4, (PVOID)(a1 != 0));
  PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_CHANGE, 4u, &v3);
  return PopReleasePolicyLock();
}
