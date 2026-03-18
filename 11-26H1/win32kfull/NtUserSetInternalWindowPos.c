/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1402BCF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, void *a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r15
  int v12; // r14d
  int v13; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v9;
  v12 = 0;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    v13 = *(_WORD *)(v10 + 42) & 0x2FFF;
    if ( v13 != 669 && v13 != 671 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004);
      }
      else
      {
        v16 = *UmpDetail::ReadFromUser<tagRECT>(&v16, a3);
        RtlReadULong64FromUser(a4);
        v12 = xxxSetInternalWindowPos(v11);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
