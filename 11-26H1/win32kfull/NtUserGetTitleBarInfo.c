/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1402B4CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, _DWORD *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-60h] BYREF
  _OWORD v17[3]; // [rsp+58h] [rbp-50h] BYREF

  memset(v17, 0, 44);
  v4 = 1;
  v5 = EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  if ( v6 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v5, v6);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9);
    ProbeForWrite(a2, 0x2CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    LODWORD(v17[0]) = *a2;
    if ( LODWORD(v17[0]) == 44 )
    {
      memset((char *)&v17[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v8, (struct tagTITLEBARINFO *)v17);
    }
    else
    {
      UserSetLastError(87);
      v4 = 0;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)v17 + 4, (char *)v17 + 4, 0LL, v8);
    if ( v4 )
    {
      *(_OWORD *)a2 = v17[0];
      *((_OWORD *)a2 + 1) = v17[1];
      *((_QWORD *)a2 + 4) = *(_QWORD *)&v17[2];
      a2[10] = DWORD2(v17[2]);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
