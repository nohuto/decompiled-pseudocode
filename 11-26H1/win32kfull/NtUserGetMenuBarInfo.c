/*
 * XREFs of NtUserGetMenuBarInfo @ 0x14000D710
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  int MenuBarInfo; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v16; // [rsp+58h] [rbp-60h] BYREF
  __int128 v17; // [rsp+68h] [rbp-50h]
  __int128 v18; // [rsp+78h] [rbp-40h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v10 = v9;
  if ( v9 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
    ProbeForWrite(a4, 0x30uLL, 4u);
    LODWORD(v16) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v10, a2, a3, &v16);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v10, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)&v16 + 4, (char *)&v16 + 4, 0LL, v10);
    if ( MenuBarInfo )
    {
      DWORD1(v17) = 0;
      *((_QWORD *)&v18 + 1) = BYTE8(v18) & 3;
      *a4 = v16;
      a4[1] = v17;
      a4[2] = v18;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit();
  return MenuBarInfo;
}
