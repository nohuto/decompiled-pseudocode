/*
 * XREFs of ?s_MsgRoutingInfoCallback@Win32kInterop@@SAHIPEAUtagMsgRoutingInfo@@@Z @ 0x18000C780
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_MsgRoutingInfoCallback(unsigned int a1, struct tagMsgRoutingInfo *a2)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (gdwMitConfig & 4) == 0 )
    return 0LL;
  CoreUIOpenExisting(&v8);
  v5 = v8;
  if ( !v8 )
  {
    CoreUICreate(&v8);
    v5 = v8;
    if ( !v8 )
      return 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagMsgRoutingInfo *))(*(_QWORD *)v5 + 112LL))(v5, a1, a2);
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 1192, v6);
    return 0LL;
  }
  return 1LL;
}
