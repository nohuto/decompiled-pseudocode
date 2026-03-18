/*
 * XREFs of NtUserSetScrollInfo @ 0x1402BDBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r15
  unsigned int v12; // edi
  int v13; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h]
  int v18; // [rsp+58h] [rbp-50h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
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
      if ( a2 > 3 || a2 == 2 )
      {
        UserSetLastError(87);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v16 = *(_OWORD *)a3;
        v17 = *(_QWORD *)(a3 + 16);
        v18 = *(_DWORD *)(a3 + 24);
        v12 = xxxSetScrollBar(v11, a2, (__int64)&v16, a4);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
