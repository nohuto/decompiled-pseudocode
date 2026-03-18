/*
 * XREFs of NtUserGetUpdateRect @ 0x14025E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxGetUpdateRect @ 0x14002BE14 (xxxGetUpdateRect.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, void *a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  unsigned int UpdateRect; // edi
  __int64 v11; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  void *v16; // [rsp+88h] [rbp+10h] BYREF

  v16 = a2;
  v15 = 0LL;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v7);
    UpdateRect = xxxGetUpdateRect(
                   v9,
                   (_OWORD *)((unsigned __int64)&v15 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)),
                   a3);
    if ( a2 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v9, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v15, &v15, 0LL, v9);
      UserModePointer<tagRECT>::Write<tagRECT>(&v16, &v15);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8);
  return UpdateRect;
}
