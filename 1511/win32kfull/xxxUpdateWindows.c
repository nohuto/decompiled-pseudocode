/*
 * XREFs of xxxUpdateWindows @ 0x1C0226CD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateThreadsWindows @ 0x1C020E344 (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxUpdateWindows(__int64 a1, HRGN a2)
{
  xxxUpdateThreadsWindows(gptiCurrent, a1, a2);
  return 1LL;
}
