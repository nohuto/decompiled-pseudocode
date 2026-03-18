/*
 * XREFs of KeInsertQueueDpc @ 0x140043D30
 * Callers:
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     KiCalibrateTimeAdjustment @ 0x14039FC48 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     PopCaptureTimeOnProcZero @ 0x1403A58B0 (PopCaptureTimeOnProcZero.c)
 *     IopLiveDumpCorralProcessors @ 0x1403AEA00 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x1403F1F50 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     VfKeInsertQueueDpc @ 0x1406C6C88 (VfKeInsertQueueDpc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
