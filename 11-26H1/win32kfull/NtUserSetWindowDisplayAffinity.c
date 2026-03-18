/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1401FEFE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     SetDisplayAffinity @ 0x1401FF0D8 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 DesktopWindow; // rax
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL) == v9 )
    {
      v10 = *(_QWORD *)(v7 + 104);
      if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1360LL) & 0x40000) != 0 )
        v7 = *(_QWORD *)(v7 + 104);
      if ( *(_QWORD *)(v7 + 104)
        && (DesktopWindow = GetDesktopWindow(v7), v13 == DesktopWindow)
        && (!a2 || (a2 & 0x11) != 0) )
      {
        if ( (unsigned int)SetDisplayAffinity(v12) )
        {
          v6 = 1LL;
          goto LABEL_12;
        }
        v14 = 8;
      }
      else
      {
        v14 = 87;
      }
    }
    else
    {
      v14 = 5;
    }
    UserSetLastError(v14);
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
