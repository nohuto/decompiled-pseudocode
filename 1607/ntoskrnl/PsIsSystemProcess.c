/*
 * XREFs of PsIsSystemProcess @ 0x140071EA8
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MmGetSessionGlobalVA @ 0x1403E8F94 (MmGetSessionGlobalVA.c)
 *     MmGetSessionLocaleId @ 0x14045851C (MmGetSessionLocaleId.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     MmGetSessionCreateTime @ 0x14049C2B8 (MmGetSessionCreateTime.c)
 *     MmSetSessionLocaleId @ 0x140549354 (MmSetSessionLocaleId.c)
 *     PspQueueDeferredWorkAndWait @ 0x14067EAB8 (PspQueueDeferredWorkAndWait.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406A74DC (EtwpObjectHandleRundown.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(PEPROCESS a1)
{
  return a1 == PsInitialSystemProcess;
}
