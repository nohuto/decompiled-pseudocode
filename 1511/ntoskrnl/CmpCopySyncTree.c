/*
 * XREFs of CmpCopySyncTree @ 0x14050EEBC
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 */

char __fastcall CmpCopySyncTree(int a1, int a2, ULONG_PTR a3, int a4, int a5, int a6)
{
  _DWORD *PoolWithTag; // rax
  int v11; // edx
  int v12; // r8d
  void *v13; // rdi
  char v14; // bl

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x20204D43u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0;
    PoolWithTag[3] &= 0xFFFFFFF8;
    *((_BYTE *)PoolWithTag + 16) &= 0xFCu;
    *PoolWithTag = a2;
    PoolWithTag[1] = a4;
    v14 = CmpCopySyncTree2((int)PoolWithTag, v11, v12, a1, a3, a5, a6);
    ExFreePoolWithTag(v13, 0);
    LOBYTE(PoolWithTag) = v14;
  }
  return (char)PoolWithTag;
}
