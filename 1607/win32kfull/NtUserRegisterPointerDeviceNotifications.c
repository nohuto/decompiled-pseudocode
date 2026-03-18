/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C0129FC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _RegisterPointerDeviceNotifications @ 0x1C012A078 (_RegisterPointerDeviceNotifications.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 376) == CurrentProcessWin32Process )
    {
      if ( a2
        && (v10 = *(_QWORD *)(gptiCurrent + 376LL), (unsigned int)*(_QWORD *)(v10 + 824) <= 0x1FFF)
        && gbEnforceUIPI )
      {
        EtwTraceUIPISystemError(v10, 0LL, 9LL);
        UserSetLastError(5LL);
      }
      else
      {
        v7 = RegisterPointerDeviceNotifications(v8, a2);
      }
    }
    else
    {
      v7 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
