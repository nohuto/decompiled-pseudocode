/*
 * XREFs of NtUserInvalidateRect @ 0x1402B75F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxInvalidateRect @ 0x14002C804 (xxxInvalidateRect.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserInvalidateRect(__int64 a1, void *a2, int a3)
{
  __int128 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v11; // ebx
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h] BYREF

  if ( !a1 )
    return 1LL;
  v14 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  if ( a2 )
  {
    v14 = *UmpDetail::ReadFromUser<tagRECT>(BugCheckParameter3, a2);
    v7 = &v14;
    BugCheckParameter3[2] = (ULONG_PTR)&v14;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces(&v14, &v14, 0LL, v8);
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v8);
  v11 = xxxInvalidateRect(v8, (__int64)v7, a3);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  UserSessionSwitchLeaveCrit(v12);
  return v11;
}
