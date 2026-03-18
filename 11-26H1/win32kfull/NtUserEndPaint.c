/*
 * XREFs of NtUserEndPaint @ 0x14012A570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // r14
  int v8; // edi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+80h] [rbp-18h]

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  v8 = 0;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_OWORD *)a2;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_OWORD *)(a2 + 32);
    v14 = *(_OWORD *)(a2 + 48);
    v15 = *(_QWORD *)(a2 + 64);
    v8 = xxxEndPaint(v7);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
