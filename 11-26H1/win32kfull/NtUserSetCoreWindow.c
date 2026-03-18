/*
 * XREFs of NtUserSetCoreWindow @ 0x1401FD8F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14004643C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401FD9A8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  __int64 v4; // rdi
  struct tagWND *v5; // rcx
  __int64 v6; // rcx
  struct tagWND *v8; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v8 = 0LL;
  if ( (unsigned int)ValidateHWNDND(a1, &v8) )
  {
    if ( a2 )
    {
      v5 = v8;
      *((_DWORD *)v8 + 95) |= 0x1000u;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 26939LL);
      v5 = v8;
      *((_DWORD *)v8 + 95) &= ~0x1000u;
    }
    SetWindowSubtreeCoreWindowStatus((__int64)v5, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
