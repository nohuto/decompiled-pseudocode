/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1402B2180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     xxxForceWindowToDpiForTest @ 0x1402A22C0 (xxxForceWindowToDpiForTest.c)
 *     IsDpiValidPlateau @ 0x140302674 (IsDpiValidPlateau.c)
 */

_BOOL8 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  BOOL v7; // edi
  struct tagWND *v8; // rsi
  int v9; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v9 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v9 != 669 && v9 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, (__int64)v8, BugCheckParameter3);
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 5) + 288LL) & 0xF) == 2
        && IsTopLevelWindow((__int64)v8)
        && (unsigned __int8)IsDpiValidPlateau(a2) )
      {
        v7 = xxxForceWindowToDpiForTest(v8, a2);
      }
      else
      {
        UserSetLastError(87);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
