/*
 * XREFs of VrpUnloadDifferencingHive @ 0x140617878
 * Callers:
 *     VrpCleanupNamespace @ 0x140612E20 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406139F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140613F7C (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ZwUnloadKey @ 0x14015D2E0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14015D300 (ZwUnloadKey2.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140616F50 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x140616F9C (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140616FDC (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140617140 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x140617438 (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x14061771C (VrpLockDiffHiveEntry.c)
 *     VrpLockDiffHiveTableShared @ 0x1406177D8 (VrpLockDiffHiveTableShared.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x140617840 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpUnlockDiffHiveEntry @ 0x14061798C (VrpUnlockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveTable @ 0x1406179C8 (VrpUnlockDiffHiveTable.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v3; // rbx
  int v4; // edi
  char v5; // al
  char v6; // si
  __int64 v7; // r8
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v3 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  VrpUnlockDiffHiveTable();
  if ( v3 )
  {
    VrpLockDiffHiveEntry(v3);
    if ( VrpDecrementDiffHiveEntryHardRefCount(v3) )
    {
      v5 = VrpBecomeDiffHiveEntryTransitionOwner(v3);
      *(_DWORD *)(v3 + 56) &= ~1u;
      v6 = v5;
      VrpUnlockDiffHiveEntry(v3);
      KeyObjectAttributes.RootDirectory = 0LL;
      KeyObjectAttributes.Length = 48;
      *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
      KeyObjectAttributes.Attributes = 576;
      KeyObjectAttributes.ObjectName = String1;
      v4 = ZwUnloadKey(&KeyObjectAttributes);
      if ( v4 < 0 )
        v4 = ZwUnloadKey2((__int64)&KeyObjectAttributes, 1LL, v7);
      VrpLockDiffHiveEntry(v3);
      if ( v4 < 0 )
      {
        *(_DWORD *)(v3 + 56) |= 1u;
        VrpIncrementDiffHiveEntryHardRefCount(v3);
      }
      if ( v6 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v3);
    }
    else
    {
      v4 = 0;
    }
    VrpUnlockDiffHiveEntry(v3);
    VrpDereferenceDiffHiveEntry((_QWORD *)v3);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v4;
}
