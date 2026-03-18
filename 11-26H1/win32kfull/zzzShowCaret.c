/*
 * XREFs of zzzShowCaret @ 0x1401290A4
 * Callers:
 *     NtUserShowCaret @ 0x1401278E0 (NtUserShowCaret.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1401290CC (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x14012BC20 (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  __int64 result; // rax

  result = UT_CaretSet(a1);
  if ( (_DWORD)result )
  {
    zzzInternalShowCaret();
    return 1LL;
  }
  return result;
}
