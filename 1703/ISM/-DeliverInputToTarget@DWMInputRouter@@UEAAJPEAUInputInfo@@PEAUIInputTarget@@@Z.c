/*
 * XREFs of ?DeliverInputToTarget@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180014D80
 * Callers:
 *     ?DeliverInputToTarget@MPCInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800847A0 (-DeliverInputToTarget@MPCInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::DeliverInputToTarget(
        DWMInputRouter *this,
        struct InputInfo *a2,
        struct IInputTarget *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a2);
    v3 = v4;
    if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 1318, v4);
  }
  return v3;
}
