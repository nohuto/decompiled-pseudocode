/*
 * XREFs of zzzInternalHideCaret @ 0x1C00ABB10
 * Callers:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     zzzHideCaret @ 0x1C00AB924 (zzzHideCaret.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     zzzInternalDestroyCaret @ 0x1C0123150 (zzzInternalDestroyCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00ABB94 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v0 + 264) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 264) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 268) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 256), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(__int64 **)(v0 + 256), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
