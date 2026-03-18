/*
 * XREFs of MiUnlockBootPageSections @ 0x1407C9590
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiLockPagableSections @ 0x1407C9688 (MiLockPagableSections.c)
 */

void MiUnlockBootPageSections()
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *i; // rdi
  int v2; // eax
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = *((_DWORD *)i + 26);
    if ( (v2 & 0x400000) != 0 )
    {
      *((_DWORD *)i + 26) = v2 & 0xFFBFFFFF;
      MiLockPagableSections(i, 0LL);
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v3 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v3;
  if ( !v3
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
