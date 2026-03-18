/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x14012B02C
 * Callers:
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14012C19C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  struct tagWND *v3; // rbx
  __int64 v4; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = PtiCurrent((__int64)a1);
  BugCheckParameter3[0] = *((_QWORD *)v2 + 56);
  *((_QWORD *)v2 + 56) = BugCheckParameter3;
  v3 = (struct tagWND *)*((_QWORD *)a1 + 14);
  BugCheckParameter3[1] = 0LL;
  while ( v3 )
  {
    v4 = *((_QWORD *)v3 + 5);
    if ( !*(_QWORD *)(v4 + 136) && (*(_BYTE *)(v4 + 17) & 8) != 0 )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)v3, (__int64)BugCheckParameter3);
      xxxSendNCPaint(v3, (HRGN)1);
    }
    v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
