/*
 * XREFs of PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion @ 0x140088950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  *a1 = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
  --CurrentThread->KernelApcDisable;
  return CurrentThread->WaitBlock[2].SparePtr;
}
