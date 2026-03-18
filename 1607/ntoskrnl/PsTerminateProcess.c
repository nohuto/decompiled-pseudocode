/*
 * XREFs of PsTerminateProcess @ 0x1404EC470
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1401E0600 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x140428E24 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     PspProcessClose @ 0x1404A3328 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x140509A00 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140618178 (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14067F6FC (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x14068837C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1406BA6D0 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140507F68 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
