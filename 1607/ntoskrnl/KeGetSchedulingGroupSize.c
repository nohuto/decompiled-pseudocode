/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1400A47D4
 * Callers:
 *     PspGetRateControlSize @ 0x1404B5884 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return 424LL * (unsigned int)KeMaximumProcessors + 128;
}
