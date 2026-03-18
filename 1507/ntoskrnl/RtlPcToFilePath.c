/*
 * XREFs of RtlPcToFilePath @ 0x1406CF870
 * Callers:
 *     KitLogFeatureUsage @ 0x1402657C8 (KitLogFeatureUsage.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall RtlPcToFilePath(unsigned __int64 a1, UNICODE_STRING *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r8
  PVOID *v6; // rdx
  PVOID v7; // rcx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v5 = (PVOID *)PsLoadedModuleList;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v6 = v5;
      v5 = (PVOID *)*v5;
      v7 = v6[6];
      if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v6 + 9));
        ExReleaseResourceLite(&PsLoadedModuleResource);
        v11 = KeGetCurrentThread();
        v12 = v11->KernelApcDisable + 1;
        v11->KernelApcDisable = v12;
        if ( !v12
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
          && !v11->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return 0LL;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221226021LL;
}
