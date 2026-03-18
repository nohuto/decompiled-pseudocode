/*
 * XREFs of xxxValidateRect @ 0x14002C178
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserValidateRect @ 0x140252F00 (NtUserValidateRect.c)
 * Callees:
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  if ( a1 )
  {
    v2 = 8LL;
  }
  else
  {
    a2 = 0LL;
    v2 = 645LL;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
