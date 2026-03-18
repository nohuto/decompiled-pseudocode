/*
 * XREFs of IopQueryConflictList @ 0x1406979A0
 * Callers:
 *     PiControlQueryConflictList @ 0x140694AD8 (PiControlQueryConflictList.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopQueryConflictListInternal @ 0x140697A64 (IopQueryConflictListInternal.c)
 */

__int64 __fastcall IopQueryConflictList(int a1, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r8d
  unsigned int ConflictListInternal; // ebx
  struct _KTHREAD *v11; // rdx
  __int16 v12; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  ConflictListInternal = IopQueryConflictListInternal(a1, a2, v9, a4, a5);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return ConflictListInternal;
}
