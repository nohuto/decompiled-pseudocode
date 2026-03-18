/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C005CC34
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowPos @ 0x1C005CC88 (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(__int64 a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 4);
  return ConstrainWindowSize(v1 + 8, v1 + 12);
}
