/*
 * XREFs of KeInsertQueueDpc @ 0x1400D82A0
 * Callers:
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopCaptureTimeOnProcZero @ 0x1403D058C (PopCaptureTimeOnProcZero.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x140492AB0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     KdExitDebugger @ 0x1406F2838 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
