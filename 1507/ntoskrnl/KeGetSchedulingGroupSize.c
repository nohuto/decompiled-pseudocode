/*
 * XREFs of KeGetSchedulingGroupSize @ 0x140120EA8
 * Callers:
 *     PspGetRateControlSize @ 0x14053CE9C (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return 408LL * (unsigned int)KeMaximumProcessors + 128;
}
