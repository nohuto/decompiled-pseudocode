/*
 * XREFs of PpmCheckReset @ 0x14014B830
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1401301F8 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
