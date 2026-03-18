/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x140047B10
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x140047B90 (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1)
{
  struct tagWND *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 *v5; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = (__int64 *)ChildWindowFromPointEx(v2);
    if ( v5 )
      v4 = *v5;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
