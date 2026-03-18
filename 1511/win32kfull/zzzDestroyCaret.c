/*
 * XREFs of zzzDestroyCaret @ 0x1C00CA0D0
 * Callers:
 *     xxxCheckFocus @ 0x1C0069950 (xxxCheckFocus.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0050310 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00CA2FC (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
