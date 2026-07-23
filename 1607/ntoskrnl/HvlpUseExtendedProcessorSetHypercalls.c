/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFEDC
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401BD9BC (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF0CC (HvlParkedVirtualProcessors.c)
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1401C1404 (HvlFlushSingleTb.c)
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
