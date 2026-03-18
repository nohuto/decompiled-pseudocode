/*
 * XREFs of CmpAddValueToListEx @ 0x1404A1188
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1404A10D0 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpMergeKeyValues @ 0x14065FFA8 (CmpMergeKeyValues.c)
 * Callees:
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int a6)
{
  __int64 v7; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  int v14; // edx
  _DWORD *v15; // r9
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v17[0] = 0LL;
  LODWORD(v16) = -1;
  v7 = a3;
  v9 = *a5 + 1;
  if ( v9 <= 1 )
  {
    v14 = a6;
    if ( !a6 )
      v14 = 1;
    v10 = HvAllocateCell(BugCheckParameter2, 4 * v14, a4, (__int64)v17, &v16);
  }
  else
  {
    v10 = HvReallocateCell(BugCheckParameter2, a5[1], (__int64)v17, (__int64)&v16);
  }
  if ( v10 == -1 )
    return 3221225626LL;
  v11 = v17[0];
  v12 = v9 - 1;
  a5[1] = v10;
  if ( (unsigned int)v12 > (unsigned int)v7 )
  {
    v15 = (_DWORD *)(v11 + 4 * v12);
    do
    {
      v12 = (unsigned int)(v12 - 1);
      *v15-- = *(_DWORD *)(v11 + 4 * v12);
    }
    while ( (unsigned int)v12 > (unsigned int)v7 );
  }
  *(_DWORD *)(v11 + 4 * v7) = a2;
  *a5 = v9;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
  return 0LL;
}
