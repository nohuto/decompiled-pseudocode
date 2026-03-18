/*
 * XREFs of EtwpStartTrace @ 0x140559FF0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int started; // ebx
  struct _KTHREAD *v4; // rdx
  __int16 v5; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  started = EtwpStartLogger(a1);
  KeReleaseMutex(&EtwpStartTraceMutex, 0);
  v4 = KeGetCurrentThread();
  v5 = v4->KernelApcDisable + 1;
  v4->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
    && !v4->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return started;
}
