/*
 * XREFs of RtlULongAdd @ 0x1C00166B8
 * Callers:
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0033BEC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0033D5C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C0043C98 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0043D94 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C005FFF4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C0060654 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C0060DC0 (PortPassThroughValidateNormalizedRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  if ( ulAugend + ulAddend < ulAugend )
  {
    *pulResult = -1;
    return -1073741675;
  }
  else
  {
    *pulResult = ulAugend + ulAddend;
    return 0;
  }
}
