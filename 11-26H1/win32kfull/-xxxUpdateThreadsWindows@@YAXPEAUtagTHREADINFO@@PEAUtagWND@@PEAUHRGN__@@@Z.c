/*
 * XREFs of ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E160
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxUpdateWindows @ 0x140257EC8 (xxxUpdateWindows.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E224 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxUpdateThreadsWindows(struct tagTHREADINFO *a1, struct tagWND *a2, HRGN a3)
{
  struct tagTHREADINFO *v6; // rax
  struct tagWND *v7; // rdi
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v9; // [rsp+28h] [rbp-10h]

  v6 = PtiCurrent((__int64)a1);
  v7 = 0LL;
  BugCheckParameter3 = *((_QWORD *)v6 + 56);
  *((_QWORD *)v6 + 56) = &BugCheckParameter3;
  v9 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v9 = a2;
      HMLockObject(a2);
      if ( v7 )
        HMUnlockObject(v7);
      if ( *((struct tagTHREADINFO **)a2 + 2) == a1 )
        xxxInternalUpdateWindow(a2, 1u);
      else
        xxxUpdateOtherThreadsWindows(a2, a3);
      a2 = (struct tagWND *)*((_QWORD *)a2 + 11);
      if ( !a2 )
        break;
      v7 = v9;
    }
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&BugCheckParameter3);
}
