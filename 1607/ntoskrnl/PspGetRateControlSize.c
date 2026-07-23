/*
 * XREFs of PspGetRateControlSize @ 0x1404B5884
 * Callers:
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1400A47D4 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
