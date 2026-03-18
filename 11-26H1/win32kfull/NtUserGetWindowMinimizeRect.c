/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1402B55B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ParkIcon @ 0x1401E63DC (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, void *a2)
{
  int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 *v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  unsigned int *Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  void *v23; // [rsp+88h] [rbp+10h] BYREF

  v23 = a2;
  v22 = 0LL;
  v4 = 1;
  v5 = EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (unsigned __int64 *)v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), v9 = *(_WORD *)(v7 + 42) & 0x2FFF, v9 == 669) || v9 == 671 )
  {
    v4 = 0;
  }
  else
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v5, (__int64)v8);
    if ( a2 )
    {
      if ( IsTrayWindow(v8, 1LL) )
      {
        v4 = xxxSendMinRectMessages(v8, (__int64)&v22);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v11, v10);
        Prop = (unsigned int *)GetProp((__int64)v8, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
        if ( Prop && (Prop[4] & 0x10) != 0 )
        {
          v16 = *Prop;
          *(_QWORD *)&v22 = *(_QWORD *)Prop;
        }
        else
        {
          ParkIcon((const struct tagWND *)v8, (int *)&v22);
        }
        v17 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 19904) + 2124LL);
        DWORD2(v22) = v17 + v22;
        v18 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState((unsigned int)(v17 + v22), v17) + 19904) + 2128LL);
        v12 = (unsigned int)(v18 + DWORD1(v22));
        HIDWORD(v22) = v18 + DWORD1(v22);
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v22, &v22, 0LL, v8);
      if ( v4 )
        UserModePointer<tagRECT>::Write<tagRECT>(&v23, &v22);
    }
    else
    {
      v4 = 0;
      UserSetLastError(87);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
