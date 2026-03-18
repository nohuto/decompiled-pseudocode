/*
 * XREFs of CmpMarkLockTryAcquired @ 0x1405281C8
 * Callers:
 *     HvpDecrementCellReferenceCount @ 0x14002D424 (HvpDecrementCellReferenceCount.c)
 *     HvpIncrementCellReferenceCount @ 0x14002D6BC (HvpIncrementCellReferenceCount.c)
 *     HvlPrepareForRootCrashdump @ 0x1401BD710 (HvlPrepareForRootCrashdump.c)
 *     HvlSkNmiCallbackRoutine @ 0x1401C05B0 (HvlSkNmiCallbackRoutine.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     EtwpReserveWithPmcCounters @ 0x140226E18 (EtwpReserveWithPmcCounters.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1406A456C (EtwpUpdatePmcCounters.c)
 * Callees:
 *     <none>
 */

void __stdcall CmpMarkLockTryAcquired(POPLOCK Oplock)
{
  ;
}
