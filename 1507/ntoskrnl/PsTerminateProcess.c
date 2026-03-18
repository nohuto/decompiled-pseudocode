/*
 * XREFs of PsTerminateProcess @ 0x1405579A8
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14020FF34 (MiReAcquireCommitFailWorker.c)
 *     KiSchedulerApcTerminate @ 0x1404204C4 (KiSchedulerApcTerminate.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x14052D5C0 (PspProcessClose.c)
 *     DbgkpCloseObject @ 0x140666AD0 (DbgkpCloseObject.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     PspTerminateServerSiloDeferred @ 0x1406C2DDC (PspTerminateServerSiloDeferred.c)
 *     PspUmsUnInitThread @ 0x1406C3888 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 *     RtlpTerminateCurrentProcess @ 0x1406CBE3C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1406FC7B4 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspTerminateProcess @ 0x14041C990 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v3; // edi
  __int16 v4; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2);
  v4 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v3;
}
