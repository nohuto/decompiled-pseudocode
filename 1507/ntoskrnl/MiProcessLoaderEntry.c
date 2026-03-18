/*
 * XREFs of MiProcessLoaderEntry @ 0x1400253E0
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x14002533C (RtlRemoveInvertedFunctionTable.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1400254F0 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14002551C (MmLockLoadedModuleListExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlInsertInvertedFunctionTable @ 0x1401532CC (RtlInsertInvertedFunctionTable.c)
 */

__int64 __fastcall MiProcessLoaderEntry(PVOID *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  PVOID **v5; // rax
  PVOID *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rcx
  PVOID *v12; // rdx
  PVOID **v13; // rax
  char v14; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 == 1 )
  {
    MmLockLoadedModuleListExclusive(&v14);
    v5 = (PVOID **)*(&PsLoadedModuleList + 1);
    v6 = &PsLoadedModuleList;
    *a1 = &PsLoadedModuleList;
    a1[1] = v5;
    if ( *v5 != &PsLoadedModuleList )
      __fastfail(3u);
    LOBYTE(v6) = v14;
    *v5 = a1;
    *(&PsLoadedModuleList + 1) = a1;
    MmUnlockLoadedModuleListExclusive(v6);
    RtlInsertInvertedFunctionTable(a1[6], *((unsigned int *)a1 + 16));
  }
  else
  {
    RtlRemoveInvertedFunctionTable((__int64)a1[6]);
    MmLockLoadedModuleListExclusive(&v14);
    v12 = (PVOID *)*a1;
    v13 = (PVOID **)a1[1];
    if ( *((PVOID **)*a1 + 1) != a1 || *v13 != a1 )
      __fastfail(3u);
    LOBYTE(v11) = v14;
    *v13 = v12;
    v12[1] = v13;
    MmUnlockLoadedModuleListExclusive(v11);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  result = (unsigned int)++CurrentThread->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result && !CurrentThread->SpecialApcDisable )
      return KiCheckForKernelApcDelivery(v8, v7, v9);
  }
  return result;
}
