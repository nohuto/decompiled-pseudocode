/*
 * XREFs of sub_1401E65AC @ 0x1401E65AC
 * Callers:
 *     KiQueryProcessorNode @ 0x140163650 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x1401E5874 (HvlGetLpIndexFromApicId.c)
 *     sub_14067088C @ 0x14067088C (sub_14067088C.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1401E65AC(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 26;
    if ( v2 >= HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
