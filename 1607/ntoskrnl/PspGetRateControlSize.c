/*
 * XREFs of PspGetRateControlSize @ 0x1404D1DE4
 * Callers:
 *     PspFreeRateControl @ 0x1404D1D14 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404D1D58 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1400A625C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
