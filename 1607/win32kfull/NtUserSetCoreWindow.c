/*
 * XREFs of NtUserSetCoreWindow @ 0x1C00963F0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C006F768 (SetWindowSubtreeCoreWindowStatus.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A5B80 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v9; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHWNDND(a1, &v9);
  v5 = 0;
  if ( v4 )
  {
    SetOrClrWF(a2, v9, 64258LL, 1LL);
    SetWindowSubtreeCoreWindowStatus((__int64)v9, a2);
    v5 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
