/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14009D720
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140091D0C (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14009393C (KeQueryLogicalProcessorRelationship.c)
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     KeSetTargetProcessorDpcEx @ 0x1400ED984 (KeSetTargetProcessorDpcEx.c)
 *     PpmClearSimulatedIdle @ 0x1401E6E94 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1401E8678 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1401E9110 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x1401EC478 (PpmClearSimulatedLoad.c)
 *     PpmRegisterPerfCap @ 0x1401EC570 (PpmRegisterPerfCap.c)
 *     PpmSetSimulatedLoad @ 0x1401EC6C0 (PpmSetSimulatedLoad.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
 *     PspBuildCreateProcessContext @ 0x14044629C (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14052FF24 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140632C00 (PpmInstallPlatformIdleStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14063DD50 (PpmPerfRegisterHvPerfStateCounters.c)
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
