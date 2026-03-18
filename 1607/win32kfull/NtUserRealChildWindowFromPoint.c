/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x1C0218930
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1C0233B2C (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rax

  EnterSharedCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v6 = 0LL;
  if ( v3 )
  {
    v7 = (__int64 *)RealChildWindowFromPoint(v3, a2);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
