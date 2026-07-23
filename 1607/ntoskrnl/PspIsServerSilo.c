/*
 * XREFs of PspIsServerSilo @ 0x1400B0D44
 * Callers:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x14020F4F4 (PspIsSiloInServerSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x140456F78 (PspTerminateProcessesJobCallback.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 *     PsIsProcessInAppSilo @ 0x14067E080 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x14067E25C (PsTerminateServerSilo.c)
 *     PspDeleteSilo @ 0x14067E9A4 (PspDeleteSilo.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
