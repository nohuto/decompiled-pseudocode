/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1400C4CE8
 * Callers:
 *     PspGetRateControlSize @ 0x140487924 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return 408LL * (unsigned int)KeMaximumProcessors + 128;
}
