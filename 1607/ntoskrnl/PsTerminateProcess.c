/*
 * XREFs of PsTerminateProcess @ 0x1404CE4F8
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1401E042C (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x140427CF4 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     KiSchedulerApcTerminate @ 0x1404EC990 (KiSchedulerApcTerminate.c)
 *     PspProcessClose @ 0x14051B728 (PspProcessClose.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x14061822C (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14067F7E0 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x140688460 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1406BA808 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1404EAEF8 (PspTerminateProcess.c)
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
