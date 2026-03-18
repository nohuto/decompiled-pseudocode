/*
 * XREFs of NtUserSetWindowPlacement @ 0x1402BE650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  int v8; // edi
  int v9; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+68h] [rbp-10h]

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  v8 = 0;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v9 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v9 != 669 && v9 != 671 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v12[0] = *(_OWORD *)a2;
      v12[1] = *(_OWORD *)(a2 + 16);
      v13 = *(_QWORD *)(a2 + 32);
      v14 = *(_DWORD *)(a2 + 40);
      if ( LODWORD(v12[0]) == 44 || *(_WORD *)(v4 + 664) < 0x400u )
        v8 = xxxSetWindowPlacement(v7, (__int64)v12);
      else
        UserSetLastError(87);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
