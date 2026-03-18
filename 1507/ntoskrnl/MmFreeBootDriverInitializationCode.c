/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x14059A128
 * Callers:
 *     Phase1Initialization @ 0x14059A0DC (Phase1Initialization.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     MiFreeDriverInitialization @ 0x140573BE0 (MiFreeDriverInitialization.c)
 */

void MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rbx
  PVOID *i; // rdi
  __int16 v2; // ax

  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v2 = Lock->KernelApcDisable + 1;
  Lock->KernelApcDisable = v2;
  if ( !v2
    && ($CD287064E7C9F7953DE243E927CFCB99 *)Lock->ApcState.ApcListHead[0].Flink != &Lock->152
    && !Lock->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  MmReleaseLoadLock((__int64)Lock);
}
