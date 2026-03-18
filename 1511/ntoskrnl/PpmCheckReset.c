/*
 * XREFs of PpmCheckReset @ 0x140141394
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x140125844 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
