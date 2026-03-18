/*
 * XREFs of PspIsServerSilo @ 0x1400B2DF8
 * Callers:
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x1400136A0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140076688 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x14020F6C8 (PspIsSiloInServerSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x1404580A8 (PspTerminateProcessesJobCallback.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 *     PspImplicitAssignProcessToJob @ 0x1404F3670 (PspImplicitAssignProcessToJob.c)
 *     PspGetNextSilo @ 0x14055F95C (PspGetNextSilo.c)
 *     PsIsProcessInAppSilo @ 0x14067DF9C (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x14067E178 (PsTerminateServerSilo.c)
 *     PspDeleteSilo @ 0x14067E8C0 (PspDeleteSilo.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
