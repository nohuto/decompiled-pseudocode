/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400EE7AC
 * Callers:
 *     ExpSetTimer2 @ 0x1400EE640 (ExpSetTimer2.c)
 *     ExSetTimer @ 0x1400F9D24 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
