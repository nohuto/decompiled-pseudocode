/*
 * XREFs of PspGetRateControlSize @ 0x140487924
 * Callers:
 *     PspFreeRateControl @ 0x140487854 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140487898 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1400C4CE8 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( !a1 )
    return 72LL;
  if ( a1 == 1 )
    return 40LL;
  return (unsigned int)KeGetSchedulingGroupSize() + 128;
}
