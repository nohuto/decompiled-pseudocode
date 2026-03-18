/*
 * XREFs of CmpSnapshotTxOwnerArray @ 0x1405EC1D0
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
