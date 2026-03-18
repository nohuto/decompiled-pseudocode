/*
 * XREFs of NtUserScrollWindowEx @ 0x14003E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8)
{
  __int128 *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct tagWND *v14; // rsi
  unsigned int v15; // edi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-A8h]
  __int128 *v19; // [rsp+78h] [rbp-A0h]
  __int128 *v20; // [rsp+80h] [rbp-98h]
  _BYTE v21[24]; // [rsp+88h] [rbp-90h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-68h] BYREF
  __int128 Src; // [rsp+C0h] [rbp-58h] BYREF

  v18 = a6;
  v22 = 0LL;
  v23 = 0LL;
  Src = 0LL;
  v10 = 0LL;
  v11 = EnterCrit(0LL, 0LL);
  v12 = ValidateHwnd(a1);
  v14 = (struct tagWND *)v12;
  if ( v12 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v11, v12);
    if ( a4 )
    {
      v22 = *(_OWORD *)UmpDetail::ReadFromUser<tagRECT>(v21, a4);
      v19 = &v22;
    }
    if ( a5 )
    {
      v23 = *(_OWORD *)UmpDetail::ReadFromUser<tagRECT>(v21, a5);
      v10 = &v23;
      v20 = &v23;
    }
    if ( *((_QWORD *)v14 + 13) )
    {
      v15 = xxxScrollWindowEx(v14, (__int64)v10, v18, (unsigned __int64)&Src & -(__int64)(a7 != 0LL), a8);
      if ( a7 )
        RtlCopyToUser(a7, &Src, 0x10uLL);
    }
    else
    {
      v15 = 0;
      UserSetLastError(87);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    v15 = 0;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v15;
}
