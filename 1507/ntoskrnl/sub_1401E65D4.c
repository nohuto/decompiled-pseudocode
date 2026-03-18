/*
 * XREFs of sub_1401E65D4 @ 0x1401E65D4
 * Callers:
 *     HvlEnlightenProcessor @ 0x14016337C (HvlEnlightenProcessor.c)
 *     KiQueryProcessorNode @ 0x140163650 (KiQueryProcessorNode.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1401E591C (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopology @ 0x1401E5C90 (HvlQueryProcessorTopology.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1401E65D4(int a1)
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
