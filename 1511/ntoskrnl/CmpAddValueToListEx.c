/*
 * XREFs of CmpAddValueToListEx @ 0x1403D86A0
 * Callers:
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1403F43A0 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpMergeKeyValues @ 0x1405E8A90 (CmpMergeKeyValues.c)
 * Callees:
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR a1,
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
  int v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v17[0] = 0LL;
  v16 = -1;
  v7 = a3;
  v9 = *a5 + 1;
  if ( v9 <= 1 )
  {
    v14 = a6;
    if ( !a6 )
      v14 = 1;
    v10 = HvAllocateCell(a1, (unsigned int)(4 * v14), a4, v17, &v16);
  }
  else
  {
    v10 = HvReallocateCell(a1, a5[1], (__int64)v17, (__int64)&v16);
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
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v16);
  return 0LL;
}
