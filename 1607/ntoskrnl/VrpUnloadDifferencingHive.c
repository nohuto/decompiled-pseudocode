/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14061792C
 * Callers:
 *     VrpCleanupNamespace @ 0x140612ED4 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140613AAC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140614030 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ZwUnloadKey @ 0x14015D850 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14015D870 (ZwUnloadKey2.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140617004 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x140617050 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140617090 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406171F4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x1406174EC (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpLockDiffHiveEntry @ 0x1406177D0 (VrpLockDiffHiveEntry.c)
 *     VrpLockDiffHiveTableShared @ 0x14061788C (VrpLockDiffHiveTableShared.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406178F4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpUnlockDiffHiveEntry @ 0x140617A40 (VrpUnlockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveTable @ 0x140617A7C (VrpUnlockDiffHiveTable.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v3; // rbx
  NTSTATUS v4; // edi
  char v5; // al
  char v6; // si
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
        v4 = ZwUnloadKey2(&KeyObjectAttributes, 1u);
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
