/*
 * XREFs of NtUserSetCoreWindow @ 0x1C00FF600
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C005CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0085A44 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, int a2)
{
  BOOL v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v9; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
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
