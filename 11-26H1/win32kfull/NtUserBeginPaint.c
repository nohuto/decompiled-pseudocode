/*
 * XREFs of NtUserBeginPaint @ 0x14012A670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, void *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // r14
  __int64 v8; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE Src[68]; // [rsp+50h] [rbp-68h] BYREF
  int v12; // [rsp+94h] [rbp-24h]

  memset_0(Src, 0, 0x48uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  v8 = 0LL;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    v8 = xxxBeginPaint(v7);
    v12 = 0;
    RtlCopyToUser(a2, Src, 0x48uLL);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
