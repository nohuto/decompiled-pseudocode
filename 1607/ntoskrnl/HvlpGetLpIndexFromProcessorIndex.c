/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x1401BB92C
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14012F6B0 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140139B58 (HvlEnlightenProcessor.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401BF48C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1401BF508 (HvlSetPlatformIdleState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_1402F4DE8 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 28;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
