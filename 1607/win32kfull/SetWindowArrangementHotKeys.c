/*
 * XREFs of SetWindowArrangementHotKeys @ 0x1C00974D8
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 */

__int64 SetWindowArrangementHotKeys()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = &unk_1C02E5D54;
  v1 = 14LL;
  do
  {
    LODWORD(BugCheckParameter2) = v0[1];
    result = RegisterHotKey(0LL, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
