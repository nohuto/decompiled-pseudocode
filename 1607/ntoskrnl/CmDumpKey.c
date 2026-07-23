/*
 * XREFs of CmDumpKey @ 0x14060C16C
 * Callers:
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFreeOffsetArray @ 0x14060489C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604F5C (CmpWriteOffsetArrayToFile.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  BOOLEAN v9; // bp
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF
  PVOID *v23; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v21 = 0;
  v23 = 0LL;
  v22 = 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v5 == CmpMasterHive )
    return 3221225506LL;
  if ( *(_WORD *)(v2 + 58) )
  {
    CmpLogUnsupportedOperation(0x16u);
    return 3221225474LL;
  }
  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v9 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v10, v11);
    v12 = -1073741491;
LABEL_12:
    CmpUnlockRegistry();
    if ( v9 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
    }
    return v12;
  }
  CmpLockKcbShared(v2);
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v12 = -1073741444;
LABEL_11:
    CmpUnlockKcb((char *)v2);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v2 + 32) != *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) )
  {
    v12 = -1073741811;
    goto LABEL_11;
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 2848), 1u);
  v16 = CmpSnapshotHiveToOffsetArray(v5, &v21, &v23, (unsigned int *)&v22);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
  CmpUnlockKcb((char *)v2);
  CmpUnlockRegistry();
  if ( v16 >= 0 )
  {
    v16 = CmpWriteOffsetArrayToFile(v17, v21, (__int64)v23, v22, a2);
    CmpFreeOffsetArray(v21, v23);
  }
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
  return (unsigned int)v16;
}
