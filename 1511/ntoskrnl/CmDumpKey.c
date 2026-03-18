/*
 * XREFs of CmDumpKey @ 0x1405E943C
 * Callers:
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpFreeOffsetArray @ 0x1405E528C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x1405E5958 (CmpWriteOffsetArrayToFile.c)
 */

__int64 __fastcall CmDumpKey(char *P, HANDLE FileHandle)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // si
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF
  PVOID *v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0LL;
  v12 = 0;
  v4 = *((_QWORD *)P + 4);
  if ( v4 == CmpMasterHive )
    return 3221225506LL;
  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v7 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = -1073741491;
LABEL_10:
    CmpUnlockRegistry();
    if ( v7 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return v8;
  }
  CmpLockKcbShared((__int64)P);
  if ( (*((_DWORD *)P + 1) & 0x20000) != 0 )
  {
    v8 = -1073741444;
LABEL_9:
    CmpUnlockKcb(P);
    goto LABEL_10;
  }
  if ( *((_DWORD *)P + 10) != *(_DWORD *)(*(_QWORD *)(v4 + 64) + 36LL) )
  {
    v8 = -1073741811;
    goto LABEL_9;
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 2848), 1u);
  v9 = CmpSnapshotHiveToOffsetArray(v4, &v11, &v13, (unsigned int *)&v12);
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 2848));
  CmpUnlockKcb(P);
  CmpUnlockRegistry();
  if ( v9 >= 0 )
  {
    v9 = CmpWriteOffsetArrayToFile(v10, v11, (__int64)v13, v12, FileHandle);
    CmpFreeOffsetArray(v11, v13);
  }
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
