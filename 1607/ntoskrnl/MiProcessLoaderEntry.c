/*
 * XREFs of MiProcessLoaderEntry @ 0x140082CAC
 * Callers:
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     RtlInsertInvertedFunctionTable @ 0x140082BBC (RtlInsertInvertedFunctionTable.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x140082DF8 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x140082E18 (MmLockLoadedModuleListExclusive.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14012EA74 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall MiProcessLoaderEntry(int *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int **v5; // rax
  PVOID *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  int **v12; // rax
  char v13; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceExclusiveLite(CurrentThread);
  if ( a2 == 1 )
  {
    MmLockLoadedModuleListExclusive(&v13);
    v5 = (int **)*(&PsLoadedModuleList + 1);
    v6 = &PsLoadedModuleList;
    if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PsLoadedModuleList;
    LOBYTE(v6) = v13;
    *((_QWORD *)a1 + 1) = v5;
    *v5 = a1;
    *(&PsLoadedModuleList + 1) = a1;
    MmUnlockLoadedModuleListExclusive(v6);
    RtlInsertInvertedFunctionTable(*((_QWORD *)a1 + 6), a1[16]);
  }
  else
  {
    RtlRemoveInvertedFunctionTable(*((_QWORD *)a1 + 6));
    MmLockLoadedModuleListExclusive(&v13);
    v11 = *(_QWORD *)a1;
    v12 = (int **)*((_QWORD *)a1 + 1);
    if ( *(int **)(*(_QWORD *)a1 + 8LL) != a1 || *v12 != a1 )
      __fastfail(3u);
    LOBYTE(v10) = v13;
    *v12 = (int *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    MmUnlockLoadedModuleListExclusive(v10);
  }
  return MiReleaseResourceLite(CurrentThread, v7, v8);
}
