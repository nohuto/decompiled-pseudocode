/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14061736C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617528 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VrpAllocateDiffHiveEntry @ 0x140616EFC (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406171F4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14061782C (VrpLockDiffHiveTableExclusive.c)
 *     VrpLockDiffHiveTableShared @ 0x14061788C (VrpLockDiffHiveTableShared.c)
 *     VrpUnlockDiffHiveTable @ 0x140617A7C (VrpUnlockDiffHiveTable.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  _QWORD *DiffHiveEntry; // rbx
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+48h] [rbp+20h]

  DiffHiveEntry = 0LL;
  VrpLockDiffHiveTableShared();
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
    *a3 = DiffHiveEntryForMountPointWithLock;
  }
  else
  {
    VrpUnlockDiffHiveTable();
    DiffHiveEntry = VrpAllocateDiffHiveEntry(&String1->Length, a2);
    if ( !DiffHiveEntry )
      return (unsigned int)-1073741670;
    VrpLockDiffHiveTableExclusive();
    v9 = VrpFindDiffHiveEntryForMountPointWithLock(String1);
    if ( v9 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = v9;
    }
    else
    {
      v10 = dword_1403225C4;
      *a3 = (__int64)DiffHiveEntry;
      v14 = DiffHiveEntry[1] & (-1LL << (v10 & 0x1F));
      v11 = qword_1403225C8;
      v12 = (37
           * (BYTE6(v14)
            + 37
            * (BYTE5(v14)
             + 37
             * (BYTE4(v14)
              + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
           + HIBYTE(v14)) & ((v10 >> 5) - 1);
      *DiffHiveEntry = *(_QWORD *)(qword_1403225C8 + 8 * v12);
      *(_QWORD *)(v11 + 8 * v12) = DiffHiveEntry;
      ++gLoadedDiffHives;
      DiffHiveEntry = 0LL;
    }
  }
  v8 = 0;
  VrpUnlockDiffHiveTable();
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v8;
}
