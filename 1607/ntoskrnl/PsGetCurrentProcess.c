/*
 * XREFs of PsGetCurrentProcess @ 0x140014680
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     KiIpiProcessRequests @ 0x1400898A0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14009E608 (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     MiSmallVaStillMapsFrame @ 0x140109A20 (MiSmallVaStillMapsFrame.c)
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1403DDC44 (KeWriteProtectPAT.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     EtwpCheckNotificationAccess @ 0x14049120C (EtwpCheckNotificationAccess.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
