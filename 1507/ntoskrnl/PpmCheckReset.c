/*
 * XREFs of PpmCheckReset @ 0x14016F4D4
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x140159A44 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
