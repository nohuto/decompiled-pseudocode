/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x1C014AFC0
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x1C014B020 (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rax

  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v5 )
  {
    v9 = (__int64 *)ChildWindowFromPointEx(v5, a2, a3);
    if ( v9 )
      v8 = *v9;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
