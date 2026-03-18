/*
 * XREFs of NtUserFlashWindowEx @ 0x14022EA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401FD9A8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserFlashWindowEx(void *Src)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  HWND v10[2]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v11; // [rsp+60h] [rbp-18h]
  struct tagWND *v12; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  RtlCopyFromUser(v10, Src, 0x20uLL);
  *(_OWORD *)BugCheckParameter3 = *(_OWORD *)v10;
  v9 = v11;
  LOBYTE(v3) = ValidateHWNDND(v10[1], &v12);
  if ( v3 && LODWORD(v10[0]) == 32 && (v11 & 0xFFFFFFF0) == 0 )
  {
    v5 = PtiCurrent(v4);
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v5, (__int64)v12);
    v2 = xxxFlashWindow((__int64)v12, (unsigned __int16)v11 | (WORD2(v11) << 16), DWORD2(v11));
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
