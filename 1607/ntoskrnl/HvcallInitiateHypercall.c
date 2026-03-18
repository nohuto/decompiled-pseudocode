/*
 * XREFs of HvcallInitiateHypercall @ 0x140232068
 * Callers:
 *     HvlpCommitLpIndices @ 0x1401BB410 (HvlpCommitLpIndices.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401BCE14 (HvlHvDebuggerPowerHandler.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0C30 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401C128C (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140620478 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitiateHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  return HvcallCodeVa(a1, a2, a3);
}
