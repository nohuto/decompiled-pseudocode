/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1400A625C
 * Callers:
 *     PspGetRateControlSize @ 0x1404D1DE4 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return 424LL * (unsigned int)KeMaximumProcessors + 128;
}
