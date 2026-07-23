/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1401BB874
 * Callers:
 *     KiQueryProcessorNode @ 0x140139A1C (KiQueryProcessorNode.c)
 *     HvlEnlightenProcessor @ 0x14013A0C8 (HvlEnlightenProcessor.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1401BADF0 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1401BAF54 (HvlQueryProcessorTopologyEx.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[1] != a1 )
  {
    ++v2;
    result += 28;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
