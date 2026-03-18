/*
 * XREFs of PspGetRateControlSize @ 0x14053CE9C
 * Callers:
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x140120EA8 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( !a1 )
    return 72LL;
  if ( a1 == 1 )
    return 40LL;
  return (unsigned int)KeGetSchedulingGroupSize() + 128;
}
