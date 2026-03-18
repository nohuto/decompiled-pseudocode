/*
 * XREFs of NtUserPaintMonitor @ 0x1402B8D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  BOOL v8; // esi
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdi
  __int128 v12; // [rsp+28h] [rbp-50h] BYREF
  RECT v13; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-28h] BYREF
  __int128 BugCheckParameter3; // [rsp+60h] [rbp-18h] BYREF

  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v13 = (RECT)*UmpDetail::ReadFromUser<tagRECT>(&BugCheckParameter3, a3);
  v7 = ValidateHmonitor(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = PtiCurrent(v6);
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 61) + 8LL) + 24LL);
    Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(&BugCheckParameter3, (__int64)v9, v10);
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v14, (__int64)v9, v7);
    v12 = (unsigned __int64)v10;
    v8 = xxxDesktopPaintCallback(v7, a2, &v13, (__int64)&v12);
    Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v14);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
