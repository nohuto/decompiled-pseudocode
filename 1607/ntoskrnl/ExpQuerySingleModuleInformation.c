/*
 * XREFs of ExpQuerySingleModuleInformation @ 0x1406AC168
 * Callers:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140563F90 (ExpConvertLdrEntryToModuleInfo.c)
 */

__int64 __fastcall ExpQuerySingleModuleInformation(unsigned __int64 *a1, unsigned int a2, char a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // rbx
  PVOID *v9; // rcx
  __int16 v10; // r9
  PVOID v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  *a4 = 0;
  if ( a3 )
    return 3221225506LL;
  if ( a2 < 0x148 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *a1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v9 = (PVOID *)PsLoadedModuleList;
  v10 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v9 != &PsLoadedModuleList )
    {
      v11 = v9[6];
      if ( v8 >= (unsigned __int64)v11 && v8 < (unsigned __int64)v11 + *((unsigned int *)v9 + 16) )
      {
        *((_WORD *)a1 + 4) = 0;
        ExpConvertLdrEntryToModuleInfo((__int64)v9, v10, (__int64)(a1 + 1));
        v12 = 0;
        goto LABEL_11;
      }
      v9 = (PVOID *)*v9;
      ++v10;
    }
  }
  v12 = -1073741275;
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v12 >= 0 )
    *a4 = 328;
  return (unsigned int)v12;
}
