/*
 * XREFs of ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01D8278
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x1C000C438 (SlowAppThreadInShellFrame.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall OtherThreadsKeyboardInput(struct tagQ *a1, struct tagQMSG *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  struct tagTHREADINFO *result; // rax

  v2 = *((_DWORD *)a2 + 6);
  if ( v2 < 0x100 || v2 > 0x102 && (v2 <= 0x103 || v2 > 0x105 && v2 != 522 && v2 != 526) )
    return 0LL;
  v3 = *((_QWORD *)a1 + 10);
  if ( !v3 || (result = *(struct tagTHREADINFO **)(v3 + 16), *((struct tagTHREADINFO **)a2 + 13) == result) )
  {
    result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 8);
    if ( !result || *((struct tagTHREADINFO **)a2 + 13) == result )
      return 0LL;
  }
  return result;
}
