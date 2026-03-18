/*
 * XREFs of RtlPcToFilePath @ 0x14064C7EC
 * Callers:
 *     KitLogFeatureUsage @ 0x140215664 (KitLogFeatureUsage.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall RtlPcToFilePath(unsigned __int64 a1, UNICODE_STRING *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r8
  unsigned int v6; // ebx
  PVOID *v7; // rdx
  PVOID v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v5 = (PVOID *)PsLoadedModuleList;
  v6 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v7 = v5;
      v5 = (PVOID *)*v5;
      v8 = v7[6];
      if ( a1 >= (unsigned __int64)v8 && a1 < (unsigned __int64)v8 + *((unsigned int *)v7 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v7 + 9));
        goto LABEL_7;
      }
    }
  }
  v6 = -1073741275;
LABEL_7:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
