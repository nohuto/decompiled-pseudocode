/*
 * XREFs of EditionPointerParentNotify @ 0x140137CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendPointerMessageWorker @ 0x140137038 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v8 = PtiCurrent(v7);
      BugCheckParameter3[0] = *((_QWORD *)v8 + 56);
      *((_QWORD *)v8 + 56) = BugCheckParameter3;
      BugCheckParameter3[1] = 0LL;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0) != 0x40 )
          break;
        v3 = *(_QWORD *)(v3 + 104);
        Win32HM_ExchangeThreadLock<1>(v3, (__int64)BugCheckParameter3);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
        UserSessionState = W32GetUserSessionState(v10, v9);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(*(CTouchProcessor **)(UserSessionState + 3256), a2) );
      return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
  return result;
}
