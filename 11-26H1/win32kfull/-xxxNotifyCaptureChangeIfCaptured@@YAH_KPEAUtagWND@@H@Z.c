/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x140159C9C
 * Callers:
 *     xxxProcessDelegateCapturedPointers @ 0x140159BE0 (xxxProcessDelegateCapturedPointers.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendPointerMessageWorker @ 0x140137038 (xxxSendPointerMessageWorker.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  struct tagINPUTDEST *v6; // rax
  unsigned int v7; // edi
  __int64 *v9; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[112]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v11, 0, sizeof(v11));
  UserSessionState = W32GetUserSessionState(v4, v3);
  v6 = CTouchProcessor::NotifyCaptureChangedIfCaptured(
         *(CTouchProcessor **)(UserSessionState + 3256),
         a1,
         (struct tagINPUTDEST *)v11);
  v7 = 0;
  if ( !v6 )
    return 1LL;
  v9 = (__int64 *)*((_QWORD *)v6 + 10);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v9);
  LOBYTE(v7) = xxxSendPointerMessageWorker((__int64)v9, 588LL, a1, *v9, 0LL, 183) != 0;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return v7;
}
