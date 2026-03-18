/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C00CED60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00734FC (LockProcessByClientId.c)
 *     GetDesktopView @ 0x1C00CF930 (GetDesktopView.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  if ( v4 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v2, &Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v9) = GetDesktopView(ProcessWin32Process) != 0;
      else
        UserSetLastError(5);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v9;
}
