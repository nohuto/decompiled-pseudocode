/*
 * XREFs of CmpMarkLockTryAcquired @ 0x140528708
 * Callers:
 *     HvpDecrementCellReferenceCount @ 0x14002CFA4 (HvpDecrementCellReferenceCount.c)
 *     HvpIncrementCellReferenceCount @ 0x14002D23C (HvpIncrementCellReferenceCount.c)
 *     HvlPrepareForRootCrashdump @ 0x1401BD5F4 (HvlPrepareForRootCrashdump.c)
 *     HvlSkNmiCallbackRoutine @ 0x1401C0494 (HvlSkNmiCallbackRoutine.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     EtwpReserveWithPmcCounters @ 0x140226C44 (EtwpReserveWithPmcCounters.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1406A46A4 (EtwpUpdatePmcCounters.c)
 * Callees:
 *     <none>
 */

void __stdcall CmpMarkLockTryAcquired(POPLOCK Oplock)
{
  ;
}
