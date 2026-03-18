/*
 * XREFs of KeInsertQueueDpc @ 0x1400A4880
 * Callers:
 *     PopCaptureTimeOnProcZero @ 0x1403EF070 (PopCaptureTimeOnProcZero.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     IopLiveDumpCorralProcessors @ 0x1403FEDD4 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140400DAC (PnprQuiesceProcessors.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140504F18 (PspThreadDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     VfKeInsertQueueDpc @ 0x140749B2C (VfKeInsertQueueDpc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((_DWORD)Dpc, (_DWORD)SystemArgument1, (_DWORD)SystemArgument2, 0, 0);
}
