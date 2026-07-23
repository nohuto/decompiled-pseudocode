/*
 * XREFs of PsGetCurrentProcess @ 0x140014200
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     KiIpiProcessRequests @ 0x140088FA0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14009DFB4 (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     MiSmallVaStillMapsFrame @ 0x1401077A0 (MiSmallVaStillMapsFrame.c)
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1403DDC44 (KeWriteProtectPAT.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     EtwpCheckNotificationAccess @ 0x140491C9C (EtwpCheckNotificationAccess.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
