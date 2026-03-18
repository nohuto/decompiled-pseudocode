/*
 * XREFs of CmpCopySyncTree @ 0x140585040
 * Callers:
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
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
