/*
 * XREFs of zzzShowCaret @ 0x1C0226530
 * Callers:
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C02339E0 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0061E90 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C0079DA8 (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret(v2, v1);
  return 1LL;
}
