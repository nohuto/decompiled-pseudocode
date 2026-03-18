/*
 * XREFs of TryDetachShellFrame @ 0x140292DFC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsDebuggerAttached @ 0x1400599F0 (IsDebuggerAttached.c)
 *     FindShellFrameThreadFromAssociation @ 0x140149BB4 (FindShellFrameThreadFromAssociation.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     AssociateShellFrameAppThreads @ 0x140293908 (AssociateShellFrameAppThreads.c)
 */

void __fastcall TryDetachShellFrame(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(a2 + 1360) & 0x100000LL) == 0
    && !FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2)
    && !(unsigned int)IsDebuggerAttached(a1[57])
    && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a2 + 456))
    && (a4
     || (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - *(_DWORD *)(a1[58] + 468)) >= (a3 != 0 ? 5000 : 500))
    && (unsigned int)AssociateShellFrameAppThreads(a1, a2) )
  {
    v9 = *(_QWORD *)(a1[58] + 120);
    v10 = PtiCurrent(v8);
    Win32HM_LockIntoThread<1>((__int64)v10, v9, (__int64 *)BugCheckParameter3);
    Win32RawLockedW32Thread::Win32RawLockedW32Thread(
      (Win32RawLockedW32Thread *)BugCheckParameter2,
      (struct _W32THREAD *)a2);
    LODWORD(v9) = zzzAttachThreadInput((__int64)a1, a2, 0x4000);
    v11 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
    if ( (int)v9 >= 0 )
    {
      *(_QWORD *)(a2 + 1360) |= 0x80000uLL;
      tagQ::LockFocusWnd(a1[58], *(_QWORD *)(a1[58] + 128), 0LL);
      if ( v11 )
      {
        v12 = *(_QWORD *)(a2 + 464);
        if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL) == v12 )
          tagQ::LockFocusWnd(v12, v11, 0LL);
      }
      v13 = a1[198];
      if ( v13 )
        PostMessage(v13, 840, 1, 0);
    }
    Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, 1);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  }
}
