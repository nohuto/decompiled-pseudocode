/*
 * XREFs of NtUserSetWindowMessageCapability @ 0x140257BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowMessageCapability(HWND a1, unsigned int a2, void *a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // ebx
  KPROCESSOR_MODE PreviousMode; // al
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v15[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v9 = ValidateHwndStrict(a1);
  if ( !v9 )
    goto LABEL_6;
  v14 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 456LL) != CurrentProcessWin32Process )
  {
    UserSetLastError(5);
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  PreviousMode = ExGetPreviousMode();
  if ( (int)UserCaptureSid(a3, PreviousMode, &v14) < 0 )
    goto LABEL_6;
  v11 = UserSetWindowMessageCapability(a1, a2, v14, a4);
  Win32FreePool(v14);
LABEL_7:
  if ( v15[0] )
    --*(_DWORD *)(v16 + 28);
  UserSessionSwitchLeaveCrit(v8);
  return v11;
}
