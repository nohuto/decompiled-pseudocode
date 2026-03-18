/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x14002AA14
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14002A0FC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x14002AAC8 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x140463BF8 (LdrpResGetMappingSize.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v3; // rdi
  PVOID *v4; // rcx
  PVOID v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int16 v8; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !CurrentThread )
    return 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = (PVOID *)PsLoadedModuleList;
  while ( 1 )
  {
    v5 = v4[6];
    if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)v4 + 16) )
      break;
    v4 = (PVOID *)*v4;
    if ( v4 == &PsLoadedModuleList )
      goto LABEL_6;
  }
  v3 = v4;
LABEL_6:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v8 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v8;
  if ( !v8 )
  {
    v10 = &CurrentThread->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != v10
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v10, v6, v7);
    }
  }
  return v3;
}
