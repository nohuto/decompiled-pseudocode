/*
 * XREFs of SetWindowArrangementHotKeys @ 0x1C0146920
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 */

__int64 SetWindowArrangementHotKeys()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  v0 = &unk_1C02E05C4;
  v1 = 14LL;
  do
  {
    result = RegisterHotKey(0LL, (__int64)WindowArrangementHotKeyCallback, *(v0 - 1), *v0 | 0x4000u, v0[1]);
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
