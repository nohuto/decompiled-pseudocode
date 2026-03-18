/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1401AE904
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401B1190 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1401B2898 (HvlParkedVirtualProcessors.c)
 *     HvlFlushAddressSpaceTb @ 0x140221430 (HvlFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1402214D4 (HvlFlushSingleTb.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x100) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
