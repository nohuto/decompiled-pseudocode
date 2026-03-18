/*
 * XREFs of zzzInternalDestroyCaret @ 0x14014C894
 * Callers:
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     zzzDestroyCaret @ 0x14014BB8C (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x14014C980 (xxxCreateCaret.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 */

void __fastcall zzzInternalDestroyCaret(__int64 a1)
{
  struct tagTHREADINFO *v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rdi
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = PtiCurrent(a1);
  zzzInternalHideCaret(v2);
  v3 = *((_QWORD *)v1 + 58);
  v4 = (__int64 *)(v3 + 344);
  if ( *(_QWORD *)(v3 + 392) )
  {
    FindTimer(*v4, 0xFFFFLL, 2u, 1, 0LL);
    *(_QWORD *)(v3 + 392) = 0LL;
  }
  *(_QWORD *)(v3 + 384) = 0LL;
  *(_DWORD *)(v3 + 356) = 0;
  v5 = (struct tagWND *)*v4;
  if ( *v4 )
  {
    Win32HM_LockIntoThread<1>((__int64)v1, *v4, (__int64 *)BugCheckParameter3);
    HMAssignmentUnlock(v4);
    UserSessionState = W32GetUserSessionState(v7, v6);
    xxxWindowEvent(0x8001u, v5, -8, 0, *(_DWORD *)(UserSessionState + 70592) != 0 ? 2 : 0);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
}
