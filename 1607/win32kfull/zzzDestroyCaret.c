/*
 * XREFs of zzzDestroyCaret @ 0x1C0123130
 * Callers:
 *     xxxCheckFocus @ 0x1C00715AC (xxxCheckFocus.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00AB9C4 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C0123150 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  __int64 result; // rax

  result = UT_CaretSet(0LL);
  if ( (_DWORD)result )
  {
    zzzInternalDestroyCaret();
    return 1LL;
  }
  return result;
}
