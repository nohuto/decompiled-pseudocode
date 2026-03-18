/*
 * XREFs of NtUserInitThreadCoreMessagingIocp2 @ 0x1402034A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     _InitThreadCoreMessagingIocp2 @ 0x14020359C (_InitThreadCoreMessagingIocp2.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserInitThreadCoreMessagingIocp2(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 inited; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF
  int Src; // [rsp+60h] [rbp+18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwndStrict(a1);
  v7 = v5;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 )
    {
      Src = 0;
      inited = InitThreadCoreMessagingIocp2(v7, &Src);
      if ( inited )
        RtlCopyToUser(a2, &Src, 4uLL);
    }
    else
    {
      UserSetLastError(87);
      inited = 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    inited = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return inited;
}
