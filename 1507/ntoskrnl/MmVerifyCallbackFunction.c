/*
 * XREFs of MmVerifyCallbackFunction @ 0x1405A72EC
 * Callers:
 *     KeRegisterBoundCallback @ 0x140200014 (KeRegisterBoundCallback.c)
 *     ObRegisterCallbacks @ 0x1405A6D9C (ObRegisterCallbacks.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1406C6364 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

_BOOL8 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v3; // edi
  PVOID *v4; // rax
  __int16 v5; // ax

  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry(a1, 1);
  if ( v4 )
    v3 = ((_BYTE)v4[13] & 0x20) != 0;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v3;
}
