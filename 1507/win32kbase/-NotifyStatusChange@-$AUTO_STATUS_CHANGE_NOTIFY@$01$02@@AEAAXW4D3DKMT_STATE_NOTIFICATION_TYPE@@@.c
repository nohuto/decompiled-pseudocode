/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0017D64
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = *a1;
  v4 = a2;
  result = ((__int64 (__fastcall *)(int *))qword_1C0101480)(&v4);
  if ( (int)result < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v3);
  }
  return result;
}
