/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C000E0A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v11; // rcx

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v4 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v4 + 376) != CurrentProcessWin32Process )
  {
    v5 = 5;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v6 + 288) & 1) != 0 )
  {
    v11 = 87LL;
LABEL_13:
    UserSetLastError(v11);
    goto LABEL_9;
  }
  v3 = CheckClipboardAccess();
  if ( !v3 )
    goto LABEL_9;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL) + 632LL) != v3 )
  {
    UserSetLastError(87LL);
    v11 = 0LL;
    goto LABEL_13;
  }
  v8 = v3 + 120;
  v9 = *(_QWORD *)(v3 + 120);
  if ( v9 )
    HMAssignmentLock(v6 + 280, v9);
  HMAssignmentLock(v8, v6);
  *(_DWORD *)(v6 + 288) |= 1u;
  v5 = 1;
LABEL_9:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
