/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E224
 * Callers:
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E160 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E224 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E224 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND **a1, HRGN a2)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct tagWND *v7; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  if ( !CurrentThreadWin32Thread[61] )
    goto LABEL_8;
  v6 = (_QWORD *)PsGetCurrentThreadWin32Thread(v5);
  if ( v6 )
    v6 = (_QWORD *)*v6;
  if ( (*(_DWORD *)(**(_QWORD **)(v6[61] + 8LL) + 64LL) & 1) == 0 )
  {
LABEL_8:
    xxxRedrawHungWindow((struct tagWND *)a1, a2);
    if ( (*((_BYTE *)a1[5] + 31) & 2) != 0 )
    {
      v7 = a1[14];
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, 0LL);
      while ( v7 )
      {
        Win32HM_ExchangeThreadLock<1>((__int64)v7, (__int64)BugCheckParameter3);
        xxxUpdateOtherThreadsWindows(v7, a2);
        v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
      }
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
}
