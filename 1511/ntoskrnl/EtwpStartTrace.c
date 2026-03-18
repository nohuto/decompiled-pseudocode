/*
 * XREFs of EtwpStartTrace @ 0x1404CA194
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1)
{
  __int64 SiloDriverState; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // rdi

  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  CurrentThread = KeGetCurrentThread();
  v4 = SiloDriverState;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  LODWORD(a1) = EtwpStartLogger(v4, a1);
  KeReleaseMutex(&EtwpStartTraceMutex, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsDereferenceMonitorContextServerSilo(v4);
  return (unsigned int)a1;
}
