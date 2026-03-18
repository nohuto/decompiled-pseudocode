/*
 * XREFs of zzzHideCaret @ 0x1C0226510
 * Callers:
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0061E90 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !(unsigned int)UT_CaretSet(a1) )
    return 0LL;
  zzzInternalHideCaret(v2, v1);
  return 1LL;
}
