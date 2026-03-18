/*
 * XREFs of NtUserSetSystemTimer @ 0x1C021A790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      v9 = SetSystemTimer(v6, a2, a3, 0LL, 0);
    else
      UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
