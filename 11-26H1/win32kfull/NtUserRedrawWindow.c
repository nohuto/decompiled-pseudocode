/*
 * XREFs of NtUserRedrawWindow @ 0x14024C180
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, void *a2, __int64 a3, int a4)
{
  int v8; // esi
  __int128 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct tagWND *v12; // r14
  int v13; // r9d
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v16; // [rsp+40h] [rbp-78h] BYREF
  __int128 *v17; // [rsp+50h] [rbp-68h]
  __int128 v18; // [rsp+60h] [rbp-58h] BYREF

  v18 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v12 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_13;
  }
  else
  {
    v12 = 0LL;
  }
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, v10, (__int64)v12);
  if ( a2 )
  {
    v16 = 0LL;
    RtlCopyFromUser(&v16, a2, 0x10uLL);
    v18 = v16;
    v9 = &v18;
    v17 = &v18;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    v13 = a4 | 0x10000;
    if ( v12 )
      v13 = a4;
    v8 = xxxRedrawWindow(v12, (__int64)v9, a3, v13);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
LABEL_13:
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
