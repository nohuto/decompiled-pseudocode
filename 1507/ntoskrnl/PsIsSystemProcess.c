/*
 * XREFs of PsIsSystemProcess @ 0x140020228
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MmGetSessionGlobalVA @ 0x140444BBC (MmGetSessionGlobalVA.c)
 *     MmGetSessionLocaleId @ 0x14044FD10 (MmGetSessionLocaleId.c)
 *     MmGetSessionCreateTime @ 0x140508F04 (MmGetSessionCreateTime.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     MmSetSessionLocaleId @ 0x14056C64C (MmSetSessionLocaleId.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406E8B14 (EtwpObjectHandleRundown.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(PEPROCESS a1)
{
  return a1 == PsInitialSystemProcess;
}
