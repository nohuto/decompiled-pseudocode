/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400EC62C
 * Callers:
 *     ExpSetTimer2 @ 0x1400EC4C0 (ExpSetTimer2.c)
 *     ExSetTimer @ 0x1400F7AB0 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
