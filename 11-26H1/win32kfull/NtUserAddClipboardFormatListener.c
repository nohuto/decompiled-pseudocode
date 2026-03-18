/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1402356C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWINDOWSTATION *v7; // rdx
  char *v8; // rsi
  int v10; // ecx
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( !v2 )
    goto LABEL_11;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v3 = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v3 + 456) != CurrentProcessWin32Process )
  {
    v4 = 5LL;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v5 + 380) & 0x800000) != 0 )
  {
    v10 = 87;
LABEL_13:
    UserSetLastError(v10);
    goto LABEL_11;
  }
  v7 = CheckClipboardAccess(v3);
  if ( !v7 )
    goto LABEL_11;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 456LL) + 656LL) != v7 )
  {
    UserSetLastError(87);
    v10 = 0;
    goto LABEL_13;
  }
  v8 = (char *)v7 + 120;
  if ( *((_QWORD *)v7 + 15) )
  {
    v12 = *((_QWORD *)v7 + 15);
    v11 = (char *)(v5 + 240);
    HMAssignmentLock(&v11, 0LL);
  }
  v11 = v8;
  v12 = v5;
  HMAssignmentLock(&v11, 0LL);
  *(_DWORD *)(v5 + 380) |= 0x800000u;
  v4 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
