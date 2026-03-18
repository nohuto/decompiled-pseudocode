/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1400DD718
 * Callers:
 *     LdrpGetImageSize @ 0x1400DD694 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DD8F4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x1404652AC (LdrpResGetMappingSize.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v2; // rdi
  PVOID *v4; // rcx
  PVOID v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
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
      goto LABEL_5;
  }
  v2 = v4;
LABEL_5:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v2;
}
