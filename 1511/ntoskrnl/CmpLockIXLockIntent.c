/*
 * XREFs of CmpLockIXLockIntent @ 0x1403DE050
 * Callers:
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    *a1 = 1;
    *((_QWORD *)a1 + 1) = a2;
LABEL_8:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  if ( v2 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL)) != 0;
  if ( v2 != 1 )
  {
    v8 = 0LL;
    while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v8) + 56LL)) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *a1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (*a1 + 1), 0x78494D43u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
          return 0;
        memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
        ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
        v11 = *a1;
        *((_QWORD *)a1 + 1) = v10;
        v10[v11] = a2;
        goto LABEL_17;
      }
    }
    return 1;
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v6 + 56)) )
    return 1;
  v7 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x78494D43u);
  if ( v7 )
  {
    *((_QWORD *)a1 + 1) = v7;
    *v7 = v6;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
LABEL_17:
    ++*a1;
    goto LABEL_8;
  }
  return 0;
}
