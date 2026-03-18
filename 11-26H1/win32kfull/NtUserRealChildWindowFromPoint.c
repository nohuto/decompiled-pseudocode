/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x14008B210
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x14008BE64 (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1)
{
  tagWND *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 *v5; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = (tagWND *)ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = (__int64 *)RealChildWindowFromPoint(v2);
    if ( v5 )
      v4 = *v5;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
