/*
 * XREFs of SetWindowArrangementHotKeys @ 0x1C009E738
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 */

__int64 SetWindowArrangementHotKeys()
{
  unsigned int *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // r9
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = (unsigned int *)&unk_1C02DE0D4;
  v1 = 14LL;
  do
  {
    v2 = *v0;
    LODWORD(v2) = v2 | 0x4000;
    LODWORD(BugCheckParameter2) = v0[1];
    result = RegisterHotKey(0LL, (__int64)WindowArrangementHotKeyCallback, *(v0 - 1), v2, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
