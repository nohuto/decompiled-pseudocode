/*
 * XREFs of PspReferenceMonitorServerSilo @ 0x140526A0C
 * Callers:
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     PspGetNextMonitor @ 0x1406404F4 (PspGetNextMonitor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PspReferenceMonitorServerSilo(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection(a1 + 4) == 0 ? 0xC01C000B : 0;
}
