/*
 * XREFs of sub_1401AF268 @ 0x1401AF268
 * Callers:
 *     KiQueryProcessorNode @ 0x1401369B8 (KiQueryProcessorNode.c)
 *     HvlEnlightenProcessor @ 0x140136D9C (HvlEnlightenProcessor.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1401AE9F4 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopology @ 0x1401AEB14 (HvlQueryProcessorTopology.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1401AF268(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[1] != a1 )
  {
    ++v2;
    result += 26;
    if ( v2 >= HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
