/*
 * XREFs of HvlpGetLpcbByApicId @ 0x1401BB968
 * Callers:
 *     KiQueryProcessorNode @ 0x1401394AC (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140139734 (HvlStartBootLogicalProcessors.c)
 *     HvlGetLpIndexFromApicId @ 0x1401BAE40 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x14062056C (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByApicId(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 28;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
