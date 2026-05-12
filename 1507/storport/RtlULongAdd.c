/*
 * XREFs of RtlULongAdd @ 0x1C003038C
 * Callers:
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C002F800 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C002F970 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C003A17C (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C003A278 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0054A54 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C0055014 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C005575C (PortPassThroughValidateNormalizedRequest.c)
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
