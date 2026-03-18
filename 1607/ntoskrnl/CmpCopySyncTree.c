/*
 * XREFs of CmpCopySyncTree @ 0x1406081A4
 * Callers:
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x140609150 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x140608240 (CmpCopySyncTree2.c)
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
