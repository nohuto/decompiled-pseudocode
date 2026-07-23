/*
 * XREFs of PdcPoReportLidState @ 0x14066FC94
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  PopLidOpened = a1;
  v3 = a1 != 0;
  ExNotifyCallback(ExCbPowerState, (PVOID)4, (PVOID)(a1 != 0));
  PopSetPowerSettingValueAcDc((__int64)&GUID_LIDSWITCH_STATE_CHANGE, 4u, (__int64)&v3);
  return PopReleasePolicyLock();
}
