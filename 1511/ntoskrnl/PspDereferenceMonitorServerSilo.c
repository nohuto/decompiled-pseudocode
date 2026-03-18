/*
 * XREFs of PspDereferenceMonitorServerSilo @ 0x140526688
 * Callers:
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     PspInitializeServerSiloDeferred @ 0x140640594 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     <none>
 */

void __fastcall PspDereferenceMonitorServerSilo(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 4);
}
