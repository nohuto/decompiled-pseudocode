/*
 * XREFs of NtUserCallTwoParam @ 0x1C005BBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallTwoParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx

  v4 = a3;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v4 - 128) > 0x12 )
    v8 = 0LL;
  else
    v8 = ((__int64 (__fastcall *)(__int64, __int64))apfnSimpleCall[v4])(a1, a2);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
