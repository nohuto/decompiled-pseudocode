/*
 * XREFs of ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A15BC
 * Callers:
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1401C74D8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1402A11AC (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmUnloadLayout(struct tagTHREADINFO *a1, __int64 a2)
{
  bool v2; // zf
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 102) == 0LL;
  v3 = a1;
  v4 = (int)a2;
  v10 = 0LL;
  if ( !v2 )
  {
    if ( *((_QWORD *)a1 + 59) )
    {
      if ( (_DWORD)a2 != 1
        || (a1 = *(struct tagTHREADINFO **)(W32GetUserSessionState(a1, a2) + 19904), (*(_DWORD *)a1 & 4) != 0)
        || (a1 = (struct tagTHREADINFO *)*(unsigned __int16 *)(*((_QWORD *)v3 + 59) + 42LL),
            LOWORD(a1) = (unsigned __int16)a1 & 0xF000,
            (_WORD)a1 == 0xE000) )
      {
        v5 = PtiCurrent((__int64)a1);
        Win32HM_LockIntoThread<0>((__int64)v5, *((_QWORD *)v3 + 102), BugCheckParameter3);
        UserSessionState = W32GetUserSessionState(v7, v6);
        xxxSendTransformableMessageTimeout(
          *((struct tagTHREADINFO ***)v3 + 102),
          647LL,
          0x11uLL,
          v4,
          8u,
          *(_DWORD *)(UserSessionState + 69104),
          &v10,
          1u,
          0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
    }
  }
}
