/*
 * XREFs of zzzInternalHideCaret @ 0x1C00CA3B0
 * Callers:
 *     NtUserHideCaret @ 0x1C0050250 (NtUserHideCaret.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     zzzInternalDestroyCaret @ 0x1C00CA2FC (zzzInternalDestroyCaret.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     zzzHideCaret @ 0x1C02268A8 (zzzHideCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA434 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v0 + 256) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 256) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 260) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 248), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(__int64 **)(v0 + 248), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
