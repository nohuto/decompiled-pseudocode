/*
 * XREFs of PsTerminateProcess @ 0x140452368
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1401D0384 (MiReAcquireCommitFailWorker.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x1403F6564 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x1404A3F14 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1404AC820 (KiSchedulerApcTerminate.c)
 *     DbgkpCloseObject @ 0x1405EE548 (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x140641318 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 *     RtlpTerminateCurrentProcess @ 0x140648DB8 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140677F98 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140450604 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (ULONG_PTR)CurrentThread, a2, 1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
