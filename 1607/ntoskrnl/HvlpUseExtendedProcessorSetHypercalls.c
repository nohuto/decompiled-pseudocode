/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFFF8
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401BDAD8 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF1E8 (HvlParkedVirtualProcessors.c)
 *     HvlFlushRangeListTb @ 0x1401C14F0 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1401C1520 (HvlFlushSingleTb.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
