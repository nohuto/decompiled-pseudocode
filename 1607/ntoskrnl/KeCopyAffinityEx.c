/*
 * XREFs of KeCopyAffinityEx @ 0x140030B70
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030810 (KxFlushNonGlobalTb.c)
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009E1B8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushMultipleTb @ 0x1400B3BF0 (KxFlushMultipleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     PpmParkReportMask @ 0x1400D315C (PpmParkReportMask.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     KiForwardTick @ 0x1400D6860 (KiForwardTick.c)
 *     KxFlushSingleTb @ 0x1401084A0 (KxFlushSingleTb.c)
 *     KxFlushEntireTb @ 0x14013D56C (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401448E4 (KeQueryActiveProcessorAffinity.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D2158 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA294 (KeGetAffinitizedInterruptsInfo.c)
 *     PoInitiateProcessorWake @ 0x1401FF35C (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140200AAC (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     KeInitializeProfile @ 0x14064FD7C (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14064FE00 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AC3C (PpmInstallCoordinatedIdleStates.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
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
