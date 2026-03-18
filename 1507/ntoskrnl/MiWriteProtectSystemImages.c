/*
 * XREFs of MiWriteProtectSystemImages @ 0x140597344
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiProtectSystemImage @ 0x1405973F8 (MiProtectSystemImage.c)
 */

void MiWriteProtectSystemImages()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  __int64 v2; // rcx
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = (__int64)i[14];
    if ( !v2 || !*(_QWORD *)(MiSectionControlArea(v2) + 136) || ((_DWORD)i[13] & 0x8000000) == 0 )
      MiProtectSystemImage(i);
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
