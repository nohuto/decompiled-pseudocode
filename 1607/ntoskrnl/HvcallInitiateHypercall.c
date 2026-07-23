/*
 * XREFs of HvcallInitiateHypercall @ 0x140231E94
 * Callers:
 *     HvlpCommitLpIndices @ 0x1401BB2F4 (HvlpCommitLpIndices.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401BCCF8 (HvlHvDebuggerPowerHandler.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0B14 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401C1170 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14062052C (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitiateHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  return HvcallCodeVa(a1, a2, a3);
}
