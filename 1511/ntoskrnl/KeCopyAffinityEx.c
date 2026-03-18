/*
 * XREFs of KeCopyAffinityEx @ 0x14007C670
 * Callers:
 *     KxFlushSingleTb @ 0x1400077D0 (KxFlushSingleTb.c)
 *     KiForwardTick @ 0x140045900 (KiForwardTick.c)
 *     PpmParkReportMask @ 0x140074F28 (PpmParkReportMask.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140077160 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushNonGlobalTb @ 0x14007C310 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KxFlushMultipleTb @ 0x140102D90 (KxFlushMultipleTb.c)
 *     PpmPerfApplyProcessorStates @ 0x140123FFC (PpmPerfApplyProcessorStates.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401397E4 (KeQueryActiveProcessorAffinity.c)
 *     KeSynchronizeAddressPolicy @ 0x1401C39B0 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1401C8B48 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401CA838 (KeGetAffinitizedInterruptsInfo.c)
 *     PoInitiateProcessorWake @ 0x1401E6BAC (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1401E8278 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     KeInitializeProfile @ 0x14061AA64 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14061AAE8 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140632690 (PpmInstallCoordinatedIdleStates.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
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
