/*
 * XREFs of zzzDestroyCaret @ 0x14014BB8C
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140043168 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     NtUserDestroyCaret @ 0x14014BB50 (NtUserDestroyCaret.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1401290CC (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x14014C894 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
