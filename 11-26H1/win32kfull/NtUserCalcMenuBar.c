/*
 * XREFs of NtUserCalcMenuBar @ 0x14025DF00
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcMenuBar @ 0x140009E50 (xxxCalcMenuBar.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, void *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // edi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF

  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = v10;
  v13 = 0;
  if ( v10 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v9, v10);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87);
    }
    else
    {
      if ( a5 )
        v16 = *UmpDetail::ReadFromUser<tagRECT>(&v16, a5);
      else
        v16 = *(_OWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
      v13 = xxxCalcMenuBar(v12, a2, a3, a4, &v16);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
