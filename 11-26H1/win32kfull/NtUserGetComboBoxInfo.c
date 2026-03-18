/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1402B2F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxGetComboBoxInfo @ 0x14020490C (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  int ComboBoxInfo; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v17; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v18[3]; // [rsp+70h] [rbp-48h] BYREF

  memset_0(&v17, 0, 0x40uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9);
    ProbeForWrite(a2, 0x40uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    LODWORD(v17) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v7, (__int64)&v17);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
    {
      TransformRectBetweenCoordinateSpaces((char *)v18 + 4, (char *)v18 + 4, 0LL, v7);
      TransformRectBetweenCoordinateSpaces((char *)&v17 + 4, (char *)&v17 + 4, 0LL, v7);
    }
    if ( ComboBoxInfo )
    {
      *a2 = v17;
      a2[1] = v18[0];
      a2[2] = v18[1];
      a2[3] = v18[2];
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return ComboBoxInfo;
}
