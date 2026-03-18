/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14000DC90
 * Callers:
 *     PoGetIdleTimes @ 0x14000DBB4 (PoGetIdleTimes.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140070B14 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14007D290 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetTargetProcessorDpcEx @ 0x1400B2CB8 (KeSetTargetProcessorDpcEx.c)
 *     PpmClearSimulatedIdle @ 0x1401FF83C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140201088 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140201B30 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x140204E3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14020523C (PpmSetSimulatedLoad.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A2B8 (PoGetPerfStateAndParkingInfo.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x1404599E8 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14054EC10 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B0C8 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  unsigned __int16 Group; // ax
  unsigned __int8 Number; // dl
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !ProcNumber->Group && !ProcNumber->Number )
    return 0;
  if ( Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}
