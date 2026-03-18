/*
 * XREFs of zzzShowCaret @ 0x1C02268C8
 * Callers:
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0233E10 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0050310 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C00CA470 (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
