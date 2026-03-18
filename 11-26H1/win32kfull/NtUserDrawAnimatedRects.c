/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1402B1320
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402F0AF8 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1, __int64 a2, void *a3, void *a4)
{
  int v7; // esi
  __int64 v8; // rcx
  struct tagWND *v9; // r14
  __int128 BugCheckParameter3; // [rsp+50h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v7 = 0;
  if ( a1 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_6;
  }
  else
  {
    v9 = 0LL;
  }
  UmpDetail::ReadFromUser<tagRECT>(&BugCheckParameter3, a3);
  UmpDetail::ReadFromUser<tagRECT>(&BugCheckParameter3, a4);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(&BugCheckParameter3, (__int64)v9);
  v7 = xxxDrawAnimatedRects(v9);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&BugCheckParameter3);
LABEL_6:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
