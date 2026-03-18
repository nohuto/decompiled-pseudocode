/*
 * XREFs of xHalTimerWatchdogStop @ 0x140002DFC
 * Callers:
 *     _call_matherr @ 0x140150F54 (_call_matherr.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ExpWnfGenerateStateName @ 0x1403F6E6C (ExpWnfGenerateStateName.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     ExpWnfGetHostSiloContext @ 0x140463CE8 (ExpWnfGetHostSiloContext.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     ObpParseSymbolicLinkEx @ 0x140476170 (ObpParseSymbolicLinkEx.c)
 *     PsBootPhaseComplete @ 0x14055DFD0 (PsBootPhaseComplete.c)
 *     PsStartSiloMonitor @ 0x14055F7E8 (PsStartSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 *     ObpSetSiloDeviceMap @ 0x140579DF0 (ObpSetSiloDeviceMap.c)
 *     PsUnregisterSiloMonitor @ 0x140681064 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x1406E6004 (ObCreateSiloRootDirectory.c)
 *     KdEnterDebugger @ 0x1406F2738 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F2838 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

__int64 xHalTimerWatchdogStop()
{
  return 0LL;
}
