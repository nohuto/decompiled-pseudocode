/*
 * XREFs of PpmCheckReset @ 0x14014BDA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x140130768 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
