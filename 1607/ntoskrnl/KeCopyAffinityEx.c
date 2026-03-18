/*
 * XREFs of KeCopyAffinityEx @ 0x140030FF0
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030C90 (KxFlushNonGlobalTb.c)
 *     KeFreezeExecution @ 0x1400822D0 (KeFreezeExecution.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009F890 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushMultipleTb @ 0x1400B5DC8 (KxFlushMultipleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C892C (KeFlushProcessWriteBuffers.c)
 *     PpmParkReportMask @ 0x1400D52BC (PpmParkReportMask.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     KiForwardTick @ 0x1400D89C0 (KiForwardTick.c)
 *     KxFlushSingleTb @ 0x14010A720 (KxFlushSingleTb.c)
 *     KxFlushEntireTb @ 0x14013CFFC (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x140144374 (KeQueryActiveProcessorAffinity.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D232C (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA468 (KeGetAffinitizedInterruptsInfo.c)
 *     PoInitiateProcessorWake @ 0x1401FF530 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140200C80 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     KeInitializeProfile @ 0x14064FC98 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14064FD1C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AB58 (PpmInstallCoordinatedIdleStates.c)
 *     ExpProfileCreate @ 0x1406B7C0C (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 result; // ax
  __int64 v4; // rcx

  *(_WORD *)a1 = *a2;
  *(_WORD *)(a1 + 2) = a2[1];
  result = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; result < *a2; *(_QWORD *)(8 * v4 + a1 + 8) = *(_QWORD *)&a2[4 * v4 + 4] )
    v4 = result++;
  return result;
}
