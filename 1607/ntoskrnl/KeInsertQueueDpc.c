/*
 * XREFs of KeInsertQueueDpc @ 0x1400D6140
 * Callers:
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopCaptureTimeOnProcZero @ 0x1403D058C (PopCaptureTimeOnProcZero.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
