/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x14021DB10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _RegisterPointerDeviceNotifications @ 0x14021DC3C (_RegisterPointerDeviceNotifications.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO *v10; // rax
  const struct tagUIPI_INFO *v11; // r8
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  _DWORD v14[4]; // [rsp+20h] [rbp-28h] BYREF

  v14[0] = 0x2000;
  v14[1] = -1;
  v14[2] = 0;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v5 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v5 + 456) == CurrentProcessWin32Process )
    {
      if ( !a2
        || (v10 = PtiCurrent(v5),
            UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(*((_QWORD *)v10 + 57) + 864LL),
              (const struct tagUIPI_INFO *)v14,
              v11)) )
      {
        v6 = RegisterPointerDeviceNotifications(v7, a2);
      }
      else
      {
        v13 = PtiCurrent(v12);
        EtwTraceUIPISystemError(*((_QWORD *)v13 + 57), 0LL, 9LL);
        UserSetLastError(5);
      }
    }
    else
    {
      v6 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
