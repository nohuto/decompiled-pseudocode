/*
 * XREFs of xHalTimerWatchdogStop @ 0x140002F70
 * Callers:
 *     _call_matherr @ 0x14015150C (_call_matherr.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     ExpWnfGenerateStateName @ 0x1403F5D2C (ExpWnfGenerateStateName.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     ExpWnfGetHostSiloContext @ 0x140462BB8 (ExpWnfGetHostSiloContext.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     ObpParseSymbolicLinkEx @ 0x140475040 (ObpParseSymbolicLinkEx.c)
 *     PsBootPhaseComplete @ 0x14055E510 (PsBootPhaseComplete.c)
 *     PsStartSiloMonitor @ 0x14055FD28 (PsStartSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 *     ObpSetSiloDeviceMap @ 0x14057A330 (ObpSetSiloDeviceMap.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x1406E613C (ObCreateSiloRootDirectory.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

__int64 xHalTimerWatchdogStop()
{
  return 0LL;
}
