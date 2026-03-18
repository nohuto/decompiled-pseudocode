/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C0220CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C0239014 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 384LL) != PsGetCurrentProcessWin32Process(v6) )
    {
      v9 = 5;
LABEL_14:
      UserSetLastError(v9);
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(v8 + 88);
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1080LL) & 0x40000) != 0 )
      v8 = *(_QWORD *)(v8 + 88);
    if ( !(unsigned int)IsTopLevelWindow(v8) || a2 && (a2 & 1) == 0 )
    {
      v9 = 87;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity((struct tagWND *)v8) )
    {
      v9 = 8;
      goto LABEL_14;
    }
    v7 = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
