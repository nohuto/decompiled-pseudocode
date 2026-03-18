/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C0099A70
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C009A590 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v2, &Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v7) = GetDesktopView(ProcessWin32Process) != 0;
      else
        UserSetLastError(5LL);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
