/*
 * XREFs of PdcPoReportLidState @ 0x140637910
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
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
