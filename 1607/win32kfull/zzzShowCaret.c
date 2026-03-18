/*
 * XREFs of zzzShowCaret @ 0x1C00AB9A4
 * Callers:
 *     NtUserShowCaret @ 0x1C00AB950 (NtUserShowCaret.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00AB9C4 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C00ABA64 (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
