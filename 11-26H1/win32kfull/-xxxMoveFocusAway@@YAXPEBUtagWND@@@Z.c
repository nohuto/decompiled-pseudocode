/*
 * XREFs of ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140043168
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x140042FEC (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzDestroyCaret @ 0x14014BB8C (zzzDestroyCaret.c)
 */

void __fastcall xxxMoveFocusAway(const struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  struct tagTHREADINFO *v3; // rdi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = PtiCurrent((__int64)a1);
  v3 = v2;
  if ( a1 == *(const struct tagWND **)(*((_QWORD *)v2 + 58) + 120LL) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      Win32HM_LockIntoThread<1>((__int64)v2, *((_QWORD *)a1 + 13), (__int64 *)BugCheckParameter3);
      xxxSetFocus(*((struct tagWND **)a1 + 13));
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  if ( a1 == *(const struct tagWND **)(*((_QWORD *)v3 + 58) + 344LL) )
    zzzDestroyCaret();
}
