/*
 * XREFs of ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14023F808
 * Callers:
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1401C7168 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     EditionImmActivateLayout @ 0x14023F7F0 (EditionImmActivateLayout.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1402A11AC (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 */

void __fastcall xxxImmActivateLayout(struct tagTHREADINFO *a1, struct tagKL *a2)
{
  char *v2; // rsi
  struct tagTHREADINFO *v5; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char *)a1 + 472;
  if ( *((struct tagKL **)a1 + 59) != a2 )
  {
    if ( *((_QWORD *)a1 + 102) )
    {
      v5 = PtiCurrent((__int64)a1);
      Win32HM_LockIntoThread<0>((__int64)v5, *((_QWORD *)a1 + 102), BugCheckParameter3);
      xxxSendMessage(*((struct tagWND **)a1 + 102), 0x287u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    BugCheckParameter3[0] = (ULONG_PTR)v2;
    BugCheckParameter3[1] = (ULONG_PTR)a2;
    HMAssignmentLock(BugCheckParameter3, 0LL);
  }
}
