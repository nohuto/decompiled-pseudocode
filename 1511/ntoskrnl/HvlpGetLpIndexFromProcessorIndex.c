/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x1401AF204
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1401244B0 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140136D9C (HvlEnlightenProcessor.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401B2B3C (HvlRegisterPerfFeedbackCounters.c)
 *     PpmIdleGuestExecute @ 0x1401F3CD0 (PpmIdleGuestExecute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_1402D3328 )
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
