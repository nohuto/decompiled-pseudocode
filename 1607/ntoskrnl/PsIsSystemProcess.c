/*
 * XREFs of PsIsSystemProcess @ 0x140072328
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MmGetSessionGlobalVA @ 0x1403E7964 (MmGetSessionGlobalVA.c)
 *     MmGetSessionLocaleId @ 0x14045964C (MmGetSessionLocaleId.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     MmGetSessionCreateTime @ 0x1404B1ED8 (MmGetSessionCreateTime.c)
 *     MmSetSessionLocaleId @ 0x140548E14 (MmSetSessionLocaleId.c)
 *     PspQueueDeferredWorkAndWait @ 0x14067E9D4 (PspQueueDeferredWorkAndWait.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406A73A4 (EtwpObjectHandleRundown.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(PEPROCESS a1)
{
  return a1 == PsInitialSystemProcess;
}
