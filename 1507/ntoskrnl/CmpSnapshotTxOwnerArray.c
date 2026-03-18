/*
 * XREFs of CmpSnapshotTxOwnerArray @ 0x140664768
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArray(int *a1, unsigned int *a2, PVOID **a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  PVOID *PoolWithTag; // rax

  v3 = *a1;
  v4 = 0LL;
  if ( !*a1 )
    return 3221225485LL;
  *a2 = 0;
  v9 = v3 & 0x7FFFFFFF;
  v10 = v9;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x36344D43u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v9 == 1 )
  {
    *PoolWithTag = *(PVOID *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 64LL);
    ObfReferenceObject(**a3);
  }
  else if ( v9 )
  {
    do
    {
      (*a3)[v4] = *(PVOID *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + v4 * 8) + 56LL) + 64LL);
      ObfReferenceObject((*a3)[v4++]);
      --v10;
    }
    while ( v10 );
  }
  *a2 = v9;
  return 0LL;
}
