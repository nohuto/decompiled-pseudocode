/*
 * XREFs of MiProcessLoaderEntry @ 0x14001A270
 * Callers:
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     RtlInsertInvertedFunctionTable @ 0x14001A188 (RtlInsertInvertedFunctionTable.c)
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14001A804 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14001A824 (MmLockLoadedModuleListExclusive.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1400EFBC4 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall MiProcessLoaderEntry(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  PVOID **v5; // rax
  PVOID *v6; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  char v11; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceExclusiveLite(CurrentThread);
  if ( a2 == 1 )
  {
    MmLockLoadedModuleListExclusive(&v11);
    v5 = (PVOID **)*(&PsLoadedModuleList + 1);
    v6 = &PsLoadedModuleList;
    *a1 = &PsLoadedModuleList;
    a1[1] = v5;
    if ( *v5 != &PsLoadedModuleList )
      __fastfail(3u);
    LOBYTE(v6) = v11;
    *v5 = (PVOID *)a1;
    *(&PsLoadedModuleList + 1) = a1;
    MmUnlockLoadedModuleListExclusive(v6);
    RtlInsertInvertedFunctionTable(a1[6], *((_DWORD *)a1 + 16));
  }
  else
  {
    RtlRemoveInvertedFunctionTable(a1[6]);
    MmLockLoadedModuleListExclusive(&v11);
    v9 = (_QWORD *)*a1;
    v10 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v10 != a1 )
      __fastfail(3u);
    LOBYTE(v8) = v11;
    *v10 = v9;
    v9[1] = v10;
    MmUnlockLoadedModuleListExclusive(v8);
  }
  return MiReleaseResourceLite(CurrentThread);
}
