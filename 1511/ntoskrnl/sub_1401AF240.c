/*
 * XREFs of sub_1401AF240 @ 0x1401AF240
 * Callers:
 *     KiQueryProcessorNode @ 0x1401369B8 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140136B70 (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x1401AE928 (HvlGetLpIndexFromApicId.c)
 *     sub_1405F69BC @ 0x1405F69BC (sub_1405F69BC.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1401AF240(int a1)
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
