/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x1401E6570
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1401578F4 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x14016337C (HvlEnlightenProcessor.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401ED4CC (HvlRegisterPerfFeedbackCounters.c)
 *     PpmIdleGuestExecute @ 0x140241D8C (PpmIdleGuestExecute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140322468 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 26;
    if ( v1 >= HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
