/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x1C0123570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetWindowIcon @ 0x1C01235D8 (_GetWindowIcon.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 WindowIcon; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(1LL);
  WindowIcon = 0LL;
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( a2 > 2 )
      UserSetLastError(87);
    else
      WindowIcon = GetWindowIcon(v5, a2);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return WindowIcon;
}
