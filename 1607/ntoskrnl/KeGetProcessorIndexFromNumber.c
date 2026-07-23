/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14000D810
 * Callers:
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140070694 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14007D310 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetTargetProcessorDpcEx @ 0x1400B0C04 (KeSetTargetProcessorDpcEx.c)
 *     PpmClearSimulatedIdle @ 0x1401FF668 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140200EB4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14020195C (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x140204C68 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140205068 (PpmSetSimulatedLoad.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14054EFB0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B1AC (PpmInstallPlatformIdleStates.c)
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
