/*
 * XREFs of zzzInternalHideCaret @ 0x1C0077FC8
 * Callers:
 *     NtUserHideCaret @ 0x1C0061DD0 (NtUserHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C0077F14 (zzzInternalDestroyCaret.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     zzzHideCaret @ 0x1C0226510 (zzzHideCaret.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C007804C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void __fastcall zzzInternalHideCaret(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( (*(_DWORD *)(v2 + 256) & 1) != 0 )
    UT_InvertCaret(gptiCurrent, a2);
  *(_DWORD *)(v2 + 256) &= ~1u;
  if ( ++*(_DWORD *)(v2 + 260) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v2 + 248), (struct tagQ *)v2);
    xxxWindowEvent(0x8003u, *(__int64 **)(v2 + 248), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
