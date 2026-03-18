/*
 * XREFs of zzzHideCaret @ 0x1C00AB924
 * Callers:
 *     NtUserHideCaret @ 0x1C00AB8D0 (NtUserHideCaret.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00AB9C4 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C00ABB10 (zzzInternalHideCaret.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
