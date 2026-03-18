/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400352C8
 * Callers:
 *     ExpSetTimer2 @ 0x140034460 (ExpSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
