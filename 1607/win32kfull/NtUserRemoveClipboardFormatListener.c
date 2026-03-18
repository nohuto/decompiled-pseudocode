/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C000DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000DF40 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v4 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(v4 + 376) == CurrentProcessWin32Process )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(v6 + 288) & 1) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v6);
          v5 = 1;
        }
        else
        {
          UserSetLastError(87LL);
        }
      }
    }
    else
    {
      v5 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
