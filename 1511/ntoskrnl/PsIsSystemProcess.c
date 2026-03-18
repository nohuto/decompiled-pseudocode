/*
 * XREFs of PsIsSystemProcess @ 0x140091DCC
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmGetSessionLocaleId @ 0x140445F30 (MmGetSessionLocaleId.c)
 *     MmGetSessionCreateTime @ 0x1404A3628 (MmGetSessionCreateTime.c)
 *     MmGetSessionGlobalVA @ 0x1404BAD68 (MmGetSessionGlobalVA.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     MmSetSessionLocaleId @ 0x14050D498 (MmSetSessionLocaleId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14066599C (EtwpObjectHandleRundown.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(PEPROCESS a1)
{
  return a1 == PsInitialSystemProcess;
}
