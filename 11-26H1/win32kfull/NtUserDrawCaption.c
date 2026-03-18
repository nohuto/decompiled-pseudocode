/*
 * XREFs of NtUserDrawCaption @ 0x1402B1410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, Gre::Base *a2, void *a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r14
  unsigned int v12; // esi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v15; // [rsp+60h] [rbp-58h] BYREF
  RECT v16; // [rsp+70h] [rbp-48h] BYREF

  v16 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v9;
  v12 = 0;
  if ( v9 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
    v16 = (RECT)*UmpDetail::ReadFromUser<tagRECT>(&v15, a3);
    v12 = xxxDrawCaptionTemp(v11, a2, &v16, 0LL, 0LL, 0LL, a4);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
