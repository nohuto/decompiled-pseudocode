/*
 * XREFs of NtUserSetCoreWindow @ 0x1C010B2B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C007576C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008A368 (SetWindowSubtreeCoreWindowStatus.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, int a2)
{
  BOOL v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v9; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHWNDND(a1, &v9);
  v5 = 0;
  if ( v4 )
  {
    SetOrClrWF(a2, v9, 0xFB02u, 1);
    SetWindowSubtreeCoreWindowStatus((__int64)v9, a2);
    v5 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
